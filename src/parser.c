#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 425
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_SEMI_SEMI = 1,
  anon_sym_val = 2,
  anon_sym_COLON = 3,
  anon_sym_module = 4,
  anon_sym_type = 5,
  anon_sym_EQ = 6,
  anon_sym_open = 7,
  anon_sym_include = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_and = 11,
  anon_sym_let = 12,
  anon_sym_rec = 13,
  anon_sym_LBRACK = 14,
  anon_sym_AT_AT = 15,
  anon_sym_RBRACK = 16,
  anon_sym_TILDE = 17,
  anon_sym_QMARK = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_LBRACE = 22,
  anon_sym_SEMI = 23,
  anon_sym_RBRACE = 24,
  anon_sym_mutable = 25,
  anon_sym_constraint = 26,
  anon_sym_sig = 27,
  anon_sym_end = 28,
  anon_sym_functor = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_struct = 31,
  anon_sym_DOT = 32,
  anon_sym_in = 33,
  sym_identifier = 34,
  sym_number = 35,
  sym_string = 36,
  sym_comment = 37,
  sym_compilation_unit = 38,
  sym_value_specification = 39,
  sym_module_specification = 40,
  sym_module_type_specification = 41,
  sym_open_directive = 42,
  sym_include_directive = 43,
  sym_module_parameter = 44,
  sym_module_definition = 45,
  sym_type_definition = 46,
  sym_value_definition = 47,
  sym_attribute = 48,
  sym_let_binding = 49,
  sym_labeled_parameter = 50,
  sym_shorthand_labeled_parameter = 51,
  sym_type_constructor_definition = 52,
  sym_type_parameters = 53,
  sym_type_equation = 54,
  sym_record_declaration = 55,
  sym_field_declaration = 56,
  sym_type_constraint = 57,
  sym__module_type = 58,
  sym_signature = 59,
  sym_functor_module_type = 60,
  sym_shorthand_functor_module_type = 61,
  sym__module = 62,
  sym_functor_module = 63,
  sym_functor_application_module = 64,
  sym_struct_module = 65,
  sym__type = 66,
  sym_parenthesized_type = 67,
  sym_function_type = 68,
  sym_type_variable = 69,
  sym_constructed_type = 70,
  sym_qualified_type_identifier = 71,
  sym__expression = 72,
  sym_qualified_identifier = 73,
  sym_let_expression = 74,
  sym__pattern = 75,
  sym_record_pattern = 76,
  sym_type_pattern = 77,
  sym_parenthesized_pattern = 78,
  aux_sym_compilation_unit_repeat1 = 79,
  aux_sym_module_specification_repeat1 = 80,
  aux_sym_type_definition_repeat1 = 81,
  aux_sym_value_definition_repeat1 = 82,
  aux_sym_let_binding_repeat1 = 83,
  aux_sym_type_constructor_definition_repeat1 = 84,
  aux_sym_type_parameters_repeat1 = 85,
  aux_sym_record_declaration_repeat1 = 86,
  aux_sym_signature_repeat1 = 87,
  aux_sym_struct_module_repeat1 = 88,
  aux_sym_record_pattern_repeat1 = 89,
  alias_sym_type_identifier = 90,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_val] = "val",
  [anon_sym_COLON] = ":",
  [anon_sym_module] = "module",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_open] = "open",
  [anon_sym_include] = "include",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_and] = "and",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_LBRACK] = "[",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_RBRACK] = "]",
  [anon_sym_TILDE] = "~",
  [anon_sym_QMARK] = "?",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_mutable] = "mutable",
  [anon_sym_constraint] = "constraint",
  [anon_sym_sig] = "sig",
  [anon_sym_end] = "end",
  [anon_sym_functor] = "functor",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_struct] = "struct",
  [anon_sym_DOT] = ".",
  [anon_sym_in] = "in",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_compilation_unit] = "compilation_unit",
  [sym_value_specification] = "value_specification",
  [sym_module_specification] = "module_specification",
  [sym_module_type_specification] = "module_type_specification",
  [sym_open_directive] = "open_directive",
  [sym_include_directive] = "include_directive",
  [sym_module_parameter] = "module_parameter",
  [sym_module_definition] = "module_definition",
  [sym_type_definition] = "type_definition",
  [sym_value_definition] = "value_definition",
  [sym_attribute] = "attribute",
  [sym_let_binding] = "let_binding",
  [sym_labeled_parameter] = "labeled_parameter",
  [sym_shorthand_labeled_parameter] = "shorthand_labeled_parameter",
  [sym_type_constructor_definition] = "type_constructor_definition",
  [sym_type_parameters] = "type_parameters",
  [sym_type_equation] = "type_equation",
  [sym_record_declaration] = "record_declaration",
  [sym_field_declaration] = "field_declaration",
  [sym_type_constraint] = "type_constraint",
  [sym__module_type] = "_module_type",
  [sym_signature] = "signature",
  [sym_functor_module_type] = "functor_module_type",
  [sym_shorthand_functor_module_type] = "shorthand_functor_module_type",
  [sym__module] = "_module",
  [sym_functor_module] = "functor_module",
  [sym_functor_application_module] = "functor_application_module",
  [sym_struct_module] = "struct_module",
  [sym__type] = "_type",
  [sym_parenthesized_type] = "parenthesized_type",
  [sym_function_type] = "function_type",
  [sym_type_variable] = "type_variable",
  [sym_constructed_type] = "constructed_type",
  [sym_qualified_type_identifier] = "qualified_type_identifier",
  [sym__expression] = "_expression",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_let_expression] = "let_expression",
  [sym__pattern] = "_pattern",
  [sym_record_pattern] = "record_pattern",
  [sym_type_pattern] = "type_pattern",
  [sym_parenthesized_pattern] = "parenthesized_pattern",
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
  [aux_sym_module_specification_repeat1] = "module_specification_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
  [aux_sym_value_definition_repeat1] = "value_definition_repeat1",
  [aux_sym_let_binding_repeat1] = "let_binding_repeat1",
  [aux_sym_type_constructor_definition_repeat1] = "type_constructor_definition_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_record_declaration_repeat1] = "record_declaration_repeat1",
  [aux_sym_signature_repeat1] = "signature_repeat1",
  [aux_sym_struct_module_repeat1] = "struct_module_repeat1",
  [aux_sym_record_pattern_repeat1] = "record_pattern_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_compilation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_value_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_module_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_module_type_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_open_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_module_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_labeled_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_record_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__module_type] = {
    .visible = false,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_module_type] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_functor_module_type] = {
    .visible = true,
    .named = true,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym_functor_module] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_application_module] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_module] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constructed_type] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_record_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_type_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compilation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_constructor_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [2] = {
    [2] = alias_sym_type_identifier,
  },
  [3] = {
    [1] = alias_sym_type_identifier,
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
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == 'm')
        ADVANCE(58);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 's')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(89);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 4:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ')')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 20:
      if (lookahead == '@')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_functor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'u')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_open);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_rec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_sig);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_val);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(98);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'e')
        ADVANCE(111);
      if (lookahead == 'i')
        ADVANCE(114);
      if (lookahead == 'l')
        ADVANCE(121);
      if (lookahead == 'm')
        ADVANCE(124);
      if (lookahead == 'o')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == 'v')
        ADVANCE(138);
      if (lookahead == '}')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      END_STATE();
    case 97:
      if (lookahead == '>')
        ADVANCE(13);
      END_STATE();
    case 98:
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'd')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 101:
      if (lookahead == 'o')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'n')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 's')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 't')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'r')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'a')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'i')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'n')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 't')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 111:
      if (lookahead == 'n')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'd')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 114:
      if (lookahead == 'n')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'l')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'u')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'd')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 121:
      if (lookahead == 'e')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 't')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 124:
      if (lookahead == 'o')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'd')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'u')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'l')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'e')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 130:
      if (lookahead == 'p')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'e')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'n')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 134:
      if (lookahead == 'y')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'p')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'e')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 138:
      if (lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'l')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 141:
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(142);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 143:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 144:
      if (lookahead == '*')
        ADVANCE(7);
      END_STATE();
    case 145:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 146:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 147:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(142);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 148:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 150:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 152:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 153:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(154);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == 'm')
        ADVANCE(155);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 154:
      if (lookahead == ';')
        ADVANCE(17);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 156:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == ';')
        ADVANCE(142);
      if (lookahead == 'm')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 158:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == '-')
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(154);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(28);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == 'm')
        ADVANCE(155);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 159:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == '-')
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(154);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'm')
        ADVANCE(155);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 160:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == '-')
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(154);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'm')
        ADVANCE(155);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 161:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == '-')
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(154);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == 'm')
        ADVANCE(155);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 96},
  [2] = {.lex_state = 141},
  [3] = {.lex_state = 143},
  [4] = {.lex_state = 141},
  [5] = {.lex_state = 141},
  [6] = {.lex_state = 141},
  [7] = {.lex_state = 145},
  [8] = {.lex_state = 96},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 141},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 96},
  [16] = {.lex_state = 141},
  [17] = {.lex_state = 96},
  [18] = {.lex_state = 96},
  [19] = {.lex_state = 141},
  [20] = {.lex_state = 141},
  [21] = {.lex_state = 96},
  [22] = {.lex_state = 96},
  [23] = {.lex_state = 146},
  [24] = {.lex_state = 146},
  [25] = {.lex_state = 146},
  [26] = {.lex_state = 146},
  [27] = {.lex_state = 147},
  [28] = {.lex_state = 96},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 141},
  [31] = {.lex_state = 96},
  [32] = {.lex_state = 96},
  [33] = {.lex_state = 141},
  [34] = {.lex_state = 96},
  [35] = {.lex_state = 148},
  [36] = {.lex_state = 150},
  [37] = {.lex_state = 141},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 141},
  [41] = {.lex_state = 141},
  [42] = {.lex_state = 141},
  [43] = {.lex_state = 141},
  [44] = {.lex_state = 96},
  [45] = {.lex_state = 96},
  [46] = {.lex_state = 96},
  [47] = {.lex_state = 141},
  [48] = {.lex_state = 96},
  [49] = {.lex_state = 96},
  [50] = {.lex_state = 141},
  [51] = {.lex_state = 141},
  [52] = {.lex_state = 96},
  [53] = {.lex_state = 96},
  [54] = {.lex_state = 147},
  [55] = {.lex_state = 96},
  [56] = {.lex_state = 141},
  [57] = {.lex_state = 146},
  [58] = {.lex_state = 146},
  [59] = {.lex_state = 146},
  [60] = {.lex_state = 96},
  [61] = {.lex_state = 152},
  [62] = {.lex_state = 141},
  [63] = {.lex_state = 141},
  [64] = {.lex_state = 141},
  [65] = {.lex_state = 153},
  [66] = {.lex_state = 153},
  [67] = {.lex_state = 153},
  [68] = {.lex_state = 96},
  [69] = {.lex_state = 148},
  [70] = {.lex_state = 96},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 96},
  [73] = {.lex_state = 96},
  [74] = {.lex_state = 96},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 96},
  [77] = {.lex_state = 96},
  [78] = {.lex_state = 96},
  [79] = {.lex_state = 96},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 148},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 141},
  [84] = {.lex_state = 141},
  [85] = {.lex_state = 141},
  [86] = {.lex_state = 156},
  [87] = {.lex_state = 158},
  [88] = {.lex_state = 96},
  [89] = {.lex_state = 158},
  [90] = {.lex_state = 158},
  [91] = {.lex_state = 96},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 96},
  [95] = {.lex_state = 96},
  [96] = {.lex_state = 96},
  [97] = {.lex_state = 96},
  [98] = {.lex_state = 141},
  [99] = {.lex_state = 96},
  [100] = {.lex_state = 96},
  [101] = {.lex_state = 96},
  [102] = {.lex_state = 141},
  [103] = {.lex_state = 147},
  [104] = {.lex_state = 96},
  [105] = {.lex_state = 146},
  [106] = {.lex_state = 147},
  [107] = {.lex_state = 96},
  [108] = {.lex_state = 146},
  [109] = {.lex_state = 152},
  [110] = {.lex_state = 146},
  [111] = {.lex_state = 96},
  [112] = {.lex_state = 96},
  [113] = {.lex_state = 146},
  [114] = {.lex_state = 96},
  [115] = {.lex_state = 96},
  [116] = {.lex_state = 96},
  [117] = {.lex_state = 141},
  [118] = {.lex_state = 141},
  [119] = {.lex_state = 141},
  [120] = {.lex_state = 141},
  [121] = {.lex_state = 141},
  [122] = {.lex_state = 141},
  [123] = {.lex_state = 96},
  [124] = {.lex_state = 141},
  [125] = {.lex_state = 153},
  [126] = {.lex_state = 141},
  [127] = {.lex_state = 141},
  [128] = {.lex_state = 153},
  [129] = {.lex_state = 153},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 96},
  [132] = {.lex_state = 141},
  [133] = {.lex_state = 143},
  [134] = {.lex_state = 141},
  [135] = {.lex_state = 96},
  [136] = {.lex_state = 96},
  [137] = {.lex_state = 96},
  [138] = {.lex_state = 96},
  [139] = {.lex_state = 150},
  [140] = {.lex_state = 148},
  [141] = {.lex_state = 96},
  [142] = {.lex_state = 141},
  [143] = {.lex_state = 141},
  [144] = {.lex_state = 145},
  [145] = {.lex_state = 96},
  [146] = {.lex_state = 96},
  [147] = {.lex_state = 96},
  [148] = {.lex_state = 150},
  [149] = {.lex_state = 148},
  [150] = {.lex_state = 96},
  [151] = {.lex_state = 141},
  [152] = {.lex_state = 158},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 96},
  [155] = {.lex_state = 141},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 96},
  [158] = {.lex_state = 141},
  [159] = {.lex_state = 96},
  [160] = {.lex_state = 141},
  [161] = {.lex_state = 158},
  [162] = {.lex_state = 158},
  [163] = {.lex_state = 141},
  [164] = {.lex_state = 96},
  [165] = {.lex_state = 96},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 96},
  [168] = {.lex_state = 141},
  [169] = {.lex_state = 96},
  [170] = {.lex_state = 147},
  [171] = {.lex_state = 96},
  [172] = {.lex_state = 146},
  [173] = {.lex_state = 96},
  [174] = {.lex_state = 146},
  [175] = {.lex_state = 96},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 141},
  [178] = {.lex_state = 141},
  [179] = {.lex_state = 141},
  [180] = {.lex_state = 141},
  [181] = {.lex_state = 96},
  [182] = {.lex_state = 141},
  [183] = {.lex_state = 141},
  [184] = {.lex_state = 141},
  [185] = {.lex_state = 153},
  [186] = {.lex_state = 141},
  [187] = {.lex_state = 153},
  [188] = {.lex_state = 153},
  [189] = {.lex_state = 96},
  [190] = {.lex_state = 148},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 141},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 96},
  [195] = {.lex_state = 96},
  [196] = {.lex_state = 141},
  [197] = {.lex_state = 96},
  [198] = {.lex_state = 96},
  [199] = {.lex_state = 96},
  [200] = {.lex_state = 148},
  [201] = {.lex_state = 96},
  [202] = {.lex_state = 96},
  [203] = {.lex_state = 150},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 96},
  [206] = {.lex_state = 96},
  [207] = {.lex_state = 141},
  [208] = {.lex_state = 146},
  [209] = {.lex_state = 146},
  [210] = {.lex_state = 96},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 96},
  [213] = {.lex_state = 96},
  [214] = {.lex_state = 96},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 96},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 96},
  [219] = {.lex_state = 158},
  [220] = {.lex_state = 96},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 141},
  [223] = {.lex_state = 156},
  [224] = {.lex_state = 96},
  [225] = {.lex_state = 158},
  [226] = {.lex_state = 158},
  [227] = {.lex_state = 158},
  [228] = {.lex_state = 96},
  [229] = {.lex_state = 96},
  [230] = {.lex_state = 96},
  [231] = {.lex_state = 147},
  [232] = {.lex_state = 146},
  [233] = {.lex_state = 146},
  [234] = {.lex_state = 146},
  [235] = {.lex_state = 152},
  [236] = {.lex_state = 96},
  [237] = {.lex_state = 152},
  [238] = {.lex_state = 141},
  [239] = {.lex_state = 141},
  [240] = {.lex_state = 141},
  [241] = {.lex_state = 141},
  [242] = {.lex_state = 148},
  [243] = {.lex_state = 96},
  [244] = {.lex_state = 141},
  [245] = {.lex_state = 96},
  [246] = {.lex_state = 148},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 141},
  [249] = {.lex_state = 141},
  [250] = {.lex_state = 96},
  [251] = {.lex_state = 96},
  [252] = {.lex_state = 141},
  [253] = {.lex_state = 96},
  [254] = {.lex_state = 96},
  [255] = {.lex_state = 96},
  [256] = {.lex_state = 96},
  [257] = {.lex_state = 148},
  [258] = {.lex_state = 150},
  [259] = {.lex_state = 141},
  [260] = {.lex_state = 141},
  [261] = {.lex_state = 96},
  [262] = {.lex_state = 96},
  [263] = {.lex_state = 141},
  [264] = {.lex_state = 96},
  [265] = {.lex_state = 96},
  [266] = {.lex_state = 96},
  [267] = {.lex_state = 146},
  [268] = {.lex_state = 146},
  [269] = {.lex_state = 96},
  [270] = {.lex_state = 152},
  [271] = {.lex_state = 96},
  [272] = {.lex_state = 96},
  [273] = {.lex_state = 96},
  [274] = {.lex_state = 96},
  [275] = {.lex_state = 148},
  [276] = {.lex_state = 141},
  [277] = {.lex_state = 141},
  [278] = {.lex_state = 96},
  [279] = {.lex_state = 96},
  [280] = {.lex_state = 156},
  [281] = {.lex_state = 96},
  [282] = {.lex_state = 141},
  [283] = {.lex_state = 96},
  [284] = {.lex_state = 152},
  [285] = {.lex_state = 96},
  [286] = {.lex_state = 152},
  [287] = {.lex_state = 96},
  [288] = {.lex_state = 146},
  [289] = {.lex_state = 96},
  [290] = {.lex_state = 141},
  [291] = {.lex_state = 141},
  [292] = {.lex_state = 159},
  [293] = {.lex_state = 159},
  [294] = {.lex_state = 159},
  [295] = {.lex_state = 96},
  [296] = {.lex_state = 148},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 96},
  [299] = {.lex_state = 96},
  [300] = {.lex_state = 148},
  [301] = {.lex_state = 141},
  [302] = {.lex_state = 141},
  [303] = {.lex_state = 160},
  [304] = {.lex_state = 96},
  [305] = {.lex_state = 160},
  [306] = {.lex_state = 160},
  [307] = {.lex_state = 96},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 96},
  [311] = {.lex_state = 96},
  [312] = {.lex_state = 96},
  [313] = {.lex_state = 141},
  [314] = {.lex_state = 96},
  [315] = {.lex_state = 96},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 96},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 141},
  [320] = {.lex_state = 141},
  [321] = {.lex_state = 161},
  [322] = {.lex_state = 96},
  [323] = {.lex_state = 161},
  [324] = {.lex_state = 161},
  [325] = {.lex_state = 96},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 96},
  [329] = {.lex_state = 96},
  [330] = {.lex_state = 96},
  [331] = {.lex_state = 141},
  [332] = {.lex_state = 96},
  [333] = {.lex_state = 96},
  [334] = {.lex_state = 96},
  [335] = {.lex_state = 152},
  [336] = {.lex_state = 96},
  [337] = {.lex_state = 146},
  [338] = {.lex_state = 150},
  [339] = {.lex_state = 148},
  [340] = {.lex_state = 96},
  [341] = {.lex_state = 141},
  [342] = {.lex_state = 141},
  [343] = {.lex_state = 96},
  [344] = {.lex_state = 156},
  [345] = {.lex_state = 158},
  [346] = {.lex_state = 96},
  [347] = {.lex_state = 96},
  [348] = {.lex_state = 141},
  [349] = {.lex_state = 159},
  [350] = {.lex_state = 141},
  [351] = {.lex_state = 141},
  [352] = {.lex_state = 159},
  [353] = {.lex_state = 159},
  [354] = {.lex_state = 96},
  [355] = {.lex_state = 96},
  [356] = {.lex_state = 148},
  [357] = {.lex_state = 96},
  [358] = {.lex_state = 141},
  [359] = {.lex_state = 160},
  [360] = {.lex_state = 141},
  [361] = {.lex_state = 96},
  [362] = {.lex_state = 141},
  [363] = {.lex_state = 160},
  [364] = {.lex_state = 160},
  [365] = {.lex_state = 141},
  [366] = {.lex_state = 96},
  [367] = {.lex_state = 96},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 96},
  [370] = {.lex_state = 96},
  [371] = {.lex_state = 150},
  [372] = {.lex_state = 148},
  [373] = {.lex_state = 96},
  [374] = {.lex_state = 141},
  [375] = {.lex_state = 161},
  [376] = {.lex_state = 141},
  [377] = {.lex_state = 96},
  [378] = {.lex_state = 141},
  [379] = {.lex_state = 161},
  [380] = {.lex_state = 161},
  [381] = {.lex_state = 141},
  [382] = {.lex_state = 96},
  [383] = {.lex_state = 96},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 96},
  [386] = {.lex_state = 96},
  [387] = {.lex_state = 96},
  [388] = {.lex_state = 141},
  [389] = {.lex_state = 152},
  [390] = {.lex_state = 96},
  [391] = {.lex_state = 159},
  [392] = {.lex_state = 159},
  [393] = {.lex_state = 159},
  [394] = {.lex_state = 148},
  [395] = {.lex_state = 96},
  [396] = {.lex_state = 160},
  [397] = {.lex_state = 160},
  [398] = {.lex_state = 160},
  [399] = {.lex_state = 160},
  [400] = {.lex_state = 96},
  [401] = {.lex_state = 96},
  [402] = {.lex_state = 96},
  [403] = {.lex_state = 148},
  [404] = {.lex_state = 96},
  [405] = {.lex_state = 150},
  [406] = {.lex_state = 161},
  [407] = {.lex_state = 161},
  [408] = {.lex_state = 161},
  [409] = {.lex_state = 161},
  [410] = {.lex_state = 96},
  [411] = {.lex_state = 96},
  [412] = {.lex_state = 96},
  [413] = {.lex_state = 152},
  [414] = {.lex_state = 96},
  [415] = {.lex_state = 152},
  [416] = {.lex_state = 96},
  [417] = {.lex_state = 141},
  [418] = {.lex_state = 96},
  [419] = {.lex_state = 96},
  [420] = {.lex_state = 141},
  [421] = {.lex_state = 96},
  [422] = {.lex_state = 152},
  [423] = {.lex_state = 160},
  [424] = {.lex_state = 161},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_rec] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_mutable] = ACTIONS(3),
    [anon_sym_constraint] = ACTIONS(3),
    [anon_sym_sig] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_functor] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_compilation_unit] = STATE(9),
    [sym_value_specification] = STATE(10),
    [sym_module_specification] = STATE(10),
    [sym_module_type_specification] = STATE(10),
    [sym_open_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_value_definition] = STATE(10),
    [sym_attribute] = STATE(10),
    [aux_sym_compilation_unit_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_val] = ACTIONS(12),
    [anon_sym_module] = ACTIONS(14),
    [anon_sym_type] = ACTIONS(16),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_let] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [2] = {
    [sym_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(26),
  },
  [3] = {
    [anon_sym_type] = ACTIONS(30),
    [sym_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(26),
  },
  [4] = {
    [sym_type_constructor_definition] = STATE(18),
    [sym_type_parameters] = STATE(19),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [5] = {
    [sym_qualified_identifier] = STATE(21),
    [sym_identifier] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [sym_qualified_identifier] = STATE(22),
    [sym_identifier] = ACTIONS(42),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym_let_binding] = STATE(28),
    [sym__pattern] = STATE(29),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_rec] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [anon_sym_AT_AT] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_SEMI_SEMI] = ACTIONS(62),
    [anon_sym_val] = ACTIONS(60),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(60),
    [anon_sym_open] = ACTIONS(60),
    [anon_sym_include] = ACTIONS(60),
    [anon_sym_let] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(60),
    [sym_comment] = ACTIONS(26),
  },
  [11] = {
    [sym_value_specification] = STATE(10),
    [sym_module_specification] = STATE(10),
    [sym_module_type_specification] = STATE(10),
    [sym_open_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_value_definition] = STATE(10),
    [sym_attribute] = STATE(10),
    [aux_sym_compilation_unit_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_val] = ACTIONS(12),
    [anon_sym_module] = ACTIONS(14),
    [anon_sym_type] = ACTIONS(16),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_let] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(66),
    [sym_comment] = ACTIONS(26),
  },
  [13] = {
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(26),
  },
  [14] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(39),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [15] = {
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_comment] = ACTIONS(26),
  },
  [16] = {
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(26),
  },
  [17] = {
    [sym_type_equation] = STATE(44),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_SEMI_SEMI] = ACTIONS(80),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [18] = {
    [aux_sym_type_definition_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_SEMI_SEMI] = ACTIONS(86),
    [anon_sym_val] = ACTIONS(86),
    [anon_sym_module] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_open] = ACTIONS(86),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_let] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(26),
  },
  [20] = {
    [aux_sym_type_parameters_repeat1] = STATE(50),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_SEMI_SEMI] = ACTIONS(94),
    [anon_sym_val] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_type] = ACTIONS(94),
    [anon_sym_open] = ACTIONS(94),
    [anon_sym_include] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_end] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(96),
    [sym_comment] = ACTIONS(26),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_SEMI_SEMI] = ACTIONS(98),
    [anon_sym_val] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_type] = ACTIONS(98),
    [anon_sym_open] = ACTIONS(98),
    [anon_sym_include] = ACTIONS(98),
    [anon_sym_let] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_end] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(96),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [sym__pattern] = STATE(52),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [24] = {
    [sym_let_binding] = STATE(53),
    [sym__pattern] = STATE(29),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(100),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [25] = {
    [sym__pattern] = STATE(55),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [26] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(57),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(58),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym_identifier] = ACTIONS(108),
    [sym_number] = ACTIONS(108),
    [sym_string] = ACTIONS(104),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [aux_sym_value_definition_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_SEMI_SEMI] = ACTIONS(110),
    [anon_sym_val] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym_open] = ACTIONS(110),
    [anon_sym_include] = ACTIONS(110),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(114),
    [sym_comment] = ACTIONS(26),
  },
  [30] = {
    [sym_qualified_identifier] = STATE(62),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_val] = ACTIONS(118),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_type] = ACTIONS(118),
    [anon_sym_open] = ACTIONS(118),
    [anon_sym_include] = ACTIONS(118),
    [anon_sym_let] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_comment] = ACTIONS(26),
  },
  [32] = {
    [sym_value_specification] = STATE(10),
    [sym_module_specification] = STATE(10),
    [sym_module_type_specification] = STATE(10),
    [sym_open_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_value_definition] = STATE(10),
    [sym_attribute] = STATE(10),
    [aux_sym_compilation_unit_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_val] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(123),
    [anon_sym_type] = ACTIONS(126),
    [anon_sym_open] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(132),
    [anon_sym_let] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [33] = {
    [sym__type] = STATE(66),
    [sym_parenthesized_type] = STATE(67),
    [sym_function_type] = STATE(67),
    [sym_type_variable] = STATE(67),
    [sym_constructed_type] = STATE(67),
    [sym_qualified_type_identifier] = STATE(67),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [sym_comment] = ACTIONS(26),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [anon_sym_val] = ACTIONS(147),
    [anon_sym_module] = ACTIONS(147),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_open] = ACTIONS(147),
    [anon_sym_include] = ACTIONS(147),
    [anon_sym_let] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_comment] = ACTIONS(26),
  },
  [35] = {
    [sym__module_type] = STATE(73),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(153),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [36] = {
    [sym__module] = STATE(78),
    [sym_functor_module] = STATE(79),
    [sym_functor_application_module] = STATE(79),
    [sym_struct_module] = STATE(79),
    [sym_qualified_identifier] = STATE(77),
    [anon_sym_functor] = ACTIONS(157),
    [anon_sym_struct] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(26),
  },
  [37] = {
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [38] = {
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [sym_comment] = ACTIONS(26),
  },
  [39] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(82),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [40] = {
    [sym_identifier] = ACTIONS(171),
    [sym_comment] = ACTIONS(26),
  },
  [41] = {
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [sym_comment] = ACTIONS(26),
  },
  [42] = {
    [sym_record_declaration] = STATE(88),
    [sym__type] = STATE(89),
    [sym_parenthesized_type] = STATE(90),
    [sym_function_type] = STATE(90),
    [sym_type_variable] = STATE(90),
    [sym_constructed_type] = STATE(90),
    [sym_qualified_type_identifier] = STATE(90),
    [sym_qualified_identifier] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [43] = {
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(26),
  },
  [44] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [anon_sym_val] = ACTIONS(187),
    [anon_sym_module] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_open] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(191),
    [anon_sym_val] = ACTIONS(191),
    [anon_sym_module] = ACTIONS(191),
    [anon_sym_type] = ACTIONS(191),
    [anon_sym_open] = ACTIONS(191),
    [anon_sym_include] = ACTIONS(191),
    [anon_sym_and] = ACTIONS(191),
    [anon_sym_let] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_constraint] = ACTIONS(191),
    [anon_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(26),
  },
  [46] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [anon_sym_val] = ACTIONS(187),
    [anon_sym_module] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_open] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [47] = {
    [sym_type_constructor_definition] = STATE(96),
    [sym_type_parameters] = STATE(19),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [48] = {
    [aux_sym_type_definition_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [anon_sym_val] = ACTIONS(193),
    [anon_sym_module] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_open] = ACTIONS(193),
    [anon_sym_include] = ACTIONS(193),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_let] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_comment] = ACTIONS(26),
  },
  [49] = {
    [sym_type_equation] = STATE(99),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
    [anon_sym_val] = ACTIONS(195),
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_open] = ACTIONS(195),
    [anon_sym_include] = ACTIONS(195),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [50] = {
    [aux_sym_type_parameters_repeat1] = STATE(50),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [sym_identifier] = ACTIONS(205),
    [sym_comment] = ACTIONS(26),
  },
  [51] = {
    [sym_identifier] = ACTIONS(207),
    [sym_comment] = ACTIONS(26),
  },
  [52] = {
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(211),
    [sym_comment] = ACTIONS(26),
  },
  [53] = {
    [aux_sym_value_definition_repeat1] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_val] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
    [anon_sym_type] = ACTIONS(213),
    [anon_sym_open] = ACTIONS(213),
    [anon_sym_include] = ACTIONS(213),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym_comment] = ACTIONS(26),
  },
  [54] = {
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [sym_number] = ACTIONS(217),
    [sym_string] = ACTIONS(215),
    [sym_comment] = ACTIONS(26),
  },
  [55] = {
    [aux_sym_record_pattern_repeat1] = STATE(107),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(221),
    [sym_comment] = ACTIONS(26),
  },
  [56] = {
    [sym_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(26),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(225),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(227),
    [sym_string] = ACTIONS(225),
    [sym_comment] = ACTIONS(26),
  },
  [58] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(57),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(110),
    [anon_sym_EQ] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [59] = {
    [sym_let_binding] = STATE(111),
    [sym__pattern] = STATE(29),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(100),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [60] = {
    [aux_sym_value_definition_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_val] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
    [anon_sym_type] = ACTIONS(213),
    [anon_sym_open] = ACTIONS(213),
    [anon_sym_include] = ACTIONS(213),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym_comment] = ACTIONS(26),
  },
  [61] = {
    [sym__expression] = STATE(116),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(231),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [62] = {
    [sym__type] = STATE(121),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(243),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [63] = {
    [sym__type] = STATE(124),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [sym_identifier] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
    [anon_sym_val] = ACTIONS(251),
    [anon_sym_module] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(251),
    [anon_sym_open] = ACTIONS(251),
    [anon_sym_include] = ACTIONS(251),
    [anon_sym_let] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(253),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [66] = {
    [sym_qualified_type_identifier] = STATE(129),
    [sym_qualified_identifier] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_SEMI_SEMI] = ACTIONS(257),
    [anon_sym_val] = ACTIONS(259),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(259),
    [anon_sym_open] = ACTIONS(259),
    [anon_sym_include] = ACTIONS(259),
    [anon_sym_let] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [sym_identifier] = ACTIONS(263),
    [sym_comment] = ACTIONS(26),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_val] = ACTIONS(267),
    [anon_sym_module] = ACTIONS(267),
    [anon_sym_type] = ACTIONS(267),
    [anon_sym_open] = ACTIONS(267),
    [anon_sym_include] = ACTIONS(267),
    [anon_sym_let] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(26),
  },
  [68] = {
    [anon_sym_DOT] = ACTIONS(253),
    [sym_comment] = ACTIONS(26),
  },
  [69] = {
    [sym__module_type] = STATE(131),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(271),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [70] = {
    [sym_value_specification] = STATE(136),
    [sym_module_specification] = STATE(136),
    [sym_module_type_specification] = STATE(136),
    [sym_open_directive] = STATE(136),
    [sym_include_directive] = STATE(136),
    [sym_type_definition] = STATE(136),
    [sym_attribute] = STATE(136),
    [aux_sym_signature_repeat1] = STATE(137),
    [anon_sym_val] = ACTIONS(273),
    [anon_sym_module] = ACTIONS(275),
    [anon_sym_type] = ACTIONS(277),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(279),
    [sym_comment] = ACTIONS(26),
  },
  [71] = {
    [sym_module_parameter] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_SEMI_SEMI] = ACTIONS(281),
    [anon_sym_val] = ACTIONS(281),
    [anon_sym_module] = ACTIONS(281),
    [anon_sym_type] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_open] = ACTIONS(281),
    [anon_sym_include] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_let] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_DASH_GT] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(253),
    [sym_comment] = ACTIONS(26),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_SEMI_SEMI] = ACTIONS(283),
    [anon_sym_val] = ACTIONS(283),
    [anon_sym_module] = ACTIONS(283),
    [anon_sym_type] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_open] = ACTIONS(283),
    [anon_sym_include] = ACTIONS(283),
    [anon_sym_let] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [sym_comment] = ACTIONS(26),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [anon_sym_val] = ACTIONS(289),
    [anon_sym_module] = ACTIONS(289),
    [anon_sym_type] = ACTIONS(289),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_open] = ACTIONS(289),
    [anon_sym_include] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_let] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_end] = ACTIONS(289),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [sym_comment] = ACTIONS(26),
  },
  [75] = {
    [sym_module_parameter] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [76] = {
    [sym_module_definition] = STATE(146),
    [sym_type_definition] = STATE(146),
    [sym_value_definition] = STATE(146),
    [sym_attribute] = STATE(146),
    [aux_sym_struct_module_repeat1] = STATE(147),
    [anon_sym_module] = ACTIONS(291),
    [anon_sym_type] = ACTIONS(293),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(297),
    [sym_comment] = ACTIONS(26),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_val] = ACTIONS(299),
    [anon_sym_module] = ACTIONS(299),
    [anon_sym_type] = ACTIONS(299),
    [anon_sym_open] = ACTIONS(299),
    [anon_sym_include] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_let] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_end] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(96),
    [sym_comment] = ACTIONS(26),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_val] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_open] = ACTIONS(303),
    [anon_sym_include] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_val] = ACTIONS(299),
    [anon_sym_module] = ACTIONS(299),
    [anon_sym_type] = ACTIONS(299),
    [anon_sym_open] = ACTIONS(299),
    [anon_sym_include] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_let] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_end] = ACTIONS(299),
    [sym_comment] = ACTIONS(26),
  },
  [80] = {
    [anon_sym_COLON] = ACTIONS(307),
    [sym_comment] = ACTIONS(26),
  },
  [81] = {
    [sym__module_type] = STATE(150),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(271),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [82] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(82),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(311),
    [sym_comment] = ACTIONS(26),
  },
  [83] = {
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_comment] = ACTIONS(26),
  },
  [84] = {
    [sym__type] = STATE(151),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [85] = {
    [sym_identifier] = ACTIONS(318),
    [sym_comment] = ACTIONS(26),
  },
  [86] = {
    [sym_field_declaration] = STATE(157),
    [anon_sym_SEMI] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(322),
    [anon_sym_mutable] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(26),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
    [anon_sym_val] = ACTIONS(251),
    [anon_sym_module] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_open] = ACTIONS(251),
    [anon_sym_include] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_let] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_constraint] = ACTIONS(251),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [88] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(159),
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_SEMI_SEMI] = ACTIONS(330),
    [anon_sym_val] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [anon_sym_open] = ACTIONS(330),
    [anon_sym_include] = ACTIONS(330),
    [anon_sym_and] = ACTIONS(330),
    [anon_sym_let] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [89] = {
    [sym_qualified_type_identifier] = STATE(162),
    [sym_qualified_identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_SEMI_SEMI] = ACTIONS(332),
    [anon_sym_val] = ACTIONS(334),
    [anon_sym_module] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(332),
    [anon_sym_open] = ACTIONS(334),
    [anon_sym_include] = ACTIONS(334),
    [anon_sym_and] = ACTIONS(334),
    [anon_sym_let] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_constraint] = ACTIONS(334),
    [anon_sym_DASH_GT] = ACTIONS(336),
    [sym_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(26),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_val] = ACTIONS(267),
    [anon_sym_module] = ACTIONS(267),
    [anon_sym_type] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_open] = ACTIONS(267),
    [anon_sym_include] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_let] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_constraint] = ACTIONS(267),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(26),
  },
  [91] = {
    [anon_sym_DOT] = ACTIONS(328),
    [sym_comment] = ACTIONS(26),
  },
  [92] = {
    [anon_sym_EQ] = ACTIONS(340),
    [sym_comment] = ACTIONS(26),
  },
  [93] = {
    [sym_record_declaration] = STATE(164),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(26),
  },
  [94] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_SEMI_SEMI] = ACTIONS(330),
    [anon_sym_val] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [anon_sym_open] = ACTIONS(330),
    [anon_sym_include] = ACTIONS(330),
    [anon_sym_and] = ACTIONS(330),
    [anon_sym_let] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [95] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_SEMI_SEMI] = ACTIONS(342),
    [anon_sym_val] = ACTIONS(342),
    [anon_sym_module] = ACTIONS(342),
    [anon_sym_type] = ACTIONS(342),
    [anon_sym_open] = ACTIONS(342),
    [anon_sym_include] = ACTIONS(342),
    [anon_sym_and] = ACTIONS(342),
    [anon_sym_let] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [anon_sym_constraint] = ACTIONS(344),
    [sym_comment] = ACTIONS(26),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(347),
    [anon_sym_val] = ACTIONS(347),
    [anon_sym_module] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(347),
    [anon_sym_open] = ACTIONS(347),
    [anon_sym_include] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_end] = ACTIONS(347),
    [sym_comment] = ACTIONS(26),
  },
  [97] = {
    [aux_sym_type_definition_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(347),
    [anon_sym_val] = ACTIONS(347),
    [anon_sym_module] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(347),
    [anon_sym_open] = ACTIONS(347),
    [anon_sym_include] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(349),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym_comment] = ACTIONS(26),
  },
  [98] = {
    [sym_record_declaration] = STATE(165),
    [sym__type] = STATE(89),
    [sym_parenthesized_type] = STATE(90),
    [sym_function_type] = STATE(90),
    [sym_type_variable] = STATE(90),
    [sym_constructed_type] = STATE(90),
    [sym_qualified_type_identifier] = STATE(90),
    [sym_qualified_identifier] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [99] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(167),
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_SEMI_SEMI] = ACTIONS(352),
    [anon_sym_val] = ACTIONS(352),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_type] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(354),
    [anon_sym_open] = ACTIONS(352),
    [anon_sym_include] = ACTIONS(352),
    [anon_sym_and] = ACTIONS(352),
    [anon_sym_let] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [100] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_SEMI_SEMI] = ACTIONS(352),
    [anon_sym_val] = ACTIONS(352),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_type] = ACTIONS(352),
    [anon_sym_open] = ACTIONS(352),
    [anon_sym_include] = ACTIONS(352),
    [anon_sym_and] = ACTIONS(352),
    [anon_sym_let] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_SEMI_SEMI] = ACTIONS(356),
    [anon_sym_val] = ACTIONS(356),
    [anon_sym_module] = ACTIONS(356),
    [anon_sym_type] = ACTIONS(356),
    [anon_sym_open] = ACTIONS(356),
    [anon_sym_include] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_and] = ACTIONS(356),
    [anon_sym_let] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [anon_sym_end] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(356),
    [anon_sym_in] = ACTIONS(358),
    [sym_comment] = ACTIONS(26),
  },
  [102] = {
    [sym__type] = STATE(168),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [103] = {
    [anon_sym_COLON] = ACTIONS(360),
    [anon_sym_EQ] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_QMARK] = ACTIONS(360),
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_SEMI] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(360),
    [sym_identifier] = ACTIONS(362),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(360),
    [sym_comment] = ACTIONS(26),
  },
  [104] = {
    [aux_sym_value_definition_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_SEMI_SEMI] = ACTIONS(364),
    [anon_sym_val] = ACTIONS(364),
    [anon_sym_module] = ACTIONS(364),
    [anon_sym_type] = ACTIONS(364),
    [anon_sym_open] = ACTIONS(364),
    [anon_sym_include] = ACTIONS(364),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(364),
    [sym_comment] = ACTIONS(26),
  },
  [105] = {
    [sym__pattern] = STATE(169),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [106] = {
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_RPAREN] = ACTIONS(366),
    [anon_sym_TILDE] = ACTIONS(366),
    [anon_sym_QMARK] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(366),
    [sym_identifier] = ACTIONS(368),
    [sym_number] = ACTIONS(368),
    [sym_string] = ACTIONS(366),
    [sym_comment] = ACTIONS(26),
  },
  [107] = {
    [aux_sym_record_pattern_repeat1] = STATE(171),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(370),
    [sym_comment] = ACTIONS(26),
  },
  [108] = {
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(376),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(376),
    [sym_string] = ACTIONS(374),
    [sym_comment] = ACTIONS(26),
  },
  [109] = {
    [sym__expression] = STATE(173),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(231),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [110] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(57),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(110),
    [anon_sym_EQ] = ACTIONS(378),
    [anon_sym_LPAREN] = ACTIONS(380),
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(386),
    [sym_identifier] = ACTIONS(389),
    [sym_number] = ACTIONS(389),
    [sym_string] = ACTIONS(392),
    [sym_comment] = ACTIONS(26),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_SEMI_SEMI] = ACTIONS(395),
    [anon_sym_val] = ACTIONS(395),
    [anon_sym_module] = ACTIONS(395),
    [anon_sym_type] = ACTIONS(395),
    [anon_sym_open] = ACTIONS(395),
    [anon_sym_include] = ACTIONS(395),
    [anon_sym_and] = ACTIONS(395),
    [anon_sym_let] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_end] = ACTIONS(395),
    [anon_sym_in] = ACTIONS(397),
    [sym_comment] = ACTIONS(26),
  },
  [112] = {
    [aux_sym_value_definition_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_SEMI_SEMI] = ACTIONS(395),
    [anon_sym_val] = ACTIONS(395),
    [anon_sym_module] = ACTIONS(395),
    [anon_sym_type] = ACTIONS(395),
    [anon_sym_open] = ACTIONS(395),
    [anon_sym_include] = ACTIONS(395),
    [anon_sym_and] = ACTIONS(399),
    [anon_sym_let] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [sym_let_binding] = STATE(175),
    [sym__pattern] = STATE(176),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(402),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_SEMI_SEMI] = ACTIONS(404),
    [anon_sym_val] = ACTIONS(404),
    [anon_sym_module] = ACTIONS(404),
    [anon_sym_type] = ACTIONS(404),
    [anon_sym_open] = ACTIONS(404),
    [anon_sym_include] = ACTIONS(404),
    [anon_sym_and] = ACTIONS(404),
    [anon_sym_let] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_end] = ACTIONS(404),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_in] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_SEMI_SEMI] = ACTIONS(404),
    [anon_sym_val] = ACTIONS(404),
    [anon_sym_module] = ACTIONS(404),
    [anon_sym_type] = ACTIONS(404),
    [anon_sym_open] = ACTIONS(404),
    [anon_sym_include] = ACTIONS(404),
    [anon_sym_and] = ACTIONS(404),
    [anon_sym_let] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_end] = ACTIONS(404),
    [anon_sym_in] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_SEMI_SEMI] = ACTIONS(408),
    [anon_sym_val] = ACTIONS(408),
    [anon_sym_module] = ACTIONS(408),
    [anon_sym_type] = ACTIONS(408),
    [anon_sym_open] = ACTIONS(408),
    [anon_sym_include] = ACTIONS(408),
    [anon_sym_and] = ACTIONS(408),
    [anon_sym_let] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_end] = ACTIONS(408),
    [anon_sym_in] = ACTIONS(410),
    [sym_comment] = ACTIONS(26),
  },
  [117] = {
    [sym__type] = STATE(177),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [118] = {
    [sym_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(26),
  },
  [119] = {
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(26),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_identifier] = ACTIONS(251),
    [sym_comment] = ACTIONS(26),
  },
  [121] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RBRACK] = ACTIONS(418),
    [anon_sym_DASH_GT] = ACTIONS(420),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [123] = {
    [anon_sym_DOT] = ACTIONS(416),
    [sym_comment] = ACTIONS(26),
  },
  [124] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_SEMI_SEMI] = ACTIONS(428),
    [anon_sym_val] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_type] = ACTIONS(430),
    [anon_sym_open] = ACTIONS(430),
    [anon_sym_include] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_DASH_GT] = ACTIONS(428),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(26),
  },
  [126] = {
    [sym_identifier] = ACTIONS(434),
    [sym_comment] = ACTIONS(26),
  },
  [127] = {
    [sym__type] = STATE(188),
    [sym_parenthesized_type] = STATE(67),
    [sym_function_type] = STATE(67),
    [sym_type_variable] = STATE(67),
    [sym_constructed_type] = STATE(67),
    [sym_qualified_type_identifier] = STATE(67),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [sym_comment] = ACTIONS(26),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [anon_sym_SEMI_SEMI] = ACTIONS(436),
    [anon_sym_val] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(438),
    [anon_sym_type] = ACTIONS(438),
    [anon_sym_open] = ACTIONS(438),
    [anon_sym_include] = ACTIONS(438),
    [anon_sym_let] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_DASH_GT] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(253),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(26),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_SEMI_SEMI] = ACTIONS(442),
    [anon_sym_val] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_type] = ACTIONS(444),
    [anon_sym_open] = ACTIONS(444),
    [anon_sym_include] = ACTIONS(444),
    [anon_sym_let] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_DASH_GT] = ACTIONS(442),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
  },
  [130] = {
    [sym_module_parameter] = STATE(189),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [anon_sym_SEMI_SEMI] = ACTIONS(448),
    [anon_sym_val] = ACTIONS(448),
    [anon_sym_module] = ACTIONS(448),
    [anon_sym_type] = ACTIONS(448),
    [anon_sym_open] = ACTIONS(448),
    [anon_sym_include] = ACTIONS(448),
    [anon_sym_let] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(450),
    [sym_comment] = ACTIONS(26),
  },
  [132] = {
    [sym_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(26),
  },
  [133] = {
    [anon_sym_type] = ACTIONS(454),
    [sym_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(26),
  },
  [134] = {
    [sym_type_constructor_definition] = STATE(195),
    [sym_type_parameters] = STATE(196),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_SEMI_SEMI] = ACTIONS(460),
    [anon_sym_val] = ACTIONS(460),
    [anon_sym_module] = ACTIONS(460),
    [anon_sym_type] = ACTIONS(460),
    [anon_sym_EQ] = ACTIONS(460),
    [anon_sym_open] = ACTIONS(460),
    [anon_sym_include] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_let] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(460),
    [anon_sym_end] = ACTIONS(460),
    [anon_sym_DASH_GT] = ACTIONS(460),
    [sym_comment] = ACTIONS(26),
  },
  [136] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(462),
    [anon_sym_val] = ACTIONS(464),
    [anon_sym_module] = ACTIONS(464),
    [anon_sym_type] = ACTIONS(464),
    [anon_sym_open] = ACTIONS(464),
    [anon_sym_include] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_end] = ACTIONS(464),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [sym_value_specification] = STATE(136),
    [sym_module_specification] = STATE(136),
    [sym_module_type_specification] = STATE(136),
    [sym_open_directive] = STATE(136),
    [sym_include_directive] = STATE(136),
    [sym_type_definition] = STATE(136),
    [sym_attribute] = STATE(136),
    [aux_sym_signature_repeat1] = STATE(199),
    [anon_sym_val] = ACTIONS(273),
    [anon_sym_module] = ACTIONS(275),
    [anon_sym_type] = ACTIONS(277),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(466),
    [sym_comment] = ACTIONS(26),
  },
  [138] = {
    [anon_sym_DASH_GT] = ACTIONS(468),
    [sym_comment] = ACTIONS(26),
  },
  [139] = {
    [sym__module] = STATE(201),
    [sym_functor_module] = STATE(79),
    [sym_functor_application_module] = STATE(79),
    [sym_struct_module] = STATE(79),
    [sym_qualified_identifier] = STATE(77),
    [anon_sym_functor] = ACTIONS(157),
    [anon_sym_struct] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(26),
  },
  [140] = {
    [sym__module_type] = STATE(202),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(153),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [141] = {
    [anon_sym_DASH_GT] = ACTIONS(470),
    [sym_comment] = ACTIONS(26),
  },
  [142] = {
    [sym_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(26),
  },
  [143] = {
    [sym_type_constructor_definition] = STATE(206),
    [sym_type_parameters] = STATE(207),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(474),
    [sym_comment] = ACTIONS(26),
  },
  [144] = {
    [sym_let_binding] = STATE(210),
    [sym__pattern] = STATE(211),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_rec] = ACTIONS(476),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(478),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [anon_sym_SEMI_SEMI] = ACTIONS(480),
    [anon_sym_val] = ACTIONS(480),
    [anon_sym_module] = ACTIONS(480),
    [anon_sym_type] = ACTIONS(480),
    [anon_sym_open] = ACTIONS(480),
    [anon_sym_include] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(480),
    [anon_sym_let] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(480),
    [anon_sym_end] = ACTIONS(480),
    [sym_comment] = ACTIONS(26),
  },
  [146] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(484),
    [anon_sym_module] = ACTIONS(486),
    [anon_sym_type] = ACTIONS(486),
    [anon_sym_let] = ACTIONS(486),
    [anon_sym_LBRACK] = ACTIONS(486),
    [anon_sym_end] = ACTIONS(486),
    [sym_comment] = ACTIONS(26),
  },
  [147] = {
    [sym_module_definition] = STATE(146),
    [sym_type_definition] = STATE(146),
    [sym_value_definition] = STATE(146),
    [sym_attribute] = STATE(146),
    [aux_sym_struct_module_repeat1] = STATE(214),
    [anon_sym_module] = ACTIONS(291),
    [anon_sym_type] = ACTIONS(293),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(488),
    [sym_comment] = ACTIONS(26),
  },
  [148] = {
    [sym__module] = STATE(216),
    [sym_functor_module] = STATE(79),
    [sym_functor_application_module] = STATE(79),
    [sym_struct_module] = STATE(79),
    [sym_qualified_identifier] = STATE(77),
    [anon_sym_functor] = ACTIONS(490),
    [anon_sym_struct] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(26),
  },
  [149] = {
    [sym__module_type] = STATE(218),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(492),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(494),
    [anon_sym_SEMI_SEMI] = ACTIONS(494),
    [anon_sym_val] = ACTIONS(494),
    [anon_sym_module] = ACTIONS(494),
    [anon_sym_type] = ACTIONS(494),
    [anon_sym_open] = ACTIONS(494),
    [anon_sym_include] = ACTIONS(494),
    [anon_sym_let] = ACTIONS(494),
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_DASH_GT] = ACTIONS(450),
    [sym_comment] = ACTIONS(26),
  },
  [151] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_SEMI_SEMI] = ACTIONS(428),
    [anon_sym_val] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_type] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_open] = ACTIONS(430),
    [anon_sym_include] = ACTIONS(430),
    [anon_sym_and] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_constraint] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(428),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(26),
  },
  [153] = {
    [anon_sym_RBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(26),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [anon_sym_SEMI_SEMI] = ACTIONS(500),
    [anon_sym_val] = ACTIONS(500),
    [anon_sym_module] = ACTIONS(500),
    [anon_sym_type] = ACTIONS(500),
    [anon_sym_open] = ACTIONS(500),
    [anon_sym_include] = ACTIONS(500),
    [anon_sym_and] = ACTIONS(500),
    [anon_sym_let] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(500),
    [anon_sym_constraint] = ACTIONS(500),
    [anon_sym_end] = ACTIONS(500),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [sym_identifier] = ACTIONS(502),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [anon_sym_COLON] = ACTIONS(504),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [aux_sym_record_declaration_repeat1] = STATE(224),
    [anon_sym_SEMI] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(26),
  },
  [158] = {
    [sym_identifier] = ACTIONS(508),
    [sym_comment] = ACTIONS(26),
  },
  [159] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_SEMI_SEMI] = ACTIONS(510),
    [anon_sym_val] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_type] = ACTIONS(510),
    [anon_sym_open] = ACTIONS(510),
    [anon_sym_include] = ACTIONS(510),
    [anon_sym_and] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [sym__type] = STATE(226),
    [sym_parenthesized_type] = STATE(90),
    [sym_function_type] = STATE(90),
    [sym_type_variable] = STATE(90),
    [sym_constructed_type] = STATE(90),
    [sym_qualified_type_identifier] = STATE(90),
    [sym_qualified_identifier] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [anon_sym_SEMI_SEMI] = ACTIONS(436),
    [anon_sym_val] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(438),
    [anon_sym_type] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(436),
    [anon_sym_open] = ACTIONS(438),
    [anon_sym_include] = ACTIONS(438),
    [anon_sym_and] = ACTIONS(438),
    [anon_sym_let] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_constraint] = ACTIONS(438),
    [anon_sym_DASH_GT] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_SEMI_SEMI] = ACTIONS(442),
    [anon_sym_val] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_type] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_open] = ACTIONS(444),
    [anon_sym_include] = ACTIONS(444),
    [anon_sym_and] = ACTIONS(444),
    [anon_sym_let] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_constraint] = ACTIONS(444),
    [anon_sym_DASH_GT] = ACTIONS(442),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
  },
  [163] = {
    [sym__type] = STATE(227),
    [sym_parenthesized_type] = STATE(90),
    [sym_function_type] = STATE(90),
    [sym_type_variable] = STATE(90),
    [sym_constructed_type] = STATE(90),
    [sym_qualified_type_identifier] = STATE(90),
    [sym_qualified_identifier] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(228),
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_SEMI_SEMI] = ACTIONS(510),
    [anon_sym_val] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_type] = ACTIONS(510),
    [anon_sym_open] = ACTIONS(510),
    [anon_sym_include] = ACTIONS(510),
    [anon_sym_and] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(229),
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_SEMI_SEMI] = ACTIONS(512),
    [anon_sym_val] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_type] = ACTIONS(512),
    [anon_sym_open] = ACTIONS(512),
    [anon_sym_include] = ACTIONS(512),
    [anon_sym_and] = ACTIONS(512),
    [anon_sym_let] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [sym_record_declaration] = STATE(230),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_SEMI_SEMI] = ACTIONS(512),
    [anon_sym_val] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_type] = ACTIONS(512),
    [anon_sym_open] = ACTIONS(512),
    [anon_sym_include] = ACTIONS(512),
    [anon_sym_and] = ACTIONS(512),
    [anon_sym_let] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [anon_sym_COLON] = ACTIONS(518),
    [anon_sym_EQ] = ACTIONS(518),
    [anon_sym_LPAREN] = ACTIONS(520),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_TILDE] = ACTIONS(518),
    [anon_sym_QMARK] = ACTIONS(518),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(518),
    [sym_identifier] = ACTIONS(520),
    [sym_number] = ACTIONS(520),
    [sym_string] = ACTIONS(518),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [aux_sym_record_pattern_repeat1] = STATE(171),
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(26),
  },
  [172] = {
    [sym__pattern] = STATE(232),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [anon_sym_SEMI_SEMI] = ACTIONS(525),
    [anon_sym_val] = ACTIONS(525),
    [anon_sym_module] = ACTIONS(525),
    [anon_sym_type] = ACTIONS(525),
    [anon_sym_open] = ACTIONS(525),
    [anon_sym_include] = ACTIONS(525),
    [anon_sym_and] = ACTIONS(525),
    [anon_sym_let] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(525),
    [anon_sym_in] = ACTIONS(527),
    [sym_comment] = ACTIONS(26),
  },
  [174] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(57),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(233),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [aux_sym_value_definition_repeat1] = STATE(236),
    [anon_sym_and] = ACTIONS(529),
    [anon_sym_in] = ACTIONS(531),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [anon_sym_EQ] = ACTIONS(533),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_DASH_GT] = ACTIONS(428),
    [sym_identifier] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(356),
    [sym_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(26),
  },
  [180] = {
    [sym_identifier] = ACTIONS(537),
    [sym_comment] = ACTIONS(26),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_SEMI_SEMI] = ACTIONS(539),
    [anon_sym_val] = ACTIONS(539),
    [anon_sym_module] = ACTIONS(539),
    [anon_sym_type] = ACTIONS(539),
    [anon_sym_open] = ACTIONS(539),
    [anon_sym_include] = ACTIONS(539),
    [anon_sym_let] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_end] = ACTIONS(539),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
    [sym__type] = STATE(240),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_RBRACK] = ACTIONS(436),
    [anon_sym_SEMI] = ACTIONS(436),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_DASH_GT] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(442),
    [anon_sym_RBRACK] = ACTIONS(442),
    [anon_sym_SEMI] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_DASH_GT] = ACTIONS(442),
    [sym_identifier] = ACTIONS(444),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_SEMI_SEMI] = ACTIONS(541),
    [anon_sym_val] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_type] = ACTIONS(543),
    [anon_sym_open] = ACTIONS(543),
    [anon_sym_include] = ACTIONS(543),
    [anon_sym_let] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_DASH_GT] = ACTIONS(541),
    [sym_identifier] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [sym__type] = STATE(241),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [anon_sym_SEMI_SEMI] = ACTIONS(547),
    [anon_sym_val] = ACTIONS(549),
    [anon_sym_module] = ACTIONS(549),
    [anon_sym_type] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(547),
    [anon_sym_open] = ACTIONS(549),
    [anon_sym_include] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_let] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_DASH_GT] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(356),
    [sym_identifier] = ACTIONS(551),
    [sym_comment] = ACTIONS(26),
  },
  [188] = {
    [sym_qualified_type_identifier] = STATE(129),
    [sym_qualified_identifier] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_val] = ACTIONS(555),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_open] = ACTIONS(555),
    [anon_sym_include] = ACTIONS(555),
    [anon_sym_let] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [sym_identifier] = ACTIONS(263),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [anon_sym_DASH_GT] = ACTIONS(557),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [sym__module_type] = STATE(243),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(271),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [anon_sym_COLON] = ACTIONS(559),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [sym_identifier] = ACTIONS(561),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(247),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [194] = {
    [sym_type_equation] = STATE(250),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(251),
    [anon_sym_SEMI_SEMI] = ACTIONS(80),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(80),
    [sym_comment] = ACTIONS(26),
  },
  [195] = {
    [aux_sym_type_definition_repeat1] = STATE(253),
    [anon_sym_SEMI_SEMI] = ACTIONS(86),
    [anon_sym_val] = ACTIONS(86),
    [anon_sym_module] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_open] = ACTIONS(86),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_end] = ACTIONS(86),
    [sym_comment] = ACTIONS(26),
  },
  [196] = {
    [sym_identifier] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
  },
  [197] = {
    [anon_sym_val] = ACTIONS(573),
    [anon_sym_module] = ACTIONS(573),
    [anon_sym_type] = ACTIONS(573),
    [anon_sym_open] = ACTIONS(573),
    [anon_sym_include] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_end] = ACTIONS(573),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [anon_sym_val] = ACTIONS(575),
    [anon_sym_module] = ACTIONS(575),
    [anon_sym_type] = ACTIONS(575),
    [anon_sym_EQ] = ACTIONS(575),
    [anon_sym_open] = ACTIONS(575),
    [anon_sym_include] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_let] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_end] = ACTIONS(575),
    [anon_sym_DASH_GT] = ACTIONS(575),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [sym_value_specification] = STATE(136),
    [sym_module_specification] = STATE(136),
    [sym_module_type_specification] = STATE(136),
    [sym_open_directive] = STATE(136),
    [sym_include_directive] = STATE(136),
    [sym_type_definition] = STATE(136),
    [sym_attribute] = STATE(136),
    [aux_sym_signature_repeat1] = STATE(199),
    [anon_sym_val] = ACTIONS(577),
    [anon_sym_module] = ACTIONS(580),
    [anon_sym_type] = ACTIONS(583),
    [anon_sym_open] = ACTIONS(586),
    [anon_sym_include] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_end] = ACTIONS(573),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [sym__module_type] = STATE(255),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(153),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_SEMI_SEMI] = ACTIONS(595),
    [anon_sym_val] = ACTIONS(595),
    [anon_sym_module] = ACTIONS(595),
    [anon_sym_type] = ACTIONS(595),
    [anon_sym_open] = ACTIONS(595),
    [anon_sym_include] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_let] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(595),
    [anon_sym_end] = ACTIONS(595),
    [sym_comment] = ACTIONS(26),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [anon_sym_SEMI_SEMI] = ACTIONS(597),
    [anon_sym_val] = ACTIONS(597),
    [anon_sym_module] = ACTIONS(597),
    [anon_sym_type] = ACTIONS(597),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_open] = ACTIONS(597),
    [anon_sym_include] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [sym_comment] = ACTIONS(26),
  },
  [203] = {
    [sym__module] = STATE(256),
    [sym_functor_module] = STATE(79),
    [sym_functor_application_module] = STATE(79),
    [sym_struct_module] = STATE(79),
    [sym_qualified_identifier] = STATE(77),
    [anon_sym_functor] = ACTIONS(157),
    [anon_sym_struct] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(26),
  },
  [204] = {
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(601),
    [sym_comment] = ACTIONS(26),
  },
  [205] = {
    [sym_type_equation] = STATE(261),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(262),
    [anon_sym_SEMI_SEMI] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(80),
    [sym_comment] = ACTIONS(26),
  },
  [206] = {
    [aux_sym_type_definition_repeat1] = STATE(264),
    [anon_sym_SEMI_SEMI] = ACTIONS(86),
    [anon_sym_module] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(607),
    [anon_sym_let] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_end] = ACTIONS(86),
    [sym_comment] = ACTIONS(26),
  },
  [207] = {
    [sym_identifier] = ACTIONS(609),
    [sym_comment] = ACTIONS(26),
  },
  [208] = {
    [sym_let_binding] = STATE(266),
    [sym__pattern] = STATE(211),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(611),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [209] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(57),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(267),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [aux_sym_value_definition_repeat1] = STATE(269),
    [anon_sym_SEMI_SEMI] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym_and] = ACTIONS(613),
    [anon_sym_let] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(26),
  },
  [211] = {
    [anon_sym_EQ] = ACTIONS(615),
    [sym_comment] = ACTIONS(26),
  },
  [212] = {
    [anon_sym_module] = ACTIONS(617),
    [anon_sym_type] = ACTIONS(617),
    [anon_sym_let] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(617),
    [anon_sym_end] = ACTIONS(617),
    [sym_comment] = ACTIONS(26),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_val] = ACTIONS(619),
    [anon_sym_module] = ACTIONS(619),
    [anon_sym_type] = ACTIONS(619),
    [anon_sym_open] = ACTIONS(619),
    [anon_sym_include] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_let] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_end] = ACTIONS(619),
    [sym_comment] = ACTIONS(26),
  },
  [214] = {
    [sym_module_definition] = STATE(146),
    [sym_type_definition] = STATE(146),
    [sym_value_definition] = STATE(146),
    [sym_attribute] = STATE(146),
    [aux_sym_struct_module_repeat1] = STATE(214),
    [anon_sym_module] = ACTIONS(623),
    [anon_sym_type] = ACTIONS(626),
    [anon_sym_let] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_end] = ACTIONS(617),
    [sym_comment] = ACTIONS(26),
  },
  [215] = {
    [sym_module_parameter] = STATE(271),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [216] = {
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(635),
    [sym_comment] = ACTIONS(26),
  },
  [217] = {
    [sym_module_parameter] = STATE(273),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(637),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym_comment] = ACTIONS(26),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_SEMI_SEMI] = ACTIONS(541),
    [anon_sym_val] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_type] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_open] = ACTIONS(543),
    [anon_sym_include] = ACTIONS(543),
    [anon_sym_and] = ACTIONS(543),
    [anon_sym_let] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_constraint] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(541),
    [sym_identifier] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(641),
    [anon_sym_SEMI_SEMI] = ACTIONS(641),
    [anon_sym_val] = ACTIONS(641),
    [anon_sym_module] = ACTIONS(641),
    [anon_sym_type] = ACTIONS(641),
    [anon_sym_open] = ACTIONS(641),
    [anon_sym_include] = ACTIONS(641),
    [anon_sym_and] = ACTIONS(641),
    [anon_sym_let] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_constraint] = ACTIONS(641),
    [anon_sym_end] = ACTIONS(641),
    [sym_comment] = ACTIONS(26),
  },
  [221] = {
    [anon_sym_COLON] = ACTIONS(643),
    [sym_comment] = ACTIONS(26),
  },
  [222] = {
    [sym__type] = STATE(277),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [223] = {
    [sym_field_declaration] = STATE(279),
    [anon_sym_RBRACE] = ACTIONS(645),
    [anon_sym_mutable] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(26),
  },
  [224] = {
    [aux_sym_record_declaration_repeat1] = STATE(281),
    [anon_sym_SEMI] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(645),
    [sym_comment] = ACTIONS(26),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [anon_sym_SEMI_SEMI] = ACTIONS(547),
    [anon_sym_val] = ACTIONS(549),
    [anon_sym_module] = ACTIONS(549),
    [anon_sym_type] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(547),
    [anon_sym_open] = ACTIONS(549),
    [anon_sym_include] = ACTIONS(549),
    [anon_sym_and] = ACTIONS(549),
    [anon_sym_let] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_constraint] = ACTIONS(549),
    [anon_sym_DASH_GT] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(356),
    [sym_identifier] = ACTIONS(551),
    [sym_comment] = ACTIONS(26),
  },
  [226] = {
    [sym_qualified_type_identifier] = STATE(162),
    [sym_qualified_identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_val] = ACTIONS(555),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_EQ] = ACTIONS(553),
    [anon_sym_open] = ACTIONS(555),
    [anon_sym_include] = ACTIONS(555),
    [anon_sym_and] = ACTIONS(555),
    [anon_sym_let] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_constraint] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(336),
    [sym_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(26),
  },
  [227] = {
    [sym_qualified_type_identifier] = STATE(162),
    [sym_qualified_identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(649),
    [anon_sym_SEMI_SEMI] = ACTIONS(649),
    [anon_sym_val] = ACTIONS(651),
    [anon_sym_module] = ACTIONS(651),
    [anon_sym_type] = ACTIONS(651),
    [anon_sym_open] = ACTIONS(651),
    [anon_sym_include] = ACTIONS(651),
    [anon_sym_and] = ACTIONS(651),
    [anon_sym_let] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_constraint] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(653),
    [sym_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(26),
  },
  [228] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_SEMI_SEMI] = ACTIONS(655),
    [anon_sym_val] = ACTIONS(655),
    [anon_sym_module] = ACTIONS(655),
    [anon_sym_type] = ACTIONS(655),
    [anon_sym_open] = ACTIONS(655),
    [anon_sym_include] = ACTIONS(655),
    [anon_sym_and] = ACTIONS(655),
    [anon_sym_let] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [229] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(657),
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_val] = ACTIONS(657),
    [anon_sym_module] = ACTIONS(657),
    [anon_sym_type] = ACTIONS(657),
    [anon_sym_open] = ACTIONS(657),
    [anon_sym_include] = ACTIONS(657),
    [anon_sym_and] = ACTIONS(657),
    [anon_sym_let] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [230] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(283),
    [ts_builtin_sym_end] = ACTIONS(657),
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_val] = ACTIONS(657),
    [anon_sym_module] = ACTIONS(657),
    [anon_sym_type] = ACTIONS(657),
    [anon_sym_open] = ACTIONS(657),
    [anon_sym_include] = ACTIONS(657),
    [anon_sym_and] = ACTIONS(657),
    [anon_sym_let] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [231] = {
    [anon_sym_COLON] = ACTIONS(659),
    [anon_sym_EQ] = ACTIONS(659),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_TILDE] = ACTIONS(659),
    [anon_sym_QMARK] = ACTIONS(659),
    [anon_sym_LBRACE] = ACTIONS(659),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_RBRACE] = ACTIONS(659),
    [sym_identifier] = ACTIONS(661),
    [sym_number] = ACTIONS(661),
    [sym_string] = ACTIONS(659),
    [sym_comment] = ACTIONS(26),
  },
  [232] = {
    [anon_sym_EQ] = ACTIONS(663),
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_TILDE] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(663),
    [anon_sym_LBRACE] = ACTIONS(663),
    [sym_identifier] = ACTIONS(665),
    [sym_number] = ACTIONS(665),
    [sym_string] = ACTIONS(663),
    [sym_comment] = ACTIONS(26),
  },
  [233] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(57),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(110),
    [anon_sym_EQ] = ACTIONS(667),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [234] = {
    [sym_let_binding] = STATE(111),
    [sym__pattern] = STATE(176),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(402),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [235] = {
    [sym__expression] = STATE(285),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(231),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [236] = {
    [aux_sym_value_definition_repeat1] = STATE(287),
    [anon_sym_and] = ACTIONS(529),
    [anon_sym_in] = ACTIONS(669),
    [sym_comment] = ACTIONS(26),
  },
  [237] = {
    [sym__expression] = STATE(116),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(671),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [238] = {
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(541),
    [anon_sym_SEMI] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_DASH_GT] = ACTIONS(541),
    [sym_identifier] = ACTIONS(543),
    [sym_comment] = ACTIONS(26),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_DASH_GT] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(356),
    [sym_identifier] = ACTIONS(549),
    [sym_comment] = ACTIONS(26),
  },
  [240] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RBRACK] = ACTIONS(553),
    [anon_sym_DASH_GT] = ACTIONS(420),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [241] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [242] = {
    [sym__module_type] = STATE(289),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(271),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [anon_sym_SEMI_SEMI] = ACTIONS(597),
    [anon_sym_val] = ACTIONS(597),
    [anon_sym_module] = ACTIONS(597),
    [anon_sym_type] = ACTIONS(597),
    [anon_sym_open] = ACTIONS(597),
    [anon_sym_include] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_DASH_GT] = ACTIONS(450),
    [sym_comment] = ACTIONS(26),
  },
  [244] = {
    [sym__type] = STATE(293),
    [sym_parenthesized_type] = STATE(294),
    [sym_function_type] = STATE(294),
    [sym_type_variable] = STATE(294),
    [sym_constructed_type] = STATE(294),
    [sym_qualified_type_identifier] = STATE(294),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_LPAREN] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(675),
    [sym_identifier] = ACTIONS(677),
    [sym_comment] = ACTIONS(26),
  },
  [245] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [anon_sym_val] = ACTIONS(147),
    [anon_sym_module] = ACTIONS(147),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(679),
    [anon_sym_open] = ACTIONS(147),
    [anon_sym_include] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(26),
  },
  [246] = {
    [sym__module_type] = STATE(299),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
    [sym_comment] = ACTIONS(26),
  },
  [247] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(82),
    [anon_sym_COLON] = ACTIONS(685),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [248] = {
    [sym_record_declaration] = STATE(304),
    [sym__type] = STATE(305),
    [sym_parenthesized_type] = STATE(306),
    [sym_function_type] = STATE(306),
    [sym_type_variable] = STATE(306),
    [sym_constructed_type] = STATE(306),
    [sym_qualified_type_identifier] = STATE(306),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(687),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(691),
    [sym_comment] = ACTIONS(26),
  },
  [249] = {
    [sym_identifier] = ACTIONS(693),
    [sym_comment] = ACTIONS(26),
  },
  [250] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(310),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [anon_sym_val] = ACTIONS(187),
    [anon_sym_module] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(695),
    [anon_sym_open] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [251] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [anon_sym_val] = ACTIONS(187),
    [anon_sym_module] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_open] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [252] = {
    [sym_type_constructor_definition] = STATE(96),
    [sym_type_parameters] = STATE(196),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [253] = {
    [aux_sym_type_definition_repeat1] = STATE(312),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [anon_sym_val] = ACTIONS(193),
    [anon_sym_module] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_open] = ACTIONS(193),
    [anon_sym_include] = ACTIONS(193),
    [anon_sym_and] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(26),
  },
  [254] = {
    [sym_type_equation] = STATE(314),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(315),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
    [anon_sym_val] = ACTIONS(195),
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(697),
    [anon_sym_open] = ACTIONS(195),
    [anon_sym_include] = ACTIONS(195),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(26),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(699),
    [anon_sym_SEMI_SEMI] = ACTIONS(699),
    [anon_sym_val] = ACTIONS(699),
    [anon_sym_module] = ACTIONS(699),
    [anon_sym_type] = ACTIONS(699),
    [anon_sym_EQ] = ACTIONS(699),
    [anon_sym_open] = ACTIONS(699),
    [anon_sym_include] = ACTIONS(699),
    [anon_sym_let] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(699),
    [anon_sym_DASH_GT] = ACTIONS(287),
    [sym_comment] = ACTIONS(26),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_SEMI_SEMI] = ACTIONS(701),
    [anon_sym_val] = ACTIONS(701),
    [anon_sym_module] = ACTIONS(701),
    [anon_sym_type] = ACTIONS(701),
    [anon_sym_open] = ACTIONS(701),
    [anon_sym_include] = ACTIONS(701),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_let] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_end] = ACTIONS(701),
    [sym_comment] = ACTIONS(26),
  },
  [257] = {
    [sym__module_type] = STATE(317),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(703),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [258] = {
    [sym__module] = STATE(78),
    [sym_functor_module] = STATE(79),
    [sym_functor_application_module] = STATE(79),
    [sym_struct_module] = STATE(79),
    [sym_qualified_identifier] = STATE(77),
    [anon_sym_functor] = ACTIONS(705),
    [anon_sym_struct] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(26),
  },
  [259] = {
    [sym_record_declaration] = STATE(322),
    [sym__type] = STATE(323),
    [sym_parenthesized_type] = STATE(324),
    [sym_function_type] = STATE(324),
    [sym_type_variable] = STATE(324),
    [sym_constructed_type] = STATE(324),
    [sym_qualified_type_identifier] = STATE(324),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(711),
    [sym_comment] = ACTIONS(26),
  },
  [260] = {
    [sym_identifier] = ACTIONS(713),
    [sym_comment] = ACTIONS(26),
  },
  [261] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(328),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [anon_sym_module] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(715),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [262] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [anon_sym_module] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [263] = {
    [sym_type_constructor_definition] = STATE(96),
    [sym_type_parameters] = STATE(207),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(474),
    [sym_comment] = ACTIONS(26),
  },
  [264] = {
    [aux_sym_type_definition_repeat1] = STATE(330),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [anon_sym_module] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_and] = ACTIONS(607),
    [anon_sym_let] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(26),
  },
  [265] = {
    [sym_type_equation] = STATE(332),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(333),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(717),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(26),
  },
  [266] = {
    [aux_sym_value_definition_repeat1] = STATE(334),
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
    [anon_sym_type] = ACTIONS(213),
    [anon_sym_and] = ACTIONS(613),
    [anon_sym_let] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(26),
  },
  [267] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(57),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(110),
    [anon_sym_EQ] = ACTIONS(719),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [268] = {
    [sym_let_binding] = STATE(111),
    [sym__pattern] = STATE(211),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(611),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [269] = {
    [aux_sym_value_definition_repeat1] = STATE(336),
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
    [anon_sym_type] = ACTIONS(213),
    [anon_sym_and] = ACTIONS(613),
    [anon_sym_let] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(26),
  },
  [270] = {
    [sym__expression] = STATE(116),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(721),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [271] = {
    [anon_sym_DASH_GT] = ACTIONS(723),
    [sym_comment] = ACTIONS(26),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [anon_sym_SEMI_SEMI] = ACTIONS(725),
    [anon_sym_val] = ACTIONS(725),
    [anon_sym_module] = ACTIONS(725),
    [anon_sym_type] = ACTIONS(725),
    [anon_sym_open] = ACTIONS(725),
    [anon_sym_include] = ACTIONS(725),
    [anon_sym_LPAREN] = ACTIONS(727),
    [anon_sym_RPAREN] = ACTIONS(725),
    [anon_sym_let] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(725),
    [anon_sym_end] = ACTIONS(725),
    [sym_comment] = ACTIONS(26),
  },
  [273] = {
    [anon_sym_DASH_GT] = ACTIONS(729),
    [sym_comment] = ACTIONS(26),
  },
  [274] = {
    [anon_sym_COLON] = ACTIONS(731),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_DASH_GT] = ACTIONS(731),
    [sym_comment] = ACTIONS(26),
  },
  [275] = {
    [sym__module_type] = STATE(340),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(492),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [276] = {
    [sym__type] = STATE(341),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [277] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_SEMI] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(735),
    [anon_sym_DASH_GT] = ACTIONS(737),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(739),
    [anon_sym_SEMI_SEMI] = ACTIONS(739),
    [anon_sym_val] = ACTIONS(739),
    [anon_sym_module] = ACTIONS(739),
    [anon_sym_type] = ACTIONS(739),
    [anon_sym_open] = ACTIONS(739),
    [anon_sym_include] = ACTIONS(739),
    [anon_sym_and] = ACTIONS(739),
    [anon_sym_let] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(739),
    [anon_sym_constraint] = ACTIONS(739),
    [anon_sym_end] = ACTIONS(739),
    [sym_comment] = ACTIONS(26),
  },
  [279] = {
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_RBRACE] = ACTIONS(741),
    [sym_comment] = ACTIONS(26),
  },
  [280] = {
    [sym_field_declaration] = STATE(279),
    [anon_sym_RBRACE] = ACTIONS(743),
    [anon_sym_mutable] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(26),
  },
  [281] = {
    [aux_sym_record_declaration_repeat1] = STATE(281),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_RBRACE] = ACTIONS(741),
    [sym_comment] = ACTIONS(26),
  },
  [282] = {
    [sym__type] = STATE(345),
    [sym_parenthesized_type] = STATE(90),
    [sym_function_type] = STATE(90),
    [sym_type_variable] = STATE(90),
    [sym_constructed_type] = STATE(90),
    [sym_qualified_type_identifier] = STATE(90),
    [sym_qualified_identifier] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [283] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(748),
    [anon_sym_SEMI_SEMI] = ACTIONS(748),
    [anon_sym_val] = ACTIONS(748),
    [anon_sym_module] = ACTIONS(748),
    [anon_sym_type] = ACTIONS(748),
    [anon_sym_open] = ACTIONS(748),
    [anon_sym_include] = ACTIONS(748),
    [anon_sym_and] = ACTIONS(748),
    [anon_sym_let] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [284] = {
    [sym__expression] = STATE(173),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(671),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(750),
    [anon_sym_SEMI_SEMI] = ACTIONS(750),
    [anon_sym_val] = ACTIONS(750),
    [anon_sym_module] = ACTIONS(750),
    [anon_sym_type] = ACTIONS(750),
    [anon_sym_open] = ACTIONS(750),
    [anon_sym_include] = ACTIONS(750),
    [anon_sym_and] = ACTIONS(750),
    [anon_sym_let] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_end] = ACTIONS(750),
    [anon_sym_in] = ACTIONS(752),
    [sym_comment] = ACTIONS(26),
  },
  [286] = {
    [sym__expression] = STATE(346),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(231),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [287] = {
    [aux_sym_value_definition_repeat1] = STATE(287),
    [anon_sym_and] = ACTIONS(754),
    [anon_sym_in] = ACTIONS(395),
    [sym_comment] = ACTIONS(26),
  },
  [288] = {
    [sym_let_binding] = STATE(347),
    [sym__pattern] = STATE(176),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(402),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(699),
    [anon_sym_SEMI_SEMI] = ACTIONS(699),
    [anon_sym_val] = ACTIONS(699),
    [anon_sym_module] = ACTIONS(699),
    [anon_sym_type] = ACTIONS(699),
    [anon_sym_open] = ACTIONS(699),
    [anon_sym_include] = ACTIONS(699),
    [anon_sym_let] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(699),
    [anon_sym_DASH_GT] = ACTIONS(450),
    [sym_comment] = ACTIONS(26),
  },
  [290] = {
    [sym__type] = STATE(348),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [291] = {
    [sym_identifier] = ACTIONS(757),
    [sym_comment] = ACTIONS(26),
  },
  [292] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
    [anon_sym_val] = ACTIONS(251),
    [anon_sym_module] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(251),
    [anon_sym_open] = ACTIONS(251),
    [anon_sym_include] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(251),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(759),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [293] = {
    [sym_qualified_type_identifier] = STATE(353),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_SEMI_SEMI] = ACTIONS(257),
    [anon_sym_val] = ACTIONS(259),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(259),
    [anon_sym_open] = ACTIONS(259),
    [anon_sym_include] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_end] = ACTIONS(259),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_identifier] = ACTIONS(763),
    [sym_comment] = ACTIONS(26),
  },
  [294] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_val] = ACTIONS(267),
    [anon_sym_module] = ACTIONS(267),
    [anon_sym_type] = ACTIONS(267),
    [anon_sym_open] = ACTIONS(267),
    [anon_sym_include] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_end] = ACTIONS(267),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(26),
  },
  [295] = {
    [anon_sym_DOT] = ACTIONS(759),
    [sym_comment] = ACTIONS(26),
  },
  [296] = {
    [sym__module_type] = STATE(354),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
    [sym_comment] = ACTIONS(26),
  },
  [297] = {
    [sym_module_parameter] = STATE(355),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [298] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(281),
    [anon_sym_val] = ACTIONS(281),
    [anon_sym_module] = ACTIONS(281),
    [anon_sym_type] = ACTIONS(281),
    [anon_sym_open] = ACTIONS(281),
    [anon_sym_include] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_end] = ACTIONS(281),
    [anon_sym_DASH_GT] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(759),
    [sym_comment] = ACTIONS(26),
  },
  [299] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(283),
    [anon_sym_val] = ACTIONS(283),
    [anon_sym_module] = ACTIONS(283),
    [anon_sym_type] = ACTIONS(283),
    [anon_sym_open] = ACTIONS(283),
    [anon_sym_include] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_end] = ACTIONS(283),
    [anon_sym_DASH_GT] = ACTIONS(765),
    [sym_comment] = ACTIONS(26),
  },
  [300] = {
    [sym__module_type] = STATE(357),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
    [sym_comment] = ACTIONS(26),
  },
  [301] = {
    [sym__type] = STATE(358),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [302] = {
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(26),
  },
  [303] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
    [anon_sym_val] = ACTIONS(251),
    [anon_sym_module] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_open] = ACTIONS(251),
    [anon_sym_include] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_constraint] = ACTIONS(251),
    [anon_sym_end] = ACTIONS(251),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(769),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [304] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(361),
    [anon_sym_SEMI_SEMI] = ACTIONS(330),
    [anon_sym_val] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [anon_sym_open] = ACTIONS(330),
    [anon_sym_include] = ACTIONS(330),
    [anon_sym_and] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(330),
    [sym_comment] = ACTIONS(26),
  },
  [305] = {
    [sym_qualified_type_identifier] = STATE(364),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_SEMI_SEMI] = ACTIONS(332),
    [anon_sym_val] = ACTIONS(334),
    [anon_sym_module] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(332),
    [anon_sym_open] = ACTIONS(334),
    [anon_sym_include] = ACTIONS(334),
    [anon_sym_and] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_constraint] = ACTIONS(334),
    [anon_sym_end] = ACTIONS(334),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym_identifier] = ACTIONS(773),
    [sym_comment] = ACTIONS(26),
  },
  [306] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_val] = ACTIONS(267),
    [anon_sym_module] = ACTIONS(267),
    [anon_sym_type] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_open] = ACTIONS(267),
    [anon_sym_include] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_constraint] = ACTIONS(267),
    [anon_sym_end] = ACTIONS(267),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(26),
  },
  [307] = {
    [anon_sym_DOT] = ACTIONS(769),
    [sym_comment] = ACTIONS(26),
  },
  [308] = {
    [anon_sym_EQ] = ACTIONS(775),
    [sym_comment] = ACTIONS(26),
  },
  [309] = {
    [sym_record_declaration] = STATE(366),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(26),
  },
  [310] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(330),
    [anon_sym_val] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [anon_sym_open] = ACTIONS(330),
    [anon_sym_include] = ACTIONS(330),
    [anon_sym_and] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(330),
    [sym_comment] = ACTIONS(26),
  },
  [311] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(342),
    [anon_sym_val] = ACTIONS(342),
    [anon_sym_module] = ACTIONS(342),
    [anon_sym_type] = ACTIONS(342),
    [anon_sym_open] = ACTIONS(342),
    [anon_sym_include] = ACTIONS(342),
    [anon_sym_and] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [anon_sym_constraint] = ACTIONS(777),
    [anon_sym_end] = ACTIONS(342),
    [sym_comment] = ACTIONS(26),
  },
  [312] = {
    [aux_sym_type_definition_repeat1] = STATE(312),
    [anon_sym_SEMI_SEMI] = ACTIONS(347),
    [anon_sym_val] = ACTIONS(347),
    [anon_sym_module] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(347),
    [anon_sym_open] = ACTIONS(347),
    [anon_sym_include] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_end] = ACTIONS(347),
    [sym_comment] = ACTIONS(26),
  },
  [313] = {
    [sym_record_declaration] = STATE(367),
    [sym__type] = STATE(305),
    [sym_parenthesized_type] = STATE(306),
    [sym_function_type] = STATE(306),
    [sym_type_variable] = STATE(306),
    [sym_constructed_type] = STATE(306),
    [sym_qualified_type_identifier] = STATE(306),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(687),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(691),
    [sym_comment] = ACTIONS(26),
  },
  [314] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(369),
    [anon_sym_SEMI_SEMI] = ACTIONS(352),
    [anon_sym_val] = ACTIONS(352),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_type] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(783),
    [anon_sym_open] = ACTIONS(352),
    [anon_sym_include] = ACTIONS(352),
    [anon_sym_and] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(26),
  },
  [315] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(352),
    [anon_sym_val] = ACTIONS(352),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_type] = ACTIONS(352),
    [anon_sym_open] = ACTIONS(352),
    [anon_sym_include] = ACTIONS(352),
    [anon_sym_and] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(26),
  },
  [316] = {
    [sym_module_parameter] = STATE(370),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [317] = {
    [anon_sym_EQ] = ACTIONS(785),
    [anon_sym_DASH_GT] = ACTIONS(787),
    [sym_comment] = ACTIONS(26),
  },
  [318] = {
    [sym_module_parameter] = STATE(373),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [319] = {
    [sym__type] = STATE(374),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [320] = {
    [sym_identifier] = ACTIONS(789),
    [sym_comment] = ACTIONS(26),
  },
  [321] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(249),
    [anon_sym_module] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_let] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_constraint] = ACTIONS(251),
    [anon_sym_end] = ACTIONS(251),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(791),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [322] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(377),
    [anon_sym_SEMI_SEMI] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [anon_sym_and] = ACTIONS(330),
    [anon_sym_let] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(330),
    [sym_comment] = ACTIONS(26),
  },
  [323] = {
    [sym_qualified_type_identifier] = STATE(380),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(332),
    [anon_sym_module] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(332),
    [anon_sym_and] = ACTIONS(334),
    [anon_sym_let] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_constraint] = ACTIONS(334),
    [anon_sym_end] = ACTIONS(334),
    [anon_sym_DASH_GT] = ACTIONS(793),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(26),
  },
  [324] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_module] = ACTIONS(267),
    [anon_sym_type] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_let] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_constraint] = ACTIONS(267),
    [anon_sym_end] = ACTIONS(267),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(26),
  },
  [325] = {
    [anon_sym_DOT] = ACTIONS(791),
    [sym_comment] = ACTIONS(26),
  },
  [326] = {
    [anon_sym_EQ] = ACTIONS(797),
    [sym_comment] = ACTIONS(26),
  },
  [327] = {
    [sym_record_declaration] = STATE(382),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(26),
  },
  [328] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [anon_sym_and] = ACTIONS(330),
    [anon_sym_let] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(330),
    [sym_comment] = ACTIONS(26),
  },
  [329] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(342),
    [anon_sym_module] = ACTIONS(342),
    [anon_sym_type] = ACTIONS(342),
    [anon_sym_and] = ACTIONS(342),
    [anon_sym_let] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [anon_sym_constraint] = ACTIONS(799),
    [anon_sym_end] = ACTIONS(342),
    [sym_comment] = ACTIONS(26),
  },
  [330] = {
    [aux_sym_type_definition_repeat1] = STATE(330),
    [anon_sym_SEMI_SEMI] = ACTIONS(347),
    [anon_sym_module] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(802),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_end] = ACTIONS(347),
    [sym_comment] = ACTIONS(26),
  },
  [331] = {
    [sym_record_declaration] = STATE(383),
    [sym__type] = STATE(323),
    [sym_parenthesized_type] = STATE(324),
    [sym_function_type] = STATE(324),
    [sym_type_variable] = STATE(324),
    [sym_constructed_type] = STATE(324),
    [sym_qualified_type_identifier] = STATE(324),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(711),
    [sym_comment] = ACTIONS(26),
  },
  [332] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(385),
    [anon_sym_SEMI_SEMI] = ACTIONS(352),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_type] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(805),
    [anon_sym_and] = ACTIONS(352),
    [anon_sym_let] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(26),
  },
  [333] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(352),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_type] = ACTIONS(352),
    [anon_sym_and] = ACTIONS(352),
    [anon_sym_let] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(26),
  },
  [334] = {
    [aux_sym_value_definition_repeat1] = STATE(336),
    [anon_sym_SEMI_SEMI] = ACTIONS(364),
    [anon_sym_module] = ACTIONS(364),
    [anon_sym_type] = ACTIONS(364),
    [anon_sym_and] = ACTIONS(613),
    [anon_sym_let] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_end] = ACTIONS(364),
    [sym_comment] = ACTIONS(26),
  },
  [335] = {
    [sym__expression] = STATE(173),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(721),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [336] = {
    [aux_sym_value_definition_repeat1] = STATE(336),
    [anon_sym_SEMI_SEMI] = ACTIONS(395),
    [anon_sym_module] = ACTIONS(395),
    [anon_sym_type] = ACTIONS(395),
    [anon_sym_and] = ACTIONS(807),
    [anon_sym_let] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_end] = ACTIONS(395),
    [sym_comment] = ACTIONS(26),
  },
  [337] = {
    [sym_let_binding] = STATE(386),
    [sym__pattern] = STATE(176),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(402),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [338] = {
    [sym__module] = STATE(256),
    [sym_functor_module] = STATE(79),
    [sym_functor_application_module] = STATE(79),
    [sym_struct_module] = STATE(79),
    [sym_qualified_identifier] = STATE(77),
    [anon_sym_functor] = ACTIONS(490),
    [anon_sym_struct] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(26),
  },
  [339] = {
    [sym__module_type] = STATE(387),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(492),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [340] = {
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym_comment] = ACTIONS(26),
  },
  [341] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_SEMI] = ACTIONS(810),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_DASH_GT] = ACTIONS(737),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [342] = {
    [sym__type] = STATE(388),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(26),
  },
  [343] = {
    [ts_builtin_sym_end] = ACTIONS(812),
    [anon_sym_SEMI_SEMI] = ACTIONS(812),
    [anon_sym_val] = ACTIONS(812),
    [anon_sym_module] = ACTIONS(812),
    [anon_sym_type] = ACTIONS(812),
    [anon_sym_open] = ACTIONS(812),
    [anon_sym_include] = ACTIONS(812),
    [anon_sym_and] = ACTIONS(812),
    [anon_sym_let] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(812),
    [anon_sym_constraint] = ACTIONS(812),
    [anon_sym_end] = ACTIONS(812),
    [sym_comment] = ACTIONS(26),
  },
  [344] = {
    [sym_field_declaration] = STATE(279),
    [anon_sym_mutable] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(26),
  },
  [345] = {
    [sym_qualified_type_identifier] = STATE(162),
    [sym_qualified_identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_val] = ACTIONS(555),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_open] = ACTIONS(555),
    [anon_sym_include] = ACTIONS(555),
    [anon_sym_and] = ACTIONS(555),
    [anon_sym_let] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_constraint] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(653),
    [sym_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(26),
  },
  [346] = {
    [ts_builtin_sym_end] = ACTIONS(814),
    [anon_sym_SEMI_SEMI] = ACTIONS(814),
    [anon_sym_val] = ACTIONS(814),
    [anon_sym_module] = ACTIONS(814),
    [anon_sym_type] = ACTIONS(814),
    [anon_sym_open] = ACTIONS(814),
    [anon_sym_include] = ACTIONS(814),
    [anon_sym_and] = ACTIONS(814),
    [anon_sym_let] = ACTIONS(814),
    [anon_sym_LBRACK] = ACTIONS(814),
    [anon_sym_end] = ACTIONS(814),
    [anon_sym_in] = ACTIONS(816),
    [sym_comment] = ACTIONS(26),
  },
  [347] = {
    [aux_sym_value_definition_repeat1] = STATE(390),
    [anon_sym_and] = ACTIONS(529),
    [anon_sym_in] = ACTIONS(818),
    [sym_comment] = ACTIONS(26),
  },
  [348] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(820),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [349] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(428),
    [anon_sym_val] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_type] = ACTIONS(430),
    [anon_sym_open] = ACTIONS(430),
    [anon_sym_include] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_end] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(428),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(26),
  },
  [350] = {
    [sym_identifier] = ACTIONS(822),
    [sym_comment] = ACTIONS(26),
  },
  [351] = {
    [sym__type] = STATE(393),
    [sym_parenthesized_type] = STATE(294),
    [sym_function_type] = STATE(294),
    [sym_type_variable] = STATE(294),
    [sym_constructed_type] = STATE(294),
    [sym_qualified_type_identifier] = STATE(294),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_LPAREN] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(675),
    [sym_identifier] = ACTIONS(677),
    [sym_comment] = ACTIONS(26),
  },
  [352] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(436),
    [anon_sym_val] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(438),
    [anon_sym_type] = ACTIONS(438),
    [anon_sym_open] = ACTIONS(438),
    [anon_sym_include] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_end] = ACTIONS(438),
    [anon_sym_DASH_GT] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(759),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(26),
  },
  [353] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(442),
    [anon_sym_val] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_type] = ACTIONS(444),
    [anon_sym_open] = ACTIONS(444),
    [anon_sym_include] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_end] = ACTIONS(444),
    [anon_sym_DASH_GT] = ACTIONS(442),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
  },
  [354] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(448),
    [anon_sym_val] = ACTIONS(448),
    [anon_sym_module] = ACTIONS(448),
    [anon_sym_type] = ACTIONS(448),
    [anon_sym_open] = ACTIONS(448),
    [anon_sym_include] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_end] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(765),
    [sym_comment] = ACTIONS(26),
  },
  [355] = {
    [anon_sym_DASH_GT] = ACTIONS(824),
    [sym_comment] = ACTIONS(26),
  },
  [356] = {
    [sym__module_type] = STATE(395),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
    [sym_comment] = ACTIONS(26),
  },
  [357] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(494),
    [anon_sym_val] = ACTIONS(494),
    [anon_sym_module] = ACTIONS(494),
    [anon_sym_type] = ACTIONS(494),
    [anon_sym_open] = ACTIONS(494),
    [anon_sym_include] = ACTIONS(494),
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_end] = ACTIONS(494),
    [anon_sym_DASH_GT] = ACTIONS(765),
    [sym_comment] = ACTIONS(26),
  },
  [358] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(826),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [359] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(428),
    [anon_sym_val] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_type] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_open] = ACTIONS(430),
    [anon_sym_include] = ACTIONS(430),
    [anon_sym_and] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_constraint] = ACTIONS(430),
    [anon_sym_end] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(428),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(26),
  },
  [360] = {
    [sym_identifier] = ACTIONS(828),
    [sym_comment] = ACTIONS(26),
  },
  [361] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(510),
    [anon_sym_val] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_type] = ACTIONS(510),
    [anon_sym_open] = ACTIONS(510),
    [anon_sym_include] = ACTIONS(510),
    [anon_sym_and] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [362] = {
    [sym__type] = STATE(398),
    [sym_parenthesized_type] = STATE(306),
    [sym_function_type] = STATE(306),
    [sym_type_variable] = STATE(306),
    [sym_constructed_type] = STATE(306),
    [sym_qualified_type_identifier] = STATE(306),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(687),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [sym_identifier] = ACTIONS(691),
    [sym_comment] = ACTIONS(26),
  },
  [363] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(436),
    [anon_sym_val] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(438),
    [anon_sym_type] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(436),
    [anon_sym_open] = ACTIONS(438),
    [anon_sym_include] = ACTIONS(438),
    [anon_sym_and] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_constraint] = ACTIONS(438),
    [anon_sym_end] = ACTIONS(438),
    [anon_sym_DASH_GT] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(769),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(26),
  },
  [364] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(442),
    [anon_sym_val] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_type] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_open] = ACTIONS(444),
    [anon_sym_include] = ACTIONS(444),
    [anon_sym_and] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_constraint] = ACTIONS(444),
    [anon_sym_end] = ACTIONS(444),
    [anon_sym_DASH_GT] = ACTIONS(442),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
  },
  [365] = {
    [sym__type] = STATE(399),
    [sym_parenthesized_type] = STATE(306),
    [sym_function_type] = STATE(306),
    [sym_type_variable] = STATE(306),
    [sym_constructed_type] = STATE(306),
    [sym_qualified_type_identifier] = STATE(306),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(687),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [sym_identifier] = ACTIONS(691),
    [sym_comment] = ACTIONS(26),
  },
  [366] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(400),
    [anon_sym_SEMI_SEMI] = ACTIONS(510),
    [anon_sym_val] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_type] = ACTIONS(510),
    [anon_sym_open] = ACTIONS(510),
    [anon_sym_include] = ACTIONS(510),
    [anon_sym_and] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [367] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(401),
    [anon_sym_SEMI_SEMI] = ACTIONS(512),
    [anon_sym_val] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_type] = ACTIONS(512),
    [anon_sym_open] = ACTIONS(512),
    [anon_sym_include] = ACTIONS(512),
    [anon_sym_and] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
  },
  [368] = {
    [sym_record_declaration] = STATE(402),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(26),
  },
  [369] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(512),
    [anon_sym_val] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_type] = ACTIONS(512),
    [anon_sym_open] = ACTIONS(512),
    [anon_sym_include] = ACTIONS(512),
    [anon_sym_and] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
  },
  [370] = {
    [anon_sym_DASH_GT] = ACTIONS(830),
    [sym_comment] = ACTIONS(26),
  },
  [371] = {
    [sym__module] = STATE(201),
    [sym_functor_module] = STATE(79),
    [sym_functor_application_module] = STATE(79),
    [sym_struct_module] = STATE(79),
    [sym_qualified_identifier] = STATE(77),
    [anon_sym_functor] = ACTIONS(705),
    [anon_sym_struct] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(26),
  },
  [372] = {
    [sym__module_type] = STATE(404),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(703),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [373] = {
    [anon_sym_DASH_GT] = ACTIONS(832),
    [sym_comment] = ACTIONS(26),
  },
  [374] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(834),
    [anon_sym_DASH_GT] = ACTIONS(426),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [375] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(428),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_type] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_and] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_constraint] = ACTIONS(430),
    [anon_sym_end] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(428),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(26),
  },
  [376] = {
    [sym_identifier] = ACTIONS(836),
    [sym_comment] = ACTIONS(26),
  },
  [377] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_type] = ACTIONS(510),
    [anon_sym_and] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [378] = {
    [sym__type] = STATE(408),
    [sym_parenthesized_type] = STATE(324),
    [sym_function_type] = STATE(324),
    [sym_type_variable] = STATE(324),
    [sym_constructed_type] = STATE(324),
    [sym_qualified_type_identifier] = STATE(324),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_identifier] = ACTIONS(711),
    [sym_comment] = ACTIONS(26),
  },
  [379] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(436),
    [anon_sym_module] = ACTIONS(438),
    [anon_sym_type] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(436),
    [anon_sym_and] = ACTIONS(438),
    [anon_sym_let] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_constraint] = ACTIONS(438),
    [anon_sym_end] = ACTIONS(438),
    [anon_sym_DASH_GT] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(791),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(26),
  },
  [380] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(442),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_type] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_and] = ACTIONS(444),
    [anon_sym_let] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_constraint] = ACTIONS(444),
    [anon_sym_end] = ACTIONS(444),
    [anon_sym_DASH_GT] = ACTIONS(442),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
  },
  [381] = {
    [sym__type] = STATE(409),
    [sym_parenthesized_type] = STATE(324),
    [sym_function_type] = STATE(324),
    [sym_type_variable] = STATE(324),
    [sym_constructed_type] = STATE(324),
    [sym_qualified_type_identifier] = STATE(324),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_identifier] = ACTIONS(711),
    [sym_comment] = ACTIONS(26),
  },
  [382] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(410),
    [anon_sym_SEMI_SEMI] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_type] = ACTIONS(510),
    [anon_sym_and] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [383] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(411),
    [anon_sym_SEMI_SEMI] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_type] = ACTIONS(512),
    [anon_sym_and] = ACTIONS(512),
    [anon_sym_let] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
  },
  [384] = {
    [sym_record_declaration] = STATE(412),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(26),
  },
  [385] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_type] = ACTIONS(512),
    [anon_sym_and] = ACTIONS(512),
    [anon_sym_let] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
  },
  [386] = {
    [aux_sym_value_definition_repeat1] = STATE(414),
    [anon_sym_and] = ACTIONS(529),
    [anon_sym_in] = ACTIONS(838),
    [sym_comment] = ACTIONS(26),
  },
  [387] = {
    [anon_sym_RPAREN] = ACTIONS(699),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym_comment] = ACTIONS(26),
  },
  [388] = {
    [sym_qualified_type_identifier] = STATE(184),
    [sym_qualified_identifier] = STATE(123),
    [anon_sym_SEMI] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_DASH_GT] = ACTIONS(737),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [389] = {
    [sym__expression] = STATE(285),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(671),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [390] = {
    [aux_sym_value_definition_repeat1] = STATE(287),
    [anon_sym_and] = ACTIONS(529),
    [anon_sym_in] = ACTIONS(840),
    [sym_comment] = ACTIONS(26),
  },
  [391] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(541),
    [anon_sym_val] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_type] = ACTIONS(543),
    [anon_sym_open] = ACTIONS(543),
    [anon_sym_include] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_end] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(541),
    [sym_identifier] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
  },
  [392] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(547),
    [anon_sym_val] = ACTIONS(549),
    [anon_sym_module] = ACTIONS(549),
    [anon_sym_type] = ACTIONS(549),
    [anon_sym_open] = ACTIONS(549),
    [anon_sym_include] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_DASH_GT] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(356),
    [sym_identifier] = ACTIONS(551),
    [sym_comment] = ACTIONS(26),
  },
  [393] = {
    [sym_qualified_type_identifier] = STATE(353),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_val] = ACTIONS(555),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_open] = ACTIONS(555),
    [anon_sym_include] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_end] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_identifier] = ACTIONS(763),
    [sym_comment] = ACTIONS(26),
  },
  [394] = {
    [sym__module_type] = STATE(416),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(295),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(681),
    [sym_identifier] = ACTIONS(683),
    [sym_comment] = ACTIONS(26),
  },
  [395] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(597),
    [anon_sym_val] = ACTIONS(597),
    [anon_sym_module] = ACTIONS(597),
    [anon_sym_type] = ACTIONS(597),
    [anon_sym_open] = ACTIONS(597),
    [anon_sym_include] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_end] = ACTIONS(597),
    [anon_sym_DASH_GT] = ACTIONS(765),
    [sym_comment] = ACTIONS(26),
  },
  [396] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(541),
    [anon_sym_val] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_type] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_open] = ACTIONS(543),
    [anon_sym_include] = ACTIONS(543),
    [anon_sym_and] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_constraint] = ACTIONS(543),
    [anon_sym_end] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(541),
    [sym_identifier] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
  },
  [397] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(547),
    [anon_sym_val] = ACTIONS(549),
    [anon_sym_module] = ACTIONS(549),
    [anon_sym_type] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(547),
    [anon_sym_open] = ACTIONS(549),
    [anon_sym_include] = ACTIONS(549),
    [anon_sym_and] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_constraint] = ACTIONS(549),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_DASH_GT] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(356),
    [sym_identifier] = ACTIONS(551),
    [sym_comment] = ACTIONS(26),
  },
  [398] = {
    [sym_qualified_type_identifier] = STATE(364),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_val] = ACTIONS(555),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_EQ] = ACTIONS(553),
    [anon_sym_open] = ACTIONS(555),
    [anon_sym_include] = ACTIONS(555),
    [anon_sym_and] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_constraint] = ACTIONS(555),
    [anon_sym_end] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym_identifier] = ACTIONS(773),
    [sym_comment] = ACTIONS(26),
  },
  [399] = {
    [sym_qualified_type_identifier] = STATE(364),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_SEMI_SEMI] = ACTIONS(649),
    [anon_sym_val] = ACTIONS(651),
    [anon_sym_module] = ACTIONS(651),
    [anon_sym_type] = ACTIONS(651),
    [anon_sym_open] = ACTIONS(651),
    [anon_sym_include] = ACTIONS(651),
    [anon_sym_and] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_constraint] = ACTIONS(651),
    [anon_sym_end] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(842),
    [sym_identifier] = ACTIONS(773),
    [sym_comment] = ACTIONS(26),
  },
  [400] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(655),
    [anon_sym_val] = ACTIONS(655),
    [anon_sym_module] = ACTIONS(655),
    [anon_sym_type] = ACTIONS(655),
    [anon_sym_open] = ACTIONS(655),
    [anon_sym_include] = ACTIONS(655),
    [anon_sym_and] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(655),
    [sym_comment] = ACTIONS(26),
  },
  [401] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_val] = ACTIONS(657),
    [anon_sym_module] = ACTIONS(657),
    [anon_sym_type] = ACTIONS(657),
    [anon_sym_open] = ACTIONS(657),
    [anon_sym_include] = ACTIONS(657),
    [anon_sym_and] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(657),
    [sym_comment] = ACTIONS(26),
  },
  [402] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(418),
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_val] = ACTIONS(657),
    [anon_sym_module] = ACTIONS(657),
    [anon_sym_type] = ACTIONS(657),
    [anon_sym_open] = ACTIONS(657),
    [anon_sym_include] = ACTIONS(657),
    [anon_sym_and] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(657),
    [sym_comment] = ACTIONS(26),
  },
  [403] = {
    [sym__module_type] = STATE(419),
    [sym_signature] = STATE(74),
    [sym_functor_module_type] = STATE(74),
    [sym_shorthand_functor_module_type] = STATE(74),
    [sym_qualified_type_identifier] = STATE(74),
    [sym_qualified_identifier] = STATE(68),
    [anon_sym_sig] = ACTIONS(151),
    [anon_sym_functor] = ACTIONS(703),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(26),
  },
  [404] = {
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_DASH_GT] = ACTIONS(787),
    [sym_comment] = ACTIONS(26),
  },
  [405] = {
    [sym__module] = STATE(256),
    [sym_functor_module] = STATE(79),
    [sym_functor_application_module] = STATE(79),
    [sym_struct_module] = STATE(79),
    [sym_qualified_identifier] = STATE(77),
    [anon_sym_functor] = ACTIONS(705),
    [anon_sym_struct] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(26),
  },
  [406] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(541),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_type] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_and] = ACTIONS(543),
    [anon_sym_let] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_constraint] = ACTIONS(543),
    [anon_sym_end] = ACTIONS(543),
    [anon_sym_DASH_GT] = ACTIONS(541),
    [sym_identifier] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
  },
  [407] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(547),
    [anon_sym_module] = ACTIONS(549),
    [anon_sym_type] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(547),
    [anon_sym_and] = ACTIONS(549),
    [anon_sym_let] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_constraint] = ACTIONS(549),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_DASH_GT] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(356),
    [sym_identifier] = ACTIONS(551),
    [sym_comment] = ACTIONS(26),
  },
  [408] = {
    [sym_qualified_type_identifier] = STATE(380),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_EQ] = ACTIONS(553),
    [anon_sym_and] = ACTIONS(555),
    [anon_sym_let] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_constraint] = ACTIONS(555),
    [anon_sym_end] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(793),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(26),
  },
  [409] = {
    [sym_qualified_type_identifier] = STATE(380),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(649),
    [anon_sym_module] = ACTIONS(651),
    [anon_sym_type] = ACTIONS(651),
    [anon_sym_and] = ACTIONS(651),
    [anon_sym_let] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_constraint] = ACTIONS(651),
    [anon_sym_end] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(844),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(26),
  },
  [410] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(655),
    [anon_sym_module] = ACTIONS(655),
    [anon_sym_type] = ACTIONS(655),
    [anon_sym_and] = ACTIONS(655),
    [anon_sym_let] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(655),
    [sym_comment] = ACTIONS(26),
  },
  [411] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_module] = ACTIONS(657),
    [anon_sym_type] = ACTIONS(657),
    [anon_sym_and] = ACTIONS(657),
    [anon_sym_let] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(657),
    [sym_comment] = ACTIONS(26),
  },
  [412] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(421),
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_module] = ACTIONS(657),
    [anon_sym_type] = ACTIONS(657),
    [anon_sym_and] = ACTIONS(657),
    [anon_sym_let] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(657),
    [sym_comment] = ACTIONS(26),
  },
  [413] = {
    [sym__expression] = STATE(285),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(721),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [414] = {
    [aux_sym_value_definition_repeat1] = STATE(287),
    [anon_sym_and] = ACTIONS(529),
    [anon_sym_in] = ACTIONS(846),
    [sym_comment] = ACTIONS(26),
  },
  [415] = {
    [sym__expression] = STATE(346),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(671),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [416] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(699),
    [anon_sym_val] = ACTIONS(699),
    [anon_sym_module] = ACTIONS(699),
    [anon_sym_type] = ACTIONS(699),
    [anon_sym_open] = ACTIONS(699),
    [anon_sym_include] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(699),
    [anon_sym_end] = ACTIONS(699),
    [anon_sym_DASH_GT] = ACTIONS(765),
    [sym_comment] = ACTIONS(26),
  },
  [417] = {
    [sym__type] = STATE(423),
    [sym_parenthesized_type] = STATE(306),
    [sym_function_type] = STATE(306),
    [sym_type_variable] = STATE(306),
    [sym_constructed_type] = STATE(306),
    [sym_qualified_type_identifier] = STATE(306),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(687),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [sym_identifier] = ACTIONS(691),
    [sym_comment] = ACTIONS(26),
  },
  [418] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(748),
    [anon_sym_val] = ACTIONS(748),
    [anon_sym_module] = ACTIONS(748),
    [anon_sym_type] = ACTIONS(748),
    [anon_sym_open] = ACTIONS(748),
    [anon_sym_include] = ACTIONS(748),
    [anon_sym_and] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_constraint] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(748),
    [sym_comment] = ACTIONS(26),
  },
  [419] = {
    [anon_sym_EQ] = ACTIONS(699),
    [anon_sym_DASH_GT] = ACTIONS(787),
    [sym_comment] = ACTIONS(26),
  },
  [420] = {
    [sym__type] = STATE(424),
    [sym_parenthesized_type] = STATE(324),
    [sym_function_type] = STATE(324),
    [sym_type_variable] = STATE(324),
    [sym_constructed_type] = STATE(324),
    [sym_qualified_type_identifier] = STATE(324),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_identifier] = ACTIONS(711),
    [sym_comment] = ACTIONS(26),
  },
  [421] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(748),
    [anon_sym_module] = ACTIONS(748),
    [anon_sym_type] = ACTIONS(748),
    [anon_sym_and] = ACTIONS(748),
    [anon_sym_let] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_constraint] = ACTIONS(605),
    [anon_sym_end] = ACTIONS(748),
    [sym_comment] = ACTIONS(26),
  },
  [422] = {
    [sym__expression] = STATE(346),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(721),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_comment] = ACTIONS(26),
  },
  [423] = {
    [sym_qualified_type_identifier] = STATE(364),
    [sym_qualified_identifier] = STATE(307),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_val] = ACTIONS(555),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_open] = ACTIONS(555),
    [anon_sym_include] = ACTIONS(555),
    [anon_sym_and] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_constraint] = ACTIONS(555),
    [anon_sym_end] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(842),
    [sym_identifier] = ACTIONS(773),
    [sym_comment] = ACTIONS(26),
  },
  [424] = {
    [sym_qualified_type_identifier] = STATE(380),
    [sym_qualified_identifier] = STATE(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_and] = ACTIONS(555),
    [anon_sym_let] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_constraint] = ACTIONS(555),
    [anon_sym_end] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(844),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(26),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 1, .alias_sequence_id = 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_definition, 2),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameters, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_open_directive, 2),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_directive, 2),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 2),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [120] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(2),
  [123] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(3),
  [126] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(4),
  [129] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(5),
  [132] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(6),
  [135] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(7),
  [138] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(8),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_type_specification, 3, .alias_sequence_id = 2),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_specification_repeat1, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_specification_repeat1, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2, .alias_sequence_id = 3),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_parameters_repeat1, 2, .alias_sequence_id = 3),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 2, .alias_sequence_id = 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 1),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_definition, 3),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 2, .alias_sequence_id = 3),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [199] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [202] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 3),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 2),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 2),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 1),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1, .alias_sequence_id = 1),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1, .alias_sequence_id = 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1, .alias_sequence_id = 1),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_specification, 4),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_value_specification, 4),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__module_type, 1, .alias_sequence_id = 1),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_specification, 4),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__module_type, 1),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__module, 1),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__module, 1),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_definition, 4),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_specification_repeat1, 2),
  [311] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_specification_repeat1, 2), SHIFT_REPEAT(37),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 3, .alias_sequence_id = 2),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_parameters_repeat1, 3, .alias_sequence_id = 2),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 3, .alias_sequence_id = 1),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_equation, 2),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_equation, 2),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2),
  [344] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(43),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [349] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(47),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 3, .alias_sequence_id = 3),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_identifier, 3),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_identifier, 3),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 4),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 3),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 3),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shorthand_labeled_parameter, 2),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shorthand_labeled_parameter, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2),
  [380] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(23),
  [383] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(56),
  [386] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(25),
  [389] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(27),
  [392] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(27),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_value_definition_repeat1, 2),
  [399] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(59),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_binding, 3),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_binding, 3),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .alias_sequence_id = 3),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_variable, 2, .alias_sequence_id = 3),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .alias_sequence_id = 3),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2, .alias_sequence_id = 3),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructed_type, 2, .alias_sequence_id = 3),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2, .alias_sequence_id = 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructed_type, 2),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_type_specification, 5, .alias_sequence_id = 2),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_signature, 2),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 1),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(209),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_module, 2),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_module, 2),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 1),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_specification, 5),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 2),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 4, .alias_sequence_id = 1),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 4, .alias_sequence_id = 3),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_pattern_repeat1, 2),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 4),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 4),
  [522] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_pattern_repeat1, 2), SHIFT_REPEAT(105),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_binding, 4),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_binding, 4),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 5),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_type, 3),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_type, 3),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_type, 3),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_identifier, 3, .alias_sequence_id = 2),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_identifier, 3, .alias_sequence_id = 2),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_identifier, 3, .alias_sequence_id = 2),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3, .fragile = true),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3, .fragile = true),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_signature, 3),
  [577] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(132),
  [580] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(133),
  [583] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(134),
  [586] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(5),
  [589] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(6),
  [592] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(8),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_definition, 6),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shorthand_functor_module_type, 3, .fragile = true),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_module, 3),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_module, 3),
  [623] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(142),
  [626] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(143),
  [629] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(144),
  [632] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(8),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 3),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constraint, 4, .alias_sequence_id = 3),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_constraint, 4, .alias_sequence_id = 3),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 5, .alias_sequence_id = 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 5, .alias_sequence_id = 3),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_pattern, 5),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_pattern, 5),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_parameter, 4),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_parameter, 4),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(298),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_module_type, 4, .fragile = true),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_module, 4),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_application_module, 4),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_functor_application_module, 4),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_parameter, 5),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_parameter, 5),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 4),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_declaration_repeat1, 2),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [745] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_declaration_repeat1, 2), SHIFT_REPEAT(344),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 6, .alias_sequence_id = 3),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_expression, 4),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_expression, 4),
  [754] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(234),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(352),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(363),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
  [777] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(249),
  [780] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(252),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(379),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [799] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(260),
  [802] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(263),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [807] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(268),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 5),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_expression, 5),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_expression, 5),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ocaml() {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
