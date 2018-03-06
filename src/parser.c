#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 181
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
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'f')
        ADVANCE(42);
      if (lookahead == 'i')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(52);
      if (lookahead == '|')
        ADVANCE(58);
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
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == '+')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(27);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 61:
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
      if (lookahead == 'f')
        ADVANCE(42);
      if (lookahead == 'i')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(52);
      if (lookahead == '|')
        ADVANCE(58);
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
        SKIP(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(64);
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
      if (lookahead == 'e')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(58);
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
        SKIP(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(66);
      if (lookahead == 'n')
        ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 's')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'f')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 71:
      if (lookahead == 'd')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 73:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == 'e')
        ADVANCE(74);
      if (lookahead == 'f')
        ADVANCE(42);
      if (lookahead == 'i')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 75:
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
      if (lookahead == 'f')
        ADVANCE(42);
      if (lookahead == 'i')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(52);
      if (lookahead == '|')
        ADVANCE(58);
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
        SKIP(75);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 76:
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
        ADVANCE(58);
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
        SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'f')
        ADVANCE(42);
      if (lookahead == 'i')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 63},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 63},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 75},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 63},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 63},
  [47] = {.lex_state = 63},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 63},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 63},
  [55] = {.lex_state = 63},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 63},
  [61] = {.lex_state = 73},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 63},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 75},
  [66] = {.lex_state = 63},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 75},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 75},
  [72] = {.lex_state = 75},
  [73] = {.lex_state = 61},
  [74] = {.lex_state = 75},
  [75] = {.lex_state = 75},
  [76] = {.lex_state = 61},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 61},
  [81] = {.lex_state = 61},
  [82] = {.lex_state = 61},
  [83] = {.lex_state = 61},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 63},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 61},
  [90] = {.lex_state = 63},
  [91] = {.lex_state = 61},
  [92] = {.lex_state = 61},
  [93] = {.lex_state = 61},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 61},
  [96] = {.lex_state = 63},
  [97] = {.lex_state = 63},
  [98] = {.lex_state = 63},
  [99] = {.lex_state = 63},
  [100] = {.lex_state = 63},
  [101] = {.lex_state = 73},
  [102] = {.lex_state = 63},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 73},
  [105] = {.lex_state = 76},
  [106] = {.lex_state = 63},
  [107] = {.lex_state = 73},
  [108] = {.lex_state = 63},
  [109] = {.lex_state = 75},
  [110] = {.lex_state = 73},
  [111] = {.lex_state = 63},
  [112] = {.lex_state = 75},
  [113] = {.lex_state = 63},
  [114] = {.lex_state = 75},
  [115] = {.lex_state = 77},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 63},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 75},
  [120] = {.lex_state = 76},
  [121] = {.lex_state = 63},
  [122] = {.lex_state = 61},
  [123] = {.lex_state = 63},
  [124] = {.lex_state = 63},
  [125] = {.lex_state = 63},
  [126] = {.lex_state = 63},
  [127] = {.lex_state = 63},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 77},
  [131] = {.lex_state = 63},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 76},
  [134] = {.lex_state = 76},
  [135] = {.lex_state = 76},
  [136] = {.lex_state = 76},
  [137] = {.lex_state = 63},
  [138] = {.lex_state = 76},
  [139] = {.lex_state = 63},
  [140] = {.lex_state = 61},
  [141] = {.lex_state = 76},
  [142] = {.lex_state = 73},
  [143] = {.lex_state = 76},
  [144] = {.lex_state = 63},
  [145] = {.lex_state = 73},
  [146] = {.lex_state = 75},
  [147] = {.lex_state = 73},
  [148] = {.lex_state = 75},
  [149] = {.lex_state = 73},
  [150] = {.lex_state = 63},
  [151] = {.lex_state = 75},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 77},
  [155] = {.lex_state = 75},
  [156] = {.lex_state = 63},
  [157] = {.lex_state = 73},
  [158] = {.lex_state = 63},
  [159] = {.lex_state = 63},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 61},
  [163] = {.lex_state = 63},
  [164] = {.lex_state = 75},
  [165] = {.lex_state = 75},
  [166] = {.lex_state = 73},
  [167] = {.lex_state = 75},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 77},
  [171] = {.lex_state = 63},
  [172] = {.lex_state = 73},
  [173] = {.lex_state = 63},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 75},
  [176] = {.lex_state = 75},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 77},
  [179] = {.lex_state = 63},
  [180] = {.lex_state = 75},
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
    [sym_identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym__times_operator] = ACTIONS(3),
    [sym__plus_operator] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__expression] = STATE(7),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [2] = {
    [sym_identifier] = ACTIONS(26),
    [sym_comment] = ACTIONS(24),
  },
  [3] = {
    [sym_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(24),
  },
  [4] = {
    [sym__expression] = STATE(14),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_end] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(42),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(42),
    [anon_sym_EQ_GT] = ACTIONS(42),
    [anon_sym_elseif] = ACTIONS(42),
    [anon_sym_else] = ACTIONS(42),
    [sym__times_operator] = ACTIONS(42),
    [sym__plus_operator] = ACTIONS(42),
    [sym__arrow_operator] = ACTIONS(42),
    [sym__assign_operator] = ACTIONS(42),
    [anon_sym_LF] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_comment] = ACTIONS(24),
  },
  [7] = {
    [sym_argument_list] = STATE(24),
    [aux_sym__expression_list_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(56),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(62),
    [sym__assign_operator] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(66),
    [anon_sym_SEMI] = ACTIONS(66),
    [sym_comment] = ACTIONS(44),
  },
  [8] = {
    [sym__expression] = STATE(27),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(68),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [9] = {
    [sym_parameter_list] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_comment] = ACTIONS(24),
  },
  [10] = {
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(24),
  },
  [11] = {
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(24),
  },
  [12] = {
    [sym__expression] = STATE(32),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [13] = {
    [anon_sym_module] = ACTIONS(76),
    [anon_sym_function] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PIPE_PIPE] = ACTIONS(76),
    [anon_sym_AMP_AMP] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(78),
    [anon_sym_if] = ACTIONS(76),
    [sym_identifier] = ACTIONS(42),
    [sym_number] = ACTIONS(76),
    [sym_string] = ACTIONS(78),
    [sym__times_operator] = ACTIONS(76),
    [sym__plus_operator] = ACTIONS(76),
    [sym__arrow_operator] = ACTIONS(76),
    [sym__assign_operator] = ACTIONS(76),
    [sym_comment] = ACTIONS(24),
  },
  [14] = {
    [sym__expression] = STATE(41),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_argument_list] = STATE(42),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(92),
    [sym__assign_operator] = ACTIONS(94),
    [sym_comment] = ACTIONS(24),
  },
  [15] = {
    [sym__expression] = STATE(44),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [16] = {
    [sym__expression] = STATE(45),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [17] = {
    [sym__expression] = STATE(46),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [18] = {
    [sym__expression] = STATE(47),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [19] = {
    [sym__expression] = STATE(48),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [20] = {
    [sym__expression] = STATE(49),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [21] = {
    [sym__expression] = STATE(50),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [22] = {
    [sym__expression] = STATE(51),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [23] = {
    [sym__expression] = STATE(52),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_end] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_PIPE_PIPE] = ACTIONS(100),
    [anon_sym_AMP_AMP] = ACTIONS(100),
    [anon_sym_EQ_GT] = ACTIONS(100),
    [anon_sym_elseif] = ACTIONS(100),
    [anon_sym_else] = ACTIONS(100),
    [sym__times_operator] = ACTIONS(100),
    [sym__plus_operator] = ACTIONS(100),
    [sym__arrow_operator] = ACTIONS(100),
    [sym__assign_operator] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(100),
    [sym_comment] = ACTIONS(44),
  },
  [25] = {
    [aux_sym__expression_list_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_LF] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(44),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(106),
    [anon_sym_EQ_GT] = ACTIONS(106),
    [anon_sym_elseif] = ACTIONS(106),
    [anon_sym_else] = ACTIONS(106),
    [sym__times_operator] = ACTIONS(106),
    [sym__plus_operator] = ACTIONS(106),
    [sym__arrow_operator] = ACTIONS(106),
    [sym__assign_operator] = ACTIONS(106),
    [anon_sym_LF] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(106),
    [sym_comment] = ACTIONS(44),
  },
  [27] = {
    [sym_argument_list] = STATE(24),
    [aux_sym__expression_list_repeat1] = STATE(60),
    [anon_sym_end] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_comment] = ACTIONS(44),
  },
  [28] = {
    [anon_sym_RPAREN] = ACTIONS(118),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(24),
  },
  [29] = {
    [sym__expression] = STATE(64),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(122),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [30] = {
    [sym__expression] = STATE(66),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [31] = {
    [sym_parameter_list] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_comment] = ACTIONS(24),
  },
  [32] = {
    [sym__expression] = STATE(68),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_argument_list] = STATE(42),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(92),
    [sym__assign_operator] = ACTIONS(94),
    [sym_comment] = ACTIONS(24),
  },
  [33] = {
    [sym__expression] = STATE(70),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [34] = {
    [sym__expression] = STATE(71),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [35] = {
    [sym__expression] = STATE(72),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [36] = {
    [sym__expression] = STATE(73),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [37] = {
    [sym__expression] = STATE(74),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [38] = {
    [sym__expression] = STATE(75),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [39] = {
    [sym__expression] = STATE(76),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [40] = {
    [sym__expression] = STATE(77),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [41] = {
    [sym_argument_list] = STATE(24),
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(86),
    [aux_sym__expression_list_repeat1] = STATE(87),
    [aux_sym_conditional_expression_repeat1] = STATE(88),
    [anon_sym_end] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(130),
    [anon_sym_elseif] = ACTIONS(132),
    [anon_sym_else] = ACTIONS(134),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(136),
    [sym__assign_operator] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [sym_comment] = ACTIONS(44),
  },
  [42] = {
    [anon_sym_module] = ACTIONS(142),
    [anon_sym_function] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_PIPE_PIPE] = ACTIONS(142),
    [anon_sym_AMP_AMP] = ACTIONS(144),
    [anon_sym_EQ_GT] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(142),
    [sym_identifier] = ACTIONS(100),
    [sym_number] = ACTIONS(142),
    [sym_string] = ACTIONS(144),
    [sym__times_operator] = ACTIONS(142),
    [sym__plus_operator] = ACTIONS(142),
    [sym__arrow_operator] = ACTIONS(142),
    [sym__assign_operator] = ACTIONS(142),
    [sym_comment] = ACTIONS(24),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_end] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_PIPE_PIPE] = ACTIONS(146),
    [anon_sym_AMP_AMP] = ACTIONS(146),
    [anon_sym_EQ_GT] = ACTIONS(146),
    [anon_sym_elseif] = ACTIONS(146),
    [anon_sym_else] = ACTIONS(146),
    [sym__times_operator] = ACTIONS(146),
    [sym__plus_operator] = ACTIONS(146),
    [sym__arrow_operator] = ACTIONS(146),
    [sym__assign_operator] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(146),
    [sym_comment] = ACTIONS(44),
  },
  [44] = {
    [sym_argument_list] = STATE(42),
    [aux_sym_argument_list_repeat1] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [sym_comment] = ACTIONS(24),
  },
  [45] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_end] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PIPE_PIPE] = ACTIONS(158),
    [anon_sym_AMP_AMP] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_elseif] = ACTIONS(158),
    [anon_sym_else] = ACTIONS(158),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(158),
    [sym__assign_operator] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(44),
  },
  [46] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_end] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_elseif] = ACTIONS(158),
    [anon_sym_else] = ACTIONS(158),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(158),
    [sym__assign_operator] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(44),
  },
  [47] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(56),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(62),
    [sym__assign_operator] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_comment] = ACTIONS(44),
  },
  [48] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_end] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PIPE_PIPE] = ACTIONS(158),
    [anon_sym_AMP_AMP] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_elseif] = ACTIONS(158),
    [anon_sym_else] = ACTIONS(158),
    [sym__times_operator] = ACTIONS(158),
    [sym__plus_operator] = ACTIONS(158),
    [sym__arrow_operator] = ACTIONS(158),
    [sym__assign_operator] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(44),
  },
  [49] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_end] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PIPE_PIPE] = ACTIONS(158),
    [anon_sym_AMP_AMP] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_elseif] = ACTIONS(158),
    [anon_sym_else] = ACTIONS(158),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(158),
    [sym__arrow_operator] = ACTIONS(158),
    [sym__assign_operator] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(44),
  },
  [50] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(62),
    [sym__assign_operator] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(44),
  },
  [51] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(162),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(62),
    [sym__assign_operator] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_comment] = ACTIONS(44),
  },
  [52] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(56),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(62),
    [sym__assign_operator] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_comment] = ACTIONS(44),
  },
  [53] = {
    [sym__expression] = STATE(52),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [54] = {
    [aux_sym__expression_list_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [sym_comment] = ACTIONS(44),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_end] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_EQ_GT] = ACTIONS(171),
    [anon_sym_elseif] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [sym__times_operator] = ACTIONS(171),
    [sym__plus_operator] = ACTIONS(171),
    [sym__arrow_operator] = ACTIONS(171),
    [sym__assign_operator] = ACTIONS(171),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym_comment] = ACTIONS(44),
  },
  [56] = {
    [sym__expression] = STATE(96),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [57] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [58] = {
    [sym__expression] = STATE(98),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [59] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(173),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [60] = {
    [aux_sym__expression_list_repeat1] = STATE(102),
    [anon_sym_end] = ACTIONS(175),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_comment] = ACTIONS(44),
  },
  [61] = {
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_end] = ACTIONS(179),
    [anon_sym_function] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(179),
    [sym_identifier] = ACTIONS(181),
    [sym_number] = ACTIONS(179),
    [sym_string] = ACTIONS(183),
    [sym_comment] = ACTIONS(24),
  },
  [62] = {
    [aux_sym_parameter_list_repeat1] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(187),
    [sym_comment] = ACTIONS(24),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_end] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_EQ_GT] = ACTIONS(189),
    [anon_sym_elseif] = ACTIONS(189),
    [anon_sym_else] = ACTIONS(189),
    [sym__times_operator] = ACTIONS(189),
    [sym__plus_operator] = ACTIONS(189),
    [sym__arrow_operator] = ACTIONS(189),
    [sym__assign_operator] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [sym_comment] = ACTIONS(44),
  },
  [64] = {
    [sym_argument_list] = STATE(24),
    [aux_sym__expression_list_repeat1] = STATE(108),
    [anon_sym_end] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [sym_comment] = ACTIONS(44),
  },
  [65] = {
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_function] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_EQ_GT] = ACTIONS(197),
    [anon_sym_if] = ACTIONS(195),
    [sym_identifier] = ACTIONS(106),
    [sym_number] = ACTIONS(195),
    [sym_string] = ACTIONS(197),
    [sym__times_operator] = ACTIONS(195),
    [sym__plus_operator] = ACTIONS(195),
    [sym__arrow_operator] = ACTIONS(195),
    [sym__assign_operator] = ACTIONS(195),
    [sym_comment] = ACTIONS(24),
  },
  [66] = {
    [sym_argument_list] = STATE(24),
    [aux_sym__expression_list_repeat1] = STATE(111),
    [anon_sym_end] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [sym_comment] = ACTIONS(44),
  },
  [67] = {
    [sym__expression] = STATE(113),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(203),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [68] = {
    [sym_argument_list] = STATE(24),
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(116),
    [aux_sym__expression_list_repeat1] = STATE(117),
    [aux_sym_conditional_expression_repeat1] = STATE(118),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(130),
    [anon_sym_elseif] = ACTIONS(132),
    [anon_sym_else] = ACTIONS(134),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(136),
    [sym__assign_operator] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [sym_comment] = ACTIONS(44),
  },
  [69] = {
    [anon_sym_module] = ACTIONS(209),
    [anon_sym_function] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_EQ_GT] = ACTIONS(211),
    [anon_sym_if] = ACTIONS(209),
    [sym_identifier] = ACTIONS(146),
    [sym_number] = ACTIONS(209),
    [sym_string] = ACTIONS(211),
    [sym__times_operator] = ACTIONS(209),
    [sym__plus_operator] = ACTIONS(209),
    [sym__arrow_operator] = ACTIONS(209),
    [sym__assign_operator] = ACTIONS(209),
    [sym_comment] = ACTIONS(24),
  },
  [70] = {
    [sym_argument_list] = STATE(42),
    [aux_sym_argument_list_repeat1] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [sym_comment] = ACTIONS(24),
  },
  [71] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_module] = ACTIONS(215),
    [anon_sym_function] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(215),
    [sym_identifier] = ACTIONS(158),
    [sym_number] = ACTIONS(215),
    [sym_string] = ACTIONS(217),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(215),
    [sym__assign_operator] = ACTIONS(215),
    [sym_comment] = ACTIONS(24),
  },
  [72] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_module] = ACTIONS(215),
    [anon_sym_function] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(215),
    [sym_identifier] = ACTIONS(158),
    [sym_number] = ACTIONS(215),
    [sym_string] = ACTIONS(217),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(215),
    [sym__assign_operator] = ACTIONS(215),
    [sym_comment] = ACTIONS(24),
  },
  [73] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_module] = ACTIONS(219),
    [anon_sym_function] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_if] = ACTIONS(219),
    [sym_identifier] = ACTIONS(160),
    [sym_number] = ACTIONS(219),
    [sym_string] = ACTIONS(221),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(92),
    [sym__assign_operator] = ACTIONS(94),
    [sym_comment] = ACTIONS(24),
  },
  [74] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_module] = ACTIONS(215),
    [anon_sym_function] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(215),
    [sym_identifier] = ACTIONS(158),
    [sym_number] = ACTIONS(215),
    [sym_string] = ACTIONS(217),
    [sym__times_operator] = ACTIONS(215),
    [sym__plus_operator] = ACTIONS(215),
    [sym__arrow_operator] = ACTIONS(215),
    [sym__assign_operator] = ACTIONS(215),
    [sym_comment] = ACTIONS(24),
  },
  [75] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_module] = ACTIONS(215),
    [anon_sym_function] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_EQ_GT] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(215),
    [sym_identifier] = ACTIONS(158),
    [sym_number] = ACTIONS(215),
    [sym_string] = ACTIONS(217),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(215),
    [sym__arrow_operator] = ACTIONS(215),
    [sym__assign_operator] = ACTIONS(215),
    [sym_comment] = ACTIONS(24),
  },
  [76] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_module] = ACTIONS(215),
    [anon_sym_function] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(215),
    [sym_identifier] = ACTIONS(158),
    [sym_number] = ACTIONS(215),
    [sym_string] = ACTIONS(217),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(92),
    [sym__assign_operator] = ACTIONS(215),
    [sym_comment] = ACTIONS(24),
  },
  [77] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_module] = ACTIONS(223),
    [anon_sym_function] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(223),
    [sym_identifier] = ACTIONS(162),
    [sym_number] = ACTIONS(223),
    [sym_string] = ACTIONS(225),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(92),
    [sym__assign_operator] = ACTIONS(94),
    [sym_comment] = ACTIONS(24),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_end] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_EQ_GT] = ACTIONS(227),
    [anon_sym_elseif] = ACTIONS(227),
    [anon_sym_else] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(227),
    [sym__plus_operator] = ACTIONS(227),
    [sym__arrow_operator] = ACTIONS(227),
    [sym__assign_operator] = ACTIONS(227),
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [sym_comment] = ACTIONS(44),
  },
  [79] = {
    [sym__expression] = STATE(121),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [80] = {
    [sym__expression] = STATE(122),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [81] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [82] = {
    [sym__expression] = STATE(124),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [83] = {
    [sym__expression] = STATE(125),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [84] = {
    [sym__expression] = STATE(127),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(128),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(229),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_elseif] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(233),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [85] = {
    [anon_sym_end] = ACTIONS(235),
    [anon_sym_elseif] = ACTIONS(235),
    [anon_sym_else] = ACTIONS(237),
    [sym_comment] = ACTIONS(24),
  },
  [86] = {
    [anon_sym_end] = ACTIONS(239),
    [sym_comment] = ACTIONS(24),
  },
  [87] = {
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(128),
    [aux_sym__expression_list_repeat1] = STATE(131),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_end] = ACTIONS(241),
    [anon_sym_elseif] = ACTIONS(132),
    [anon_sym_else] = ACTIONS(134),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [88] = {
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(128),
    [aux_sym_conditional_expression_repeat1] = STATE(132),
    [anon_sym_end] = ACTIONS(239),
    [anon_sym_elseif] = ACTIONS(245),
    [anon_sym_else] = ACTIONS(233),
    [sym_comment] = ACTIONS(24),
  },
  [89] = {
    [sym__expression] = STATE(133),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_end] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_elseif] = ACTIONS(247),
    [anon_sym_else] = ACTIONS(247),
    [sym__times_operator] = ACTIONS(247),
    [sym__plus_operator] = ACTIONS(247),
    [sym__arrow_operator] = ACTIONS(247),
    [sym__assign_operator] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
    [sym_comment] = ACTIONS(44),
  },
  [91] = {
    [sym__expression] = STATE(134),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [92] = {
    [sym__expression] = STATE(135),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [93] = {
    [sym__expression] = STATE(136),
    [sym_module_expression] = STATE(13),
    [sym_function_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_pair_expression] = STATE(13),
    [sym_conditional_expression] = STATE(13),
    [anon_sym_module] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(34),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [94] = {
    [aux_sym_argument_list_repeat1] = STATE(138),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(249),
    [sym_comment] = ACTIONS(24),
  },
  [95] = {
    [sym__expression] = STATE(52),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [96] = {
    [sym_argument_list] = STATE(24),
    [anon_sym_end] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_comment] = ACTIONS(44),
  },
  [97] = {
    [sym_argument_list] = STATE(24),
    [anon_sym_end] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(44),
  },
  [98] = {
    [sym_argument_list] = STATE(24),
    [anon_sym_end] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(162),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_comment] = ACTIONS(44),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_end] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_EQ_GT] = ACTIONS(251),
    [anon_sym_elseif] = ACTIONS(251),
    [anon_sym_else] = ACTIONS(251),
    [sym__times_operator] = ACTIONS(251),
    [sym__plus_operator] = ACTIONS(251),
    [sym__arrow_operator] = ACTIONS(251),
    [sym__assign_operator] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [sym_comment] = ACTIONS(44),
  },
  [100] = {
    [sym_argument_list] = STATE(24),
    [anon_sym_end] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_comment] = ACTIONS(44),
  },
  [101] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [102] = {
    [aux_sym__expression_list_repeat1] = STATE(102),
    [anon_sym_end] = ACTIONS(164),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [sym_comment] = ACTIONS(44),
  },
  [103] = {
    [sym_identifier] = ACTIONS(258),
    [sym_comment] = ACTIONS(24),
  },
  [104] = {
    [anon_sym_module] = ACTIONS(260),
    [anon_sym_end] = ACTIONS(260),
    [anon_sym_function] = ACTIONS(260),
    [anon_sym_if] = ACTIONS(260),
    [sym_identifier] = ACTIONS(262),
    [sym_number] = ACTIONS(260),
    [sym_string] = ACTIONS(264),
    [sym_comment] = ACTIONS(24),
  },
  [105] = {
    [aux_sym_parameter_list_repeat1] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_comment] = ACTIONS(24),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_end] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_AMP_AMP] = ACTIONS(268),
    [anon_sym_EQ_GT] = ACTIONS(268),
    [anon_sym_elseif] = ACTIONS(268),
    [anon_sym_else] = ACTIONS(268),
    [sym__times_operator] = ACTIONS(268),
    [sym__plus_operator] = ACTIONS(268),
    [sym__arrow_operator] = ACTIONS(268),
    [sym__assign_operator] = ACTIONS(268),
    [anon_sym_LF] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(268),
    [sym_comment] = ACTIONS(44),
  },
  [107] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(270),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [108] = {
    [aux_sym__expression_list_repeat1] = STATE(102),
    [anon_sym_end] = ACTIONS(272),
    [anon_sym_LF] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_comment] = ACTIONS(44),
  },
  [109] = {
    [anon_sym_module] = ACTIONS(276),
    [anon_sym_function] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_PIPE_PIPE] = ACTIONS(276),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_EQ_GT] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(276),
    [sym_identifier] = ACTIONS(171),
    [sym_number] = ACTIONS(276),
    [sym_string] = ACTIONS(278),
    [sym__times_operator] = ACTIONS(276),
    [sym__plus_operator] = ACTIONS(276),
    [sym__arrow_operator] = ACTIONS(276),
    [sym__assign_operator] = ACTIONS(276),
    [sym_comment] = ACTIONS(24),
  },
  [110] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(280),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [111] = {
    [aux_sym__expression_list_repeat1] = STATE(102),
    [anon_sym_end] = ACTIONS(282),
    [anon_sym_LF] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(284),
    [sym_comment] = ACTIONS(44),
  },
  [112] = {
    [anon_sym_module] = ACTIONS(286),
    [anon_sym_function] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_EQ_GT] = ACTIONS(288),
    [anon_sym_if] = ACTIONS(286),
    [sym_identifier] = ACTIONS(189),
    [sym_number] = ACTIONS(286),
    [sym_string] = ACTIONS(288),
    [sym__times_operator] = ACTIONS(286),
    [sym__plus_operator] = ACTIONS(286),
    [sym__arrow_operator] = ACTIONS(286),
    [sym__assign_operator] = ACTIONS(286),
    [sym_comment] = ACTIONS(24),
  },
  [113] = {
    [sym_argument_list] = STATE(24),
    [aux_sym__expression_list_repeat1] = STATE(150),
    [anon_sym_end] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(292),
    [sym_comment] = ACTIONS(44),
  },
  [114] = {
    [anon_sym_module] = ACTIONS(294),
    [anon_sym_function] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(296),
    [anon_sym_EQ_GT] = ACTIONS(296),
    [anon_sym_if] = ACTIONS(294),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(294),
    [sym_string] = ACTIONS(296),
    [sym__times_operator] = ACTIONS(294),
    [sym__plus_operator] = ACTIONS(294),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(294),
    [sym_comment] = ACTIONS(24),
  },
  [115] = {
    [sym__expression] = STATE(127),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(152),
    [aux_sym_conditional_expression_repeat1] = STATE(153),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(298),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_elseif] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(233),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [116] = {
    [anon_sym_end] = ACTIONS(300),
    [sym_comment] = ACTIONS(24),
  },
  [117] = {
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(152),
    [aux_sym__expression_list_repeat1] = STATE(131),
    [aux_sym_conditional_expression_repeat1] = STATE(153),
    [anon_sym_end] = ACTIONS(302),
    [anon_sym_elseif] = ACTIONS(132),
    [anon_sym_else] = ACTIONS(134),
    [anon_sym_LF] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [sym_comment] = ACTIONS(44),
  },
  [118] = {
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(152),
    [aux_sym_conditional_expression_repeat1] = STATE(132),
    [anon_sym_end] = ACTIONS(300),
    [anon_sym_elseif] = ACTIONS(245),
    [anon_sym_else] = ACTIONS(233),
    [sym_comment] = ACTIONS(24),
  },
  [119] = {
    [anon_sym_module] = ACTIONS(306),
    [anon_sym_function] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_AMP_AMP] = ACTIONS(308),
    [anon_sym_EQ_GT] = ACTIONS(308),
    [anon_sym_if] = ACTIONS(306),
    [sym_identifier] = ACTIONS(247),
    [sym_number] = ACTIONS(306),
    [sym_string] = ACTIONS(308),
    [sym__times_operator] = ACTIONS(306),
    [sym__plus_operator] = ACTIONS(306),
    [sym__arrow_operator] = ACTIONS(306),
    [sym__assign_operator] = ACTIONS(306),
    [sym_comment] = ACTIONS(24),
  },
  [120] = {
    [aux_sym_argument_list_repeat1] = STATE(138),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(310),
    [sym_comment] = ACTIONS(24),
  },
  [121] = {
    [sym_argument_list] = STATE(24),
    [anon_sym_end] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(130),
    [anon_sym_elseif] = ACTIONS(160),
    [anon_sym_else] = ACTIONS(160),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(136),
    [sym__assign_operator] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_comment] = ACTIONS(44),
  },
  [122] = {
    [sym__expression] = STATE(156),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_argument_list] = STATE(42),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(92),
    [sym__assign_operator] = ACTIONS(94),
    [sym_comment] = ACTIONS(24),
  },
  [123] = {
    [sym_argument_list] = STATE(24),
    [aux_sym__expression_list_repeat1] = STATE(158),
    [anon_sym_end] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(112),
    [sym__assign_operator] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(314),
    [sym_comment] = ACTIONS(44),
  },
  [124] = {
    [sym_argument_list] = STATE(24),
    [anon_sym_end] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_elseif] = ACTIONS(158),
    [anon_sym_else] = ACTIONS(158),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(136),
    [sym__assign_operator] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(44),
  },
  [125] = {
    [sym_argument_list] = STATE(24),
    [anon_sym_end] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(162),
    [anon_sym_elseif] = ACTIONS(162),
    [anon_sym_else] = ACTIONS(162),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(136),
    [sym__assign_operator] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_comment] = ACTIONS(44),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_end] = ACTIONS(316),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_PIPE_PIPE] = ACTIONS(316),
    [anon_sym_AMP_AMP] = ACTIONS(316),
    [anon_sym_EQ_GT] = ACTIONS(316),
    [anon_sym_elseif] = ACTIONS(316),
    [anon_sym_else] = ACTIONS(316),
    [sym__times_operator] = ACTIONS(316),
    [sym__plus_operator] = ACTIONS(316),
    [sym__arrow_operator] = ACTIONS(316),
    [sym__assign_operator] = ACTIONS(316),
    [anon_sym_LF] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [sym_comment] = ACTIONS(44),
  },
  [127] = {
    [sym_argument_list] = STATE(24),
    [anon_sym_end] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(130),
    [anon_sym_elseif] = ACTIONS(164),
    [anon_sym_else] = ACTIONS(164),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(136),
    [sym__assign_operator] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_comment] = ACTIONS(44),
  },
  [128] = {
    [anon_sym_end] = ACTIONS(318),
    [sym_comment] = ACTIONS(24),
  },
  [129] = {
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(160),
    [aux_sym_conditional_expression_repeat1] = STATE(132),
    [anon_sym_end] = ACTIONS(318),
    [anon_sym_elseif] = ACTIONS(245),
    [anon_sym_else] = ACTIONS(233),
    [sym_comment] = ACTIONS(24),
  },
  [130] = {
    [sym__expression] = STATE(127),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(160),
    [aux_sym_conditional_expression_repeat1] = STATE(161),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(320),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_elseif] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(233),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [131] = {
    [aux_sym__expression_list_repeat1] = STATE(131),
    [anon_sym_end] = ACTIONS(164),
    [anon_sym_elseif] = ACTIONS(164),
    [anon_sym_else] = ACTIONS(164),
    [anon_sym_LF] = ACTIONS(322),
    [anon_sym_SEMI] = ACTIONS(322),
    [sym_comment] = ACTIONS(44),
  },
  [132] = {
    [sym_elseif_clause] = STATE(85),
    [aux_sym_conditional_expression_repeat1] = STATE(132),
    [anon_sym_end] = ACTIONS(325),
    [anon_sym_elseif] = ACTIONS(327),
    [anon_sym_else] = ACTIONS(330),
    [sym_comment] = ACTIONS(24),
  },
  [133] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [sym_comment] = ACTIONS(24),
  },
  [134] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [sym_comment] = ACTIONS(24),
  },
  [135] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(217),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(215),
    [sym_comment] = ACTIONS(24),
  },
  [136] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(225),
    [sym__times_operator] = ACTIONS(88),
    [sym__plus_operator] = ACTIONS(90),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [sym_comment] = ACTIONS(24),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_end] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_PIPE_PIPE] = ACTIONS(334),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_EQ_GT] = ACTIONS(334),
    [anon_sym_elseif] = ACTIONS(334),
    [anon_sym_else] = ACTIONS(334),
    [sym__times_operator] = ACTIONS(334),
    [sym__plus_operator] = ACTIONS(334),
    [sym__arrow_operator] = ACTIONS(334),
    [sym__assign_operator] = ACTIONS(334),
    [anon_sym_LF] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(334),
    [sym_comment] = ACTIONS(44),
  },
  [138] = {
    [aux_sym_argument_list_repeat1] = STATE(138),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(332),
    [sym_comment] = ACTIONS(24),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_end] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_EQ_GT] = ACTIONS(339),
    [anon_sym_elseif] = ACTIONS(339),
    [anon_sym_else] = ACTIONS(339),
    [sym__times_operator] = ACTIONS(339),
    [sym__plus_operator] = ACTIONS(339),
    [sym__arrow_operator] = ACTIONS(339),
    [sym__assign_operator] = ACTIONS(339),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
    [sym_comment] = ACTIONS(44),
  },
  [140] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [sym_comment] = ACTIONS(24),
  },
  [142] = {
    [anon_sym_module] = ACTIONS(343),
    [anon_sym_end] = ACTIONS(343),
    [anon_sym_function] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(343),
    [sym_identifier] = ACTIONS(345),
    [sym_number] = ACTIONS(343),
    [sym_string] = ACTIONS(347),
    [sym_comment] = ACTIONS(24),
  },
  [143] = {
    [aux_sym_parameter_list_repeat1] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(341),
    [sym_comment] = ACTIONS(24),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_end] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_PIPE_PIPE] = ACTIONS(352),
    [anon_sym_AMP_AMP] = ACTIONS(352),
    [anon_sym_EQ_GT] = ACTIONS(352),
    [anon_sym_elseif] = ACTIONS(352),
    [anon_sym_else] = ACTIONS(352),
    [sym__times_operator] = ACTIONS(352),
    [sym__plus_operator] = ACTIONS(352),
    [sym__arrow_operator] = ACTIONS(352),
    [sym__assign_operator] = ACTIONS(352),
    [anon_sym_LF] = ACTIONS(352),
    [anon_sym_SEMI] = ACTIONS(352),
    [sym_comment] = ACTIONS(44),
  },
  [145] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(354),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [146] = {
    [anon_sym_module] = ACTIONS(356),
    [anon_sym_function] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_AMP_AMP] = ACTIONS(358),
    [anon_sym_EQ_GT] = ACTIONS(358),
    [anon_sym_if] = ACTIONS(356),
    [sym_identifier] = ACTIONS(251),
    [sym_number] = ACTIONS(356),
    [sym_string] = ACTIONS(358),
    [sym__times_operator] = ACTIONS(356),
    [sym__plus_operator] = ACTIONS(356),
    [sym__arrow_operator] = ACTIONS(356),
    [sym__assign_operator] = ACTIONS(356),
    [sym_comment] = ACTIONS(24),
  },
  [147] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(360),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [148] = {
    [anon_sym_module] = ACTIONS(362),
    [anon_sym_function] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_PIPE_PIPE] = ACTIONS(362),
    [anon_sym_AMP_AMP] = ACTIONS(364),
    [anon_sym_EQ_GT] = ACTIONS(364),
    [anon_sym_if] = ACTIONS(362),
    [sym_identifier] = ACTIONS(268),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(364),
    [sym__times_operator] = ACTIONS(362),
    [sym__plus_operator] = ACTIONS(362),
    [sym__arrow_operator] = ACTIONS(362),
    [sym__assign_operator] = ACTIONS(362),
    [sym_comment] = ACTIONS(24),
  },
  [149] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(366),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [150] = {
    [aux_sym__expression_list_repeat1] = STATE(102),
    [anon_sym_end] = ACTIONS(368),
    [anon_sym_LF] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(370),
    [sym_comment] = ACTIONS(44),
  },
  [151] = {
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_function] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [anon_sym_EQ_GT] = ACTIONS(374),
    [anon_sym_if] = ACTIONS(372),
    [sym_identifier] = ACTIONS(316),
    [sym_number] = ACTIONS(372),
    [sym_string] = ACTIONS(374),
    [sym__times_operator] = ACTIONS(372),
    [sym__plus_operator] = ACTIONS(372),
    [sym__arrow_operator] = ACTIONS(372),
    [sym__assign_operator] = ACTIONS(372),
    [sym_comment] = ACTIONS(24),
  },
  [152] = {
    [anon_sym_end] = ACTIONS(376),
    [sym_comment] = ACTIONS(24),
  },
  [153] = {
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(168),
    [aux_sym_conditional_expression_repeat1] = STATE(132),
    [anon_sym_end] = ACTIONS(376),
    [anon_sym_elseif] = ACTIONS(245),
    [anon_sym_else] = ACTIONS(233),
    [sym_comment] = ACTIONS(24),
  },
  [154] = {
    [sym__expression] = STATE(127),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(168),
    [aux_sym_conditional_expression_repeat1] = STATE(169),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(378),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_elseif] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(233),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [155] = {
    [anon_sym_module] = ACTIONS(380),
    [anon_sym_function] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [anon_sym_PIPE_PIPE] = ACTIONS(380),
    [anon_sym_AMP_AMP] = ACTIONS(382),
    [anon_sym_EQ_GT] = ACTIONS(382),
    [anon_sym_if] = ACTIONS(380),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(380),
    [sym_string] = ACTIONS(382),
    [sym__times_operator] = ACTIONS(380),
    [sym__plus_operator] = ACTIONS(380),
    [sym__arrow_operator] = ACTIONS(380),
    [sym__assign_operator] = ACTIONS(380),
    [sym_comment] = ACTIONS(24),
  },
  [156] = {
    [sym_argument_list] = STATE(24),
    [aux_sym__expression_list_repeat1] = STATE(171),
    [anon_sym_end] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_PIPE_PIPE] = ACTIONS(52),
    [anon_sym_AMP_AMP] = ACTIONS(54),
    [anon_sym_EQ_GT] = ACTIONS(130),
    [anon_sym_elseif] = ACTIONS(384),
    [anon_sym_else] = ACTIONS(384),
    [sym__times_operator] = ACTIONS(58),
    [sym__plus_operator] = ACTIONS(60),
    [sym__arrow_operator] = ACTIONS(136),
    [sym__assign_operator] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(386),
    [anon_sym_SEMI] = ACTIONS(386),
    [sym_comment] = ACTIONS(44),
  },
  [157] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(388),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [158] = {
    [aux_sym__expression_list_repeat1] = STATE(102),
    [anon_sym_end] = ACTIONS(390),
    [anon_sym_LF] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(44),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_end] = ACTIONS(394),
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_PIPE_PIPE] = ACTIONS(394),
    [anon_sym_AMP_AMP] = ACTIONS(394),
    [anon_sym_EQ_GT] = ACTIONS(394),
    [anon_sym_elseif] = ACTIONS(394),
    [anon_sym_else] = ACTIONS(394),
    [sym__times_operator] = ACTIONS(394),
    [sym__plus_operator] = ACTIONS(394),
    [sym__arrow_operator] = ACTIONS(394),
    [sym__assign_operator] = ACTIONS(394),
    [anon_sym_LF] = ACTIONS(394),
    [anon_sym_SEMI] = ACTIONS(394),
    [sym_comment] = ACTIONS(44),
  },
  [160] = {
    [anon_sym_end] = ACTIONS(396),
    [sym_comment] = ACTIONS(24),
  },
  [161] = {
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(174),
    [aux_sym_conditional_expression_repeat1] = STATE(132),
    [anon_sym_end] = ACTIONS(396),
    [anon_sym_elseif] = ACTIONS(245),
    [anon_sym_else] = ACTIONS(233),
    [sym_comment] = ACTIONS(24),
  },
  [162] = {
    [sym__expression] = STATE(127),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_end] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_PIPE_PIPE] = ACTIONS(398),
    [anon_sym_AMP_AMP] = ACTIONS(398),
    [anon_sym_EQ_GT] = ACTIONS(398),
    [anon_sym_elseif] = ACTIONS(398),
    [anon_sym_else] = ACTIONS(398),
    [sym__times_operator] = ACTIONS(398),
    [sym__plus_operator] = ACTIONS(398),
    [sym__arrow_operator] = ACTIONS(398),
    [sym__assign_operator] = ACTIONS(398),
    [anon_sym_LF] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(398),
    [sym_comment] = ACTIONS(44),
  },
  [164] = {
    [anon_sym_module] = ACTIONS(400),
    [anon_sym_function] = ACTIONS(400),
    [anon_sym_LPAREN] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_RPAREN] = ACTIONS(402),
    [anon_sym_PIPE_PIPE] = ACTIONS(400),
    [anon_sym_AMP_AMP] = ACTIONS(402),
    [anon_sym_EQ_GT] = ACTIONS(402),
    [anon_sym_if] = ACTIONS(400),
    [sym_identifier] = ACTIONS(339),
    [sym_number] = ACTIONS(400),
    [sym_string] = ACTIONS(402),
    [sym__times_operator] = ACTIONS(400),
    [sym__plus_operator] = ACTIONS(400),
    [sym__arrow_operator] = ACTIONS(400),
    [sym__assign_operator] = ACTIONS(400),
    [sym_comment] = ACTIONS(24),
  },
  [165] = {
    [anon_sym_module] = ACTIONS(404),
    [anon_sym_function] = ACTIONS(404),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_EQ_GT] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(404),
    [sym_identifier] = ACTIONS(352),
    [sym_number] = ACTIONS(404),
    [sym_string] = ACTIONS(406),
    [sym__times_operator] = ACTIONS(404),
    [sym__plus_operator] = ACTIONS(404),
    [sym__arrow_operator] = ACTIONS(404),
    [sym__assign_operator] = ACTIONS(404),
    [sym_comment] = ACTIONS(24),
  },
  [166] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(408),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [167] = {
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_function] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(410),
    [anon_sym_AMP_AMP] = ACTIONS(412),
    [anon_sym_EQ_GT] = ACTIONS(412),
    [anon_sym_if] = ACTIONS(410),
    [sym_identifier] = ACTIONS(394),
    [sym_number] = ACTIONS(410),
    [sym_string] = ACTIONS(412),
    [sym__times_operator] = ACTIONS(410),
    [sym__plus_operator] = ACTIONS(410),
    [sym__arrow_operator] = ACTIONS(410),
    [sym__assign_operator] = ACTIONS(410),
    [sym_comment] = ACTIONS(24),
  },
  [168] = {
    [anon_sym_end] = ACTIONS(414),
    [sym_comment] = ACTIONS(24),
  },
  [169] = {
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(177),
    [aux_sym_conditional_expression_repeat1] = STATE(132),
    [anon_sym_end] = ACTIONS(414),
    [anon_sym_elseif] = ACTIONS(245),
    [anon_sym_else] = ACTIONS(233),
    [sym_comment] = ACTIONS(24),
  },
  [170] = {
    [sym__expression] = STATE(127),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(416),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_elseif] = ACTIONS(416),
    [anon_sym_else] = ACTIONS(416),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [171] = {
    [aux_sym__expression_list_repeat1] = STATE(131),
    [anon_sym_end] = ACTIONS(418),
    [anon_sym_elseif] = ACTIONS(418),
    [anon_sym_else] = ACTIONS(418),
    [anon_sym_LF] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(420),
    [sym_comment] = ACTIONS(44),
  },
  [172] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(422),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [anon_sym_end] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(424),
    [anon_sym_PIPE_PIPE] = ACTIONS(424),
    [anon_sym_AMP_AMP] = ACTIONS(424),
    [anon_sym_EQ_GT] = ACTIONS(424),
    [anon_sym_elseif] = ACTIONS(424),
    [anon_sym_else] = ACTIONS(424),
    [sym__times_operator] = ACTIONS(424),
    [sym__plus_operator] = ACTIONS(424),
    [sym__arrow_operator] = ACTIONS(424),
    [sym__assign_operator] = ACTIONS(424),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_SEMI] = ACTIONS(424),
    [sym_comment] = ACTIONS(44),
  },
  [174] = {
    [anon_sym_end] = ACTIONS(426),
    [sym_comment] = ACTIONS(24),
  },
  [175] = {
    [anon_sym_module] = ACTIONS(428),
    [anon_sym_function] = ACTIONS(428),
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(428),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_EQ_GT] = ACTIONS(430),
    [anon_sym_if] = ACTIONS(428),
    [sym_identifier] = ACTIONS(398),
    [sym_number] = ACTIONS(428),
    [sym_string] = ACTIONS(430),
    [sym__times_operator] = ACTIONS(428),
    [sym__plus_operator] = ACTIONS(428),
    [sym__arrow_operator] = ACTIONS(428),
    [sym__assign_operator] = ACTIONS(428),
    [sym_comment] = ACTIONS(24),
  },
  [176] = {
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_function] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(434),
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_RPAREN] = ACTIONS(434),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(434),
    [anon_sym_EQ_GT] = ACTIONS(434),
    [anon_sym_if] = ACTIONS(432),
    [sym_identifier] = ACTIONS(424),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(434),
    [sym__times_operator] = ACTIONS(432),
    [sym__plus_operator] = ACTIONS(432),
    [sym__arrow_operator] = ACTIONS(432),
    [sym__assign_operator] = ACTIONS(432),
    [sym_comment] = ACTIONS(24),
  },
  [177] = {
    [anon_sym_end] = ACTIONS(436),
    [sym_comment] = ACTIONS(24),
  },
  [178] = {
    [sym__expression] = STATE(127),
    [sym_module_expression] = STATE(5),
    [sym_function_expression] = STATE(5),
    [sym_call_expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_pair_expression] = STATE(5),
    [sym_conditional_expression] = STATE(5),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_end] = ACTIONS(438),
    [anon_sym_function] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_elseif] = ACTIONS(438),
    [anon_sym_else] = ACTIONS(438),
    [sym_identifier] = ACTIONS(18),
    [sym_number] = ACTIONS(20),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [anon_sym_end] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_PIPE_PIPE] = ACTIONS(440),
    [anon_sym_AMP_AMP] = ACTIONS(440),
    [anon_sym_EQ_GT] = ACTIONS(440),
    [anon_sym_elseif] = ACTIONS(440),
    [anon_sym_else] = ACTIONS(440),
    [sym__times_operator] = ACTIONS(440),
    [sym__plus_operator] = ACTIONS(440),
    [sym__arrow_operator] = ACTIONS(440),
    [sym__assign_operator] = ACTIONS(440),
    [anon_sym_LF] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [sym_comment] = ACTIONS(44),
  },
  [180] = {
    [anon_sym_module] = ACTIONS(442),
    [anon_sym_function] = ACTIONS(442),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_PIPE_PIPE] = ACTIONS(442),
    [anon_sym_AMP_AMP] = ACTIONS(444),
    [anon_sym_EQ_GT] = ACTIONS(444),
    [anon_sym_if] = ACTIONS(442),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_string] = ACTIONS(444),
    [sym__times_operator] = ACTIONS(442),
    [sym__plus_operator] = ACTIONS(442),
    [sym__arrow_operator] = ACTIONS(442),
    [sym__assign_operator] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 2),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_source_file, 2),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_expression, 3),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pair_expression, 3),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 3),
  [168] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(95),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_expression, 4),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 2),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 2),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_expression, 4),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_expression, 3),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_expression, 3),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pair_expression, 3),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair_expression, 3),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_assignment_expression, 3),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 4),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_conditional_expression_repeat1, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_conditional_expression_repeat1, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_expression, 5),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [255] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(140),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 3),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_expression, 5),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_expression, 4),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_expression, 4),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_expression, 4),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_expression, 4),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_conditional_expression, 4),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 4),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 2),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [322] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(162),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_conditional_expression_repeat1, 2),
  [327] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_conditional_expression_repeat1, 2), SHIFT_REPEAT(80),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_conditional_expression_repeat1, 2),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4),
  [336] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(89),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_expression, 6),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter_list, 4),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 4),
  [349] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(103),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_expression, 6),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_expression, 5),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_expression, 5),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_expression, 5),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_expression, 5),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_conditional_expression, 5),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif_clause, 3),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 6),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_expression, 7),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_expression, 6),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_expression, 6),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_expression, 6),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_expression, 6),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_conditional_expression, 6),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 6),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elseif_clause, 4),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 4),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 7),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_expression, 7),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_expression, 7),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_conditional_expression, 7),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 7),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 8),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_conditional_expression, 8),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 8),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
