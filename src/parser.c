#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 401
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1

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
  sym_val_specification = 39,
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
  sym__type_identifier = 79,
  aux_sym_compilation_unit_repeat1 = 80,
  aux_sym_module_specification_repeat1 = 81,
  aux_sym_type_definition_repeat1 = 82,
  aux_sym_value_definition_repeat1 = 83,
  aux_sym_let_binding_repeat1 = 84,
  aux_sym_type_constructor_definition_repeat1 = 85,
  aux_sym_type_parameters_repeat1 = 86,
  aux_sym_record_declaration_repeat1 = 87,
  aux_sym_signature_repeat1 = 88,
  aux_sym_struct_module_repeat1 = 89,
  aux_sym_record_pattern_repeat1 = 90,
  alias_sym_type_identifier = 91,
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
  [sym_val_specification] = "val_specification",
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
  [sym__type_identifier] = "_type_identifier",
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
  [sym_val_specification] = {
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
  [sym__type_identifier] = {
    .visible = false,
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

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_type_identifier,
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == '-')
        ADVANCE(97);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(147);
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
        ADVANCE(148);
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
        SKIP(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 147:
      if (lookahead == ';')
        ADVANCE(17);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 149:
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
        SKIP(149);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 150:
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
        SKIP(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 151:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 153:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(154);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 155:
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
        SKIP(155);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 156:
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
        ADVANCE(147);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'l')
        ADVANCE(55);
      if (lookahead == 'm')
        ADVANCE(148);
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
        SKIP(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 157:
      if (lookahead == '(')
        ADVANCE(144);
      if (lookahead == ';')
        ADVANCE(142);
      if (lookahead == 'm')
        ADVANCE(158);
      if (lookahead == '}')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
        ADVANCE(147);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'm')
        ADVANCE(148);
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
        ADVANCE(147);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(48);
      if (lookahead == 'm')
        ADVANCE(148);
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
        ADVANCE(147);
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
        ADVANCE(148);
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
  [17] = {.lex_state = 146},
  [18] = {.lex_state = 96},
  [19] = {.lex_state = 141},
  [20] = {.lex_state = 96},
  [21] = {.lex_state = 141},
  [22] = {.lex_state = 96},
  [23] = {.lex_state = 96},
  [24] = {.lex_state = 149},
  [25] = {.lex_state = 149},
  [26] = {.lex_state = 149},
  [27] = {.lex_state = 149},
  [28] = {.lex_state = 150},
  [29] = {.lex_state = 96},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 141},
  [32] = {.lex_state = 96},
  [33] = {.lex_state = 96},
  [34] = {.lex_state = 141},
  [35] = {.lex_state = 96},
  [36] = {.lex_state = 151},
  [37] = {.lex_state = 153},
  [38] = {.lex_state = 141},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 141},
  [42] = {.lex_state = 141},
  [43] = {.lex_state = 141},
  [44] = {.lex_state = 141},
  [45] = {.lex_state = 96},
  [46] = {.lex_state = 96},
  [47] = {.lex_state = 141},
  [48] = {.lex_state = 141},
  [49] = {.lex_state = 96},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 96},
  [52] = {.lex_state = 141},
  [53] = {.lex_state = 141},
  [54] = {.lex_state = 96},
  [55] = {.lex_state = 96},
  [56] = {.lex_state = 150},
  [57] = {.lex_state = 96},
  [58] = {.lex_state = 141},
  [59] = {.lex_state = 149},
  [60] = {.lex_state = 149},
  [61] = {.lex_state = 149},
  [62] = {.lex_state = 96},
  [63] = {.lex_state = 155},
  [64] = {.lex_state = 141},
  [65] = {.lex_state = 141},
  [66] = {.lex_state = 141},
  [67] = {.lex_state = 156},
  [68] = {.lex_state = 156},
  [69] = {.lex_state = 156},
  [70] = {.lex_state = 96},
  [71] = {.lex_state = 151},
  [72] = {.lex_state = 96},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 96},
  [75] = {.lex_state = 96},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 96},
  [78] = {.lex_state = 96},
  [79] = {.lex_state = 96},
  [80] = {.lex_state = 96},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 151},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 141},
  [85] = {.lex_state = 96},
  [86] = {.lex_state = 96},
  [87] = {.lex_state = 141},
  [88] = {.lex_state = 96},
  [89] = {.lex_state = 96},
  [90] = {.lex_state = 141},
  [91] = {.lex_state = 141},
  [92] = {.lex_state = 157},
  [93] = {.lex_state = 146},
  [94] = {.lex_state = 96},
  [95] = {.lex_state = 146},
  [96] = {.lex_state = 146},
  [97] = {.lex_state = 96},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 96},
  [101] = {.lex_state = 96},
  [102] = {.lex_state = 141},
  [103] = {.lex_state = 150},
  [104] = {.lex_state = 96},
  [105] = {.lex_state = 149},
  [106] = {.lex_state = 150},
  [107] = {.lex_state = 96},
  [108] = {.lex_state = 149},
  [109] = {.lex_state = 155},
  [110] = {.lex_state = 149},
  [111] = {.lex_state = 96},
  [112] = {.lex_state = 96},
  [113] = {.lex_state = 149},
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
  [125] = {.lex_state = 156},
  [126] = {.lex_state = 156},
  [127] = {.lex_state = 141},
  [128] = {.lex_state = 141},
  [129] = {.lex_state = 156},
  [130] = {.lex_state = 96},
  [131] = {.lex_state = 141},
  [132] = {.lex_state = 143},
  [133] = {.lex_state = 141},
  [134] = {.lex_state = 96},
  [135] = {.lex_state = 96},
  [136] = {.lex_state = 96},
  [137] = {.lex_state = 96},
  [138] = {.lex_state = 151},
  [139] = {.lex_state = 96},
  [140] = {.lex_state = 141},
  [141] = {.lex_state = 141},
  [142] = {.lex_state = 145},
  [143] = {.lex_state = 96},
  [144] = {.lex_state = 96},
  [145] = {.lex_state = 96},
  [146] = {.lex_state = 153},
  [147] = {.lex_state = 151},
  [148] = {.lex_state = 96},
  [149] = {.lex_state = 96},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 96},
  [152] = {.lex_state = 141},
  [153] = {.lex_state = 146},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 96},
  [156] = {.lex_state = 141},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 96},
  [159] = {.lex_state = 141},
  [160] = {.lex_state = 141},
  [161] = {.lex_state = 146},
  [162] = {.lex_state = 141},
  [163] = {.lex_state = 141},
  [164] = {.lex_state = 96},
  [165] = {.lex_state = 150},
  [166] = {.lex_state = 96},
  [167] = {.lex_state = 149},
  [168] = {.lex_state = 96},
  [169] = {.lex_state = 149},
  [170] = {.lex_state = 96},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 141},
  [173] = {.lex_state = 141},
  [174] = {.lex_state = 141},
  [175] = {.lex_state = 141},
  [176] = {.lex_state = 96},
  [177] = {.lex_state = 141},
  [178] = {.lex_state = 141},
  [179] = {.lex_state = 156},
  [180] = {.lex_state = 141},
  [181] = {.lex_state = 156},
  [182] = {.lex_state = 156},
  [183] = {.lex_state = 156},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 141},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 96},
  [188] = {.lex_state = 96},
  [189] = {.lex_state = 141},
  [190] = {.lex_state = 96},
  [191] = {.lex_state = 96},
  [192] = {.lex_state = 96},
  [193] = {.lex_state = 96},
  [194] = {.lex_state = 151},
  [195] = {.lex_state = 96},
  [196] = {.lex_state = 153},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 96},
  [199] = {.lex_state = 141},
  [200] = {.lex_state = 96},
  [201] = {.lex_state = 149},
  [202] = {.lex_state = 149},
  [203] = {.lex_state = 96},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 96},
  [206] = {.lex_state = 96},
  [207] = {.lex_state = 96},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 96},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 96},
  [212] = {.lex_state = 96},
  [213] = {.lex_state = 96},
  [214] = {.lex_state = 146},
  [215] = {.lex_state = 96},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 141},
  [218] = {.lex_state = 157},
  [219] = {.lex_state = 96},
  [220] = {.lex_state = 146},
  [221] = {.lex_state = 146},
  [222] = {.lex_state = 146},
  [223] = {.lex_state = 146},
  [224] = {.lex_state = 150},
  [225] = {.lex_state = 149},
  [226] = {.lex_state = 149},
  [227] = {.lex_state = 149},
  [228] = {.lex_state = 155},
  [229] = {.lex_state = 96},
  [230] = {.lex_state = 155},
  [231] = {.lex_state = 141},
  [232] = {.lex_state = 141},
  [233] = {.lex_state = 141},
  [234] = {.lex_state = 141},
  [235] = {.lex_state = 141},
  [236] = {.lex_state = 141},
  [237] = {.lex_state = 96},
  [238] = {.lex_state = 151},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 141},
  [241] = {.lex_state = 96},
  [242] = {.lex_state = 96},
  [243] = {.lex_state = 141},
  [244] = {.lex_state = 141},
  [245] = {.lex_state = 96},
  [246] = {.lex_state = 96},
  [247] = {.lex_state = 96},
  [248] = {.lex_state = 96},
  [249] = {.lex_state = 153},
  [250] = {.lex_state = 141},
  [251] = {.lex_state = 96},
  [252] = {.lex_state = 96},
  [253] = {.lex_state = 141},
  [254] = {.lex_state = 141},
  [255] = {.lex_state = 96},
  [256] = {.lex_state = 96},
  [257] = {.lex_state = 96},
  [258] = {.lex_state = 149},
  [259] = {.lex_state = 149},
  [260] = {.lex_state = 96},
  [261] = {.lex_state = 155},
  [262] = {.lex_state = 96},
  [263] = {.lex_state = 96},
  [264] = {.lex_state = 96},
  [265] = {.lex_state = 96},
  [266] = {.lex_state = 151},
  [267] = {.lex_state = 96},
  [268] = {.lex_state = 141},
  [269] = {.lex_state = 141},
  [270] = {.lex_state = 96},
  [271] = {.lex_state = 96},
  [272] = {.lex_state = 157},
  [273] = {.lex_state = 96},
  [274] = {.lex_state = 141},
  [275] = {.lex_state = 155},
  [276] = {.lex_state = 96},
  [277] = {.lex_state = 155},
  [278] = {.lex_state = 96},
  [279] = {.lex_state = 149},
  [280] = {.lex_state = 141},
  [281] = {.lex_state = 141},
  [282] = {.lex_state = 159},
  [283] = {.lex_state = 159},
  [284] = {.lex_state = 159},
  [285] = {.lex_state = 96},
  [286] = {.lex_state = 151},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 96},
  [289] = {.lex_state = 151},
  [290] = {.lex_state = 96},
  [291] = {.lex_state = 141},
  [292] = {.lex_state = 96},
  [293] = {.lex_state = 96},
  [294] = {.lex_state = 141},
  [295] = {.lex_state = 141},
  [296] = {.lex_state = 160},
  [297] = {.lex_state = 96},
  [298] = {.lex_state = 160},
  [299] = {.lex_state = 160},
  [300] = {.lex_state = 96},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 96},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 96},
  [306] = {.lex_state = 141},
  [307] = {.lex_state = 96},
  [308] = {.lex_state = 96},
  [309] = {.lex_state = 141},
  [310] = {.lex_state = 141},
  [311] = {.lex_state = 161},
  [312] = {.lex_state = 96},
  [313] = {.lex_state = 161},
  [314] = {.lex_state = 161},
  [315] = {.lex_state = 96},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 96},
  [319] = {.lex_state = 96},
  [320] = {.lex_state = 155},
  [321] = {.lex_state = 96},
  [322] = {.lex_state = 149},
  [323] = {.lex_state = 153},
  [324] = {.lex_state = 151},
  [325] = {.lex_state = 96},
  [326] = {.lex_state = 141},
  [327] = {.lex_state = 141},
  [328] = {.lex_state = 96},
  [329] = {.lex_state = 157},
  [330] = {.lex_state = 146},
  [331] = {.lex_state = 96},
  [332] = {.lex_state = 96},
  [333] = {.lex_state = 141},
  [334] = {.lex_state = 159},
  [335] = {.lex_state = 159},
  [336] = {.lex_state = 141},
  [337] = {.lex_state = 141},
  [338] = {.lex_state = 159},
  [339] = {.lex_state = 96},
  [340] = {.lex_state = 96},
  [341] = {.lex_state = 151},
  [342] = {.lex_state = 96},
  [343] = {.lex_state = 96},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 96},
  [346] = {.lex_state = 141},
  [347] = {.lex_state = 160},
  [348] = {.lex_state = 160},
  [349] = {.lex_state = 141},
  [350] = {.lex_state = 141},
  [351] = {.lex_state = 160},
  [352] = {.lex_state = 141},
  [353] = {.lex_state = 96},
  [354] = {.lex_state = 96},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 96},
  [357] = {.lex_state = 141},
  [358] = {.lex_state = 161},
  [359] = {.lex_state = 161},
  [360] = {.lex_state = 141},
  [361] = {.lex_state = 141},
  [362] = {.lex_state = 161},
  [363] = {.lex_state = 141},
  [364] = {.lex_state = 96},
  [365] = {.lex_state = 96},
  [366] = {.lex_state = 141},
  [367] = {.lex_state = 155},
  [368] = {.lex_state = 96},
  [369] = {.lex_state = 159},
  [370] = {.lex_state = 159},
  [371] = {.lex_state = 159},
  [372] = {.lex_state = 159},
  [373] = {.lex_state = 151},
  [374] = {.lex_state = 96},
  [375] = {.lex_state = 96},
  [376] = {.lex_state = 96},
  [377] = {.lex_state = 160},
  [378] = {.lex_state = 160},
  [379] = {.lex_state = 160},
  [380] = {.lex_state = 160},
  [381] = {.lex_state = 160},
  [382] = {.lex_state = 153},
  [383] = {.lex_state = 96},
  [384] = {.lex_state = 96},
  [385] = {.lex_state = 161},
  [386] = {.lex_state = 161},
  [387] = {.lex_state = 161},
  [388] = {.lex_state = 161},
  [389] = {.lex_state = 161},
  [390] = {.lex_state = 155},
  [391] = {.lex_state = 96},
  [392] = {.lex_state = 155},
  [393] = {.lex_state = 96},
  [394] = {.lex_state = 96},
  [395] = {.lex_state = 141},
  [396] = {.lex_state = 96},
  [397] = {.lex_state = 141},
  [398] = {.lex_state = 155},
  [399] = {.lex_state = 160},
  [400] = {.lex_state = 161},
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
    [sym_val_specification] = STATE(10),
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
    [sym__type_identifier] = STATE(20),
    [aux_sym_type_parameters_repeat1] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [5] = {
    [sym_qualified_identifier] = STATE(22),
    [sym_identifier] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [sym_qualified_identifier] = STATE(23),
    [sym_identifier] = ACTIONS(42),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym_let_binding] = STATE(29),
    [sym__pattern] = STATE(30),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
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
    [sym_val_specification] = STATE(10),
    [sym_module_specification] = STATE(10),
    [sym_module_type_specification] = STATE(10),
    [sym_open_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_value_definition] = STATE(10),
    [sym_attribute] = STATE(10),
    [aux_sym_compilation_unit_repeat1] = STATE(33),
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
    [sym__type_identifier] = STATE(35),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [14] = {
    [sym_module_parameter] = STATE(39),
    [aux_sym_module_specification_repeat1] = STATE(40),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [15] = {
    [anon_sym_SQUOTE] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [16] = {
    [sym__type_identifier] = STATE(43),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(26),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [18] = {
    [aux_sym_type_definition_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_SEMI_SEMI] = ACTIONS(84),
    [anon_sym_val] = ACTIONS(84),
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_type] = ACTIONS(84),
    [anon_sym_open] = ACTIONS(84),
    [anon_sym_include] = ACTIONS(84),
    [anon_sym_and] = ACTIONS(86),
    [anon_sym_let] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [sym__type_identifier] = STATE(46),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [20] = {
    [sym_type_equation] = STATE(49),
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_SEMI_SEMI] = ACTIONS(88),
    [anon_sym_val] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_open] = ACTIONS(88),
    [anon_sym_include] = ACTIONS(88),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_let] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [21] = {
    [aux_sym_type_parameters_repeat1] = STATE(52),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(26),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_SEMI_SEMI] = ACTIONS(96),
    [anon_sym_val] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_type] = ACTIONS(96),
    [anon_sym_open] = ACTIONS(96),
    [anon_sym_include] = ACTIONS(96),
    [anon_sym_let] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_end] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(98),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_SEMI_SEMI] = ACTIONS(100),
    [anon_sym_val] = ACTIONS(100),
    [anon_sym_module] = ACTIONS(100),
    [anon_sym_type] = ACTIONS(100),
    [anon_sym_open] = ACTIONS(100),
    [anon_sym_include] = ACTIONS(100),
    [anon_sym_let] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_end] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(98),
    [sym_comment] = ACTIONS(26),
  },
  [24] = {
    [sym__pattern] = STATE(54),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [25] = {
    [sym_let_binding] = STATE(55),
    [sym__pattern] = STATE(30),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(102),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [26] = {
    [sym__pattern] = STATE(57),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [sym_labeled_parameter] = STATE(59),
    [sym_shorthand_labeled_parameter] = STATE(59),
    [sym__pattern] = STATE(59),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [aux_sym_let_binding_repeat1] = STATE(60),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [anon_sym_COLON] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [sym_identifier] = ACTIONS(110),
    [sym_number] = ACTIONS(110),
    [sym_string] = ACTIONS(106),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [aux_sym_value_definition_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_SEMI_SEMI] = ACTIONS(112),
    [anon_sym_val] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_type] = ACTIONS(112),
    [anon_sym_open] = ACTIONS(112),
    [anon_sym_include] = ACTIONS(112),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_let] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_comment] = ACTIONS(26),
  },
  [30] = {
    [anon_sym_EQ] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
  },
  [31] = {
    [sym_qualified_identifier] = STATE(64),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(26),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_val] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_open] = ACTIONS(120),
    [anon_sym_include] = ACTIONS(120),
    [anon_sym_let] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [sym_comment] = ACTIONS(26),
  },
  [33] = {
    [sym_val_specification] = STATE(10),
    [sym_module_specification] = STATE(10),
    [sym_module_type_specification] = STATE(10),
    [sym_open_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_value_definition] = STATE(10),
    [sym_attribute] = STATE(10),
    [aux_sym_compilation_unit_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_val] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(125),
    [anon_sym_type] = ACTIONS(128),
    [anon_sym_open] = ACTIONS(131),
    [anon_sym_include] = ACTIONS(134),
    [anon_sym_let] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(140),
    [sym_comment] = ACTIONS(26),
  },
  [34] = {
    [sym__type] = STATE(68),
    [sym_parenthesized_type] = STATE(69),
    [sym_function_type] = STATE(69),
    [sym_type_variable] = STATE(69),
    [sym_constructed_type] = STATE(69),
    [sym_qualified_type_identifier] = STATE(69),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(26),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_SEMI_SEMI] = ACTIONS(149),
    [anon_sym_val] = ACTIONS(149),
    [anon_sym_module] = ACTIONS(149),
    [anon_sym_type] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_open] = ACTIONS(149),
    [anon_sym_include] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(26),
  },
  [36] = {
    [sym__module_type] = STATE(74),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [37] = {
    [sym__module] = STATE(79),
    [sym_functor_module] = STATE(80),
    [sym_functor_application_module] = STATE(80),
    [sym_struct_module] = STATE(80),
    [sym_qualified_identifier] = STATE(78),
    [anon_sym_functor] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [38] = {
    [sym_identifier] = ACTIONS(165),
    [sym_comment] = ACTIONS(26),
  },
  [39] = {
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(169),
    [sym_comment] = ACTIONS(26),
  },
  [40] = {
    [sym_module_parameter] = STATE(39),
    [aux_sym_module_specification_repeat1] = STATE(83),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [41] = {
    [sym__type_identifier] = STATE(84),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(26),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [sym_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(26),
  },
  [43] = {
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [sym_comment] = ACTIONS(26),
  },
  [44] = {
    [sym_type_constructor_definition] = STATE(85),
    [sym_type_parameters] = STATE(19),
    [sym__type_identifier] = STATE(20),
    [aux_sym_type_parameters_repeat1] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [45] = {
    [aux_sym_type_definition_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_SEMI_SEMI] = ACTIONS(177),
    [anon_sym_val] = ACTIONS(177),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_open] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(86),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym_comment] = ACTIONS(26),
  },
  [46] = {
    [sym_type_equation] = STATE(88),
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_val] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_open] = ACTIONS(179),
    [anon_sym_include] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [47] = {
    [sym_record_declaration] = STATE(94),
    [sym__type] = STATE(95),
    [sym_parenthesized_type] = STATE(96),
    [sym_function_type] = STATE(96),
    [sym_type_variable] = STATE(96),
    [sym_constructed_type] = STATE(96),
    [sym_qualified_type_identifier] = STATE(96),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [48] = {
    [sym__type_identifier] = STATE(98),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [49] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_val] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_open] = ACTIONS(179),
    [anon_sym_include] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [anon_sym_val] = ACTIONS(193),
    [anon_sym_module] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_open] = ACTIONS(193),
    [anon_sym_include] = ACTIONS(193),
    [anon_sym_and] = ACTIONS(193),
    [anon_sym_let] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_constraint] = ACTIONS(193),
    [anon_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(26),
  },
  [51] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_val] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_open] = ACTIONS(179),
    [anon_sym_include] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [52] = {
    [aux_sym_type_parameters_repeat1] = STATE(52),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [sym_identifier] = ACTIONS(175),
    [sym_comment] = ACTIONS(26),
  },
  [53] = {
    [sym_identifier] = ACTIONS(201),
    [sym_comment] = ACTIONS(26),
  },
  [54] = {
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(205),
    [sym_comment] = ACTIONS(26),
  },
  [55] = {
    [aux_sym_value_definition_repeat1] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
    [anon_sym_val] = ACTIONS(207),
    [anon_sym_module] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_open] = ACTIONS(207),
    [anon_sym_include] = ACTIONS(207),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_let] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_comment] = ACTIONS(26),
  },
  [56] = {
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_number] = ACTIONS(211),
    [sym_string] = ACTIONS(209),
    [sym_comment] = ACTIONS(26),
  },
  [57] = {
    [aux_sym_record_pattern_repeat1] = STATE(107),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(215),
    [sym_comment] = ACTIONS(26),
  },
  [58] = {
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(26),
  },
  [59] = {
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
    [sym_string] = ACTIONS(219),
    [sym_comment] = ACTIONS(26),
  },
  [60] = {
    [sym_labeled_parameter] = STATE(59),
    [sym_shorthand_labeled_parameter] = STATE(59),
    [sym__pattern] = STATE(59),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [aux_sym_let_binding_repeat1] = STATE(110),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [61] = {
    [sym_let_binding] = STATE(111),
    [sym__pattern] = STATE(30),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(102),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [62] = {
    [aux_sym_value_definition_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
    [anon_sym_val] = ACTIONS(207),
    [anon_sym_module] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_open] = ACTIONS(207),
    [anon_sym_include] = ACTIONS(207),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_let] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_comment] = ACTIONS(26),
  },
  [63] = {
    [sym__expression] = STATE(116),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [sym__type] = STATE(121),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(237),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [sym__type] = STATE(124),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [66] = {
    [sym__type_identifier] = STATE(126),
    [sym_identifier] = ACTIONS(241),
    [sym_comment] = ACTIONS(26),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(243),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [68] = {
    [sym_qualified_type_identifier] = STATE(129),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_SEMI_SEMI] = ACTIONS(245),
    [anon_sym_val] = ACTIONS(247),
    [anon_sym_module] = ACTIONS(247),
    [anon_sym_type] = ACTIONS(247),
    [anon_sym_open] = ACTIONS(247),
    [anon_sym_include] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_val] = ACTIONS(253),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_open] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_DASH_GT] = ACTIONS(251),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [70] = {
    [anon_sym_DOT] = ACTIONS(243),
    [sym_comment] = ACTIONS(26),
  },
  [71] = {
    [sym__module_type] = STATE(130),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [72] = {
    [sym_val_specification] = STATE(135),
    [sym_module_specification] = STATE(135),
    [sym_module_type_specification] = STATE(135),
    [sym_open_directive] = STATE(135),
    [sym_include_directive] = STATE(135),
    [sym_type_definition] = STATE(135),
    [aux_sym_signature_repeat1] = STATE(136),
    [anon_sym_val] = ACTIONS(257),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(261),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_end] = ACTIONS(263),
    [sym_comment] = ACTIONS(26),
  },
  [73] = {
    [sym_module_parameter] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_val] = ACTIONS(265),
    [anon_sym_module] = ACTIONS(265),
    [anon_sym_type] = ACTIONS(265),
    [anon_sym_open] = ACTIONS(265),
    [anon_sym_include] = ACTIONS(265),
    [anon_sym_let] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_SEMI_SEMI] = ACTIONS(269),
    [anon_sym_val] = ACTIONS(269),
    [anon_sym_module] = ACTIONS(269),
    [anon_sym_type] = ACTIONS(269),
    [anon_sym_open] = ACTIONS(269),
    [anon_sym_include] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_end] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(269),
    [sym_comment] = ACTIONS(26),
  },
  [76] = {
    [sym_module_parameter] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [77] = {
    [sym_module_definition] = STATE(144),
    [sym_type_definition] = STATE(144),
    [sym_value_definition] = STATE(144),
    [sym_attribute] = STATE(144),
    [aux_sym_struct_module_repeat1] = STATE(145),
    [anon_sym_module] = ACTIONS(271),
    [anon_sym_type] = ACTIONS(273),
    [anon_sym_let] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(277),
    [sym_comment] = ACTIONS(26),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_SEMI_SEMI] = ACTIONS(279),
    [anon_sym_val] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_open] = ACTIONS(279),
    [anon_sym_include] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_let] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_end] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(98),
    [sym_comment] = ACTIONS(26),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_SEMI_SEMI] = ACTIONS(283),
    [anon_sym_val] = ACTIONS(283),
    [anon_sym_module] = ACTIONS(283),
    [anon_sym_type] = ACTIONS(283),
    [anon_sym_open] = ACTIONS(283),
    [anon_sym_include] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_let] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_end] = ACTIONS(283),
    [sym_comment] = ACTIONS(26),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_SEMI_SEMI] = ACTIONS(279),
    [anon_sym_val] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_open] = ACTIONS(279),
    [anon_sym_include] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_let] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_end] = ACTIONS(279),
    [sym_comment] = ACTIONS(26),
  },
  [81] = {
    [anon_sym_COLON] = ACTIONS(287),
    [sym_comment] = ACTIONS(26),
  },
  [82] = {
    [sym__module_type] = STATE(148),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [83] = {
    [sym_module_parameter] = STATE(39),
    [aux_sym_module_specification_repeat1] = STATE(83),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [sym_comment] = ACTIONS(26),
  },
  [84] = {
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [sym_identifier] = ACTIONS(296),
    [sym_comment] = ACTIONS(26),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_SEMI_SEMI] = ACTIONS(298),
    [anon_sym_val] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(298),
    [anon_sym_type] = ACTIONS(298),
    [anon_sym_open] = ACTIONS(298),
    [anon_sym_include] = ACTIONS(298),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_let] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_end] = ACTIONS(298),
    [sym_comment] = ACTIONS(26),
  },
  [86] = {
    [aux_sym_type_definition_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_SEMI_SEMI] = ACTIONS(298),
    [anon_sym_val] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(298),
    [anon_sym_type] = ACTIONS(298),
    [anon_sym_open] = ACTIONS(298),
    [anon_sym_include] = ACTIONS(298),
    [anon_sym_and] = ACTIONS(300),
    [anon_sym_let] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [sym_comment] = ACTIONS(26),
  },
  [87] = {
    [sym_record_declaration] = STATE(149),
    [sym__type] = STATE(95),
    [sym_parenthesized_type] = STATE(96),
    [sym_function_type] = STATE(96),
    [sym_type_variable] = STATE(96),
    [sym_constructed_type] = STATE(96),
    [sym_qualified_type_identifier] = STATE(96),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [88] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_val] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_open] = ACTIONS(303),
    [anon_sym_include] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [89] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_val] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_open] = ACTIONS(303),
    [anon_sym_include] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [90] = {
    [sym__type] = STATE(152),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [91] = {
    [sym__type_identifier] = STATE(153),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [92] = {
    [sym_field_declaration] = STATE(158),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_mutable] = ACTIONS(311),
    [sym_identifier] = ACTIONS(313),
    [sym_comment] = ACTIONS(26),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [94] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_val] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_open] = ACTIONS(303),
    [anon_sym_include] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [95] = {
    [sym_qualified_type_identifier] = STATE(161),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_SEMI_SEMI] = ACTIONS(317),
    [anon_sym_val] = ACTIONS(319),
    [anon_sym_module] = ACTIONS(319),
    [anon_sym_type] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_open] = ACTIONS(319),
    [anon_sym_include] = ACTIONS(319),
    [anon_sym_and] = ACTIONS(319),
    [anon_sym_let] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_constraint] = ACTIONS(319),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(323),
    [sym_comment] = ACTIONS(26),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_val] = ACTIONS(253),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_open] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_constraint] = ACTIONS(253),
    [anon_sym_DASH_GT] = ACTIONS(251),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [97] = {
    [anon_sym_DOT] = ACTIONS(315),
    [sym_comment] = ACTIONS(26),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(325),
    [sym_comment] = ACTIONS(26),
  },
  [99] = {
    [sym_record_declaration] = STATE(149),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [100] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_SEMI_SEMI] = ACTIONS(327),
    [anon_sym_val] = ACTIONS(327),
    [anon_sym_module] = ACTIONS(327),
    [anon_sym_type] = ACTIONS(327),
    [anon_sym_open] = ACTIONS(327),
    [anon_sym_include] = ACTIONS(327),
    [anon_sym_and] = ACTIONS(327),
    [anon_sym_let] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_constraint] = ACTIONS(329),
    [sym_comment] = ACTIONS(26),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_SEMI_SEMI] = ACTIONS(332),
    [anon_sym_val] = ACTIONS(332),
    [anon_sym_module] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [anon_sym_open] = ACTIONS(332),
    [anon_sym_include] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_and] = ACTIONS(332),
    [anon_sym_let] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_end] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_in] = ACTIONS(334),
    [sym_comment] = ACTIONS(26),
  },
  [102] = {
    [sym__type] = STATE(163),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [103] = {
    [anon_sym_COLON] = ACTIONS(336),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(336),
    [anon_sym_QMARK] = ACTIONS(336),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_SEMI] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [sym_identifier] = ACTIONS(338),
    [sym_number] = ACTIONS(338),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(26),
  },
  [104] = {
    [aux_sym_value_definition_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_SEMI_SEMI] = ACTIONS(340),
    [anon_sym_val] = ACTIONS(340),
    [anon_sym_module] = ACTIONS(340),
    [anon_sym_type] = ACTIONS(340),
    [anon_sym_open] = ACTIONS(340),
    [anon_sym_include] = ACTIONS(340),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_let] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [sym_comment] = ACTIONS(26),
  },
  [105] = {
    [sym__pattern] = STATE(164),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [106] = {
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym_LPAREN] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_TILDE] = ACTIONS(342),
    [anon_sym_QMARK] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
    [sym_identifier] = ACTIONS(344),
    [sym_number] = ACTIONS(344),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(26),
  },
  [107] = {
    [aux_sym_record_pattern_repeat1] = STATE(166),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(346),
    [sym_comment] = ACTIONS(26),
  },
  [108] = {
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [sym_identifier] = ACTIONS(352),
    [sym_number] = ACTIONS(352),
    [sym_string] = ACTIONS(350),
    [sym_comment] = ACTIONS(26),
  },
  [109] = {
    [sym__expression] = STATE(168),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [110] = {
    [sym_labeled_parameter] = STATE(59),
    [sym_shorthand_labeled_parameter] = STATE(59),
    [sym__pattern] = STATE(59),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [aux_sym_let_binding_repeat1] = STATE(110),
    [anon_sym_EQ] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(359),
    [anon_sym_QMARK] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(362),
    [sym_identifier] = ACTIONS(365),
    [sym_number] = ACTIONS(365),
    [sym_string] = ACTIONS(368),
    [sym_comment] = ACTIONS(26),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_SEMI_SEMI] = ACTIONS(371),
    [anon_sym_val] = ACTIONS(371),
    [anon_sym_module] = ACTIONS(371),
    [anon_sym_type] = ACTIONS(371),
    [anon_sym_open] = ACTIONS(371),
    [anon_sym_include] = ACTIONS(371),
    [anon_sym_and] = ACTIONS(371),
    [anon_sym_let] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_end] = ACTIONS(371),
    [anon_sym_in] = ACTIONS(373),
    [sym_comment] = ACTIONS(26),
  },
  [112] = {
    [aux_sym_value_definition_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_SEMI_SEMI] = ACTIONS(371),
    [anon_sym_val] = ACTIONS(371),
    [anon_sym_module] = ACTIONS(371),
    [anon_sym_type] = ACTIONS(371),
    [anon_sym_open] = ACTIONS(371),
    [anon_sym_include] = ACTIONS(371),
    [anon_sym_and] = ACTIONS(375),
    [anon_sym_let] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [sym_let_binding] = STATE(170),
    [sym__pattern] = STATE(171),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(378),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_SEMI_SEMI] = ACTIONS(380),
    [anon_sym_val] = ACTIONS(380),
    [anon_sym_module] = ACTIONS(380),
    [anon_sym_type] = ACTIONS(380),
    [anon_sym_open] = ACTIONS(380),
    [anon_sym_include] = ACTIONS(380),
    [anon_sym_and] = ACTIONS(380),
    [anon_sym_let] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_end] = ACTIONS(380),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_in] = ACTIONS(382),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_SEMI_SEMI] = ACTIONS(380),
    [anon_sym_val] = ACTIONS(380),
    [anon_sym_module] = ACTIONS(380),
    [anon_sym_type] = ACTIONS(380),
    [anon_sym_open] = ACTIONS(380),
    [anon_sym_include] = ACTIONS(380),
    [anon_sym_and] = ACTIONS(380),
    [anon_sym_let] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_end] = ACTIONS(380),
    [anon_sym_in] = ACTIONS(382),
    [sym_comment] = ACTIONS(26),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_SEMI_SEMI] = ACTIONS(384),
    [anon_sym_val] = ACTIONS(384),
    [anon_sym_module] = ACTIONS(384),
    [anon_sym_type] = ACTIONS(384),
    [anon_sym_open] = ACTIONS(384),
    [anon_sym_include] = ACTIONS(384),
    [anon_sym_and] = ACTIONS(384),
    [anon_sym_let] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_end] = ACTIONS(384),
    [anon_sym_in] = ACTIONS(386),
    [sym_comment] = ACTIONS(26),
  },
  [117] = {
    [sym__type] = STATE(172),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [118] = {
    [sym__type_identifier] = STATE(173),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(26),
  },
  [119] = {
    [sym_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(26),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(390),
    [sym_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(26),
  },
  [121] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RBRACK] = ACTIONS(392),
    [anon_sym_DASH_GT] = ACTIONS(394),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_DASH_GT] = ACTIONS(251),
    [sym_identifier] = ACTIONS(253),
    [sym_comment] = ACTIONS(26),
  },
  [123] = {
    [anon_sym_DOT] = ACTIONS(390),
    [sym_comment] = ACTIONS(26),
  },
  [124] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_SEMI_SEMI] = ACTIONS(400),
    [anon_sym_val] = ACTIONS(402),
    [anon_sym_module] = ACTIONS(402),
    [anon_sym_type] = ACTIONS(402),
    [anon_sym_open] = ACTIONS(402),
    [anon_sym_include] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_DASH_GT] = ACTIONS(400),
    [sym_identifier] = ACTIONS(404),
    [sym_comment] = ACTIONS(26),
  },
  [127] = {
    [sym__type_identifier] = STATE(182),
    [sym_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
  },
  [128] = {
    [sym__type] = STATE(183),
    [sym_parenthesized_type] = STATE(69),
    [sym_function_type] = STATE(69),
    [sym_type_variable] = STATE(69),
    [sym_constructed_type] = STATE(69),
    [sym_qualified_type_identifier] = STATE(69),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(26),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_SEMI_SEMI] = ACTIONS(408),
    [anon_sym_val] = ACTIONS(410),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_type] = ACTIONS(410),
    [anon_sym_open] = ACTIONS(410),
    [anon_sym_include] = ACTIONS(410),
    [anon_sym_let] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_DASH_GT] = ACTIONS(408),
    [sym_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(26),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [anon_sym_SEMI_SEMI] = ACTIONS(414),
    [anon_sym_val] = ACTIONS(414),
    [anon_sym_module] = ACTIONS(414),
    [anon_sym_type] = ACTIONS(414),
    [anon_sym_open] = ACTIONS(414),
    [anon_sym_include] = ACTIONS(414),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(414),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [sym_identifier] = ACTIONS(416),
    [sym_comment] = ACTIONS(26),
  },
  [132] = {
    [anon_sym_type] = ACTIONS(418),
    [sym_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(26),
  },
  [133] = {
    [sym_type_constructor_definition] = STATE(188),
    [sym_type_parameters] = STATE(189),
    [sym__type_identifier] = STATE(190),
    [aux_sym_type_parameters_repeat1] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [anon_sym_SEMI_SEMI] = ACTIONS(424),
    [anon_sym_val] = ACTIONS(424),
    [anon_sym_module] = ACTIONS(424),
    [anon_sym_type] = ACTIONS(424),
    [anon_sym_open] = ACTIONS(424),
    [anon_sym_include] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_let] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_end] = ACTIONS(424),
    [anon_sym_DASH_GT] = ACTIONS(424),
    [sym_comment] = ACTIONS(26),
  },
  [135] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(426),
    [anon_sym_val] = ACTIONS(428),
    [anon_sym_module] = ACTIONS(428),
    [anon_sym_type] = ACTIONS(428),
    [anon_sym_open] = ACTIONS(428),
    [anon_sym_include] = ACTIONS(428),
    [anon_sym_end] = ACTIONS(428),
    [sym_comment] = ACTIONS(26),
  },
  [136] = {
    [sym_val_specification] = STATE(135),
    [sym_module_specification] = STATE(135),
    [sym_module_type_specification] = STATE(135),
    [sym_open_directive] = STATE(135),
    [sym_include_directive] = STATE(135),
    [sym_type_definition] = STATE(135),
    [aux_sym_signature_repeat1] = STATE(193),
    [anon_sym_val] = ACTIONS(257),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(261),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_end] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [anon_sym_DASH_GT] = ACTIONS(432),
    [sym_comment] = ACTIONS(26),
  },
  [138] = {
    [sym__module_type] = STATE(195),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [139] = {
    [anon_sym_DASH_GT] = ACTIONS(434),
    [sym_comment] = ACTIONS(26),
  },
  [140] = {
    [sym_identifier] = ACTIONS(436),
    [sym_comment] = ACTIONS(26),
  },
  [141] = {
    [sym_type_constructor_definition] = STATE(198),
    [sym_type_parameters] = STATE(199),
    [sym__type_identifier] = STATE(200),
    [aux_sym_type_parameters_repeat1] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [142] = {
    [sym_let_binding] = STATE(203),
    [sym__pattern] = STATE(204),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_rec] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_SEMI_SEMI] = ACTIONS(442),
    [anon_sym_val] = ACTIONS(442),
    [anon_sym_module] = ACTIONS(442),
    [anon_sym_type] = ACTIONS(442),
    [anon_sym_open] = ACTIONS(442),
    [anon_sym_include] = ACTIONS(442),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(442),
    [anon_sym_let] = ACTIONS(442),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_end] = ACTIONS(442),
    [sym_comment] = ACTIONS(26),
  },
  [144] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(446),
    [anon_sym_module] = ACTIONS(448),
    [anon_sym_type] = ACTIONS(448),
    [anon_sym_let] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_end] = ACTIONS(448),
    [sym_comment] = ACTIONS(26),
  },
  [145] = {
    [sym_module_definition] = STATE(144),
    [sym_type_definition] = STATE(144),
    [sym_value_definition] = STATE(144),
    [sym_attribute] = STATE(144),
    [aux_sym_struct_module_repeat1] = STATE(207),
    [anon_sym_module] = ACTIONS(271),
    [anon_sym_type] = ACTIONS(273),
    [anon_sym_let] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(450),
    [sym_comment] = ACTIONS(26),
  },
  [146] = {
    [sym__module] = STATE(209),
    [sym_functor_module] = STATE(80),
    [sym_functor_application_module] = STATE(80),
    [sym_struct_module] = STATE(80),
    [sym_qualified_identifier] = STATE(78),
    [anon_sym_functor] = ACTIONS(452),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [147] = {
    [sym__module_type] = STATE(211),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(454),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [anon_sym_SEMI_SEMI] = ACTIONS(456),
    [anon_sym_val] = ACTIONS(456),
    [anon_sym_module] = ACTIONS(456),
    [anon_sym_type] = ACTIONS(456),
    [anon_sym_open] = ACTIONS(456),
    [anon_sym_include] = ACTIONS(456),
    [anon_sym_let] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [149] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_SEMI_SEMI] = ACTIONS(458),
    [anon_sym_val] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(458),
    [anon_sym_type] = ACTIONS(458),
    [anon_sym_open] = ACTIONS(458),
    [anon_sym_include] = ACTIONS(458),
    [anon_sym_and] = ACTIONS(458),
    [anon_sym_let] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [150] = {
    [sym_record_declaration] = STATE(213),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [151] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_SEMI_SEMI] = ACTIONS(458),
    [anon_sym_val] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(458),
    [anon_sym_type] = ACTIONS(458),
    [anon_sym_open] = ACTIONS(458),
    [anon_sym_include] = ACTIONS(458),
    [anon_sym_and] = ACTIONS(458),
    [anon_sym_let] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_SEMI_SEMI] = ACTIONS(400),
    [anon_sym_val] = ACTIONS(402),
    [anon_sym_module] = ACTIONS(402),
    [anon_sym_type] = ACTIONS(402),
    [anon_sym_EQ] = ACTIONS(400),
    [anon_sym_open] = ACTIONS(402),
    [anon_sym_include] = ACTIONS(402),
    [anon_sym_and] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_constraint] = ACTIONS(402),
    [anon_sym_DASH_GT] = ACTIONS(400),
    [sym_identifier] = ACTIONS(404),
    [sym_comment] = ACTIONS(26),
  },
  [154] = {
    [anon_sym_RBRACE] = ACTIONS(462),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_SEMI_SEMI] = ACTIONS(464),
    [anon_sym_val] = ACTIONS(464),
    [anon_sym_module] = ACTIONS(464),
    [anon_sym_type] = ACTIONS(464),
    [anon_sym_open] = ACTIONS(464),
    [anon_sym_include] = ACTIONS(464),
    [anon_sym_and] = ACTIONS(464),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_constraint] = ACTIONS(464),
    [anon_sym_end] = ACTIONS(464),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [anon_sym_COLON] = ACTIONS(468),
    [sym_comment] = ACTIONS(26),
  },
  [158] = {
    [aux_sym_record_declaration_repeat1] = STATE(219),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(462),
    [sym_comment] = ACTIONS(26),
  },
  [159] = {
    [sym__type_identifier] = STATE(221),
    [sym_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [sym__type] = STATE(222),
    [sym_parenthesized_type] = STATE(96),
    [sym_function_type] = STATE(96),
    [sym_type_variable] = STATE(96),
    [sym_constructed_type] = STATE(96),
    [sym_qualified_type_identifier] = STATE(96),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_SEMI_SEMI] = ACTIONS(408),
    [anon_sym_val] = ACTIONS(410),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_type] = ACTIONS(410),
    [anon_sym_EQ] = ACTIONS(408),
    [anon_sym_open] = ACTIONS(410),
    [anon_sym_include] = ACTIONS(410),
    [anon_sym_and] = ACTIONS(410),
    [anon_sym_let] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_constraint] = ACTIONS(410),
    [anon_sym_DASH_GT] = ACTIONS(408),
    [sym_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [sym__type] = STATE(223),
    [sym_parenthesized_type] = STATE(96),
    [sym_function_type] = STATE(96),
    [sym_type_variable] = STATE(96),
    [sym_constructed_type] = STATE(96),
    [sym_qualified_type_identifier] = STATE(96),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [163] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_RBRACE] = ACTIONS(476),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [anon_sym_COLON] = ACTIONS(478),
    [anon_sym_EQ] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_TILDE] = ACTIONS(478),
    [anon_sym_QMARK] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_SEMI] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(478),
    [sym_identifier] = ACTIONS(480),
    [sym_number] = ACTIONS(480),
    [sym_string] = ACTIONS(478),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [aux_sym_record_pattern_repeat1] = STATE(166),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_RBRACE] = ACTIONS(476),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [sym__pattern] = STATE(225),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_val] = ACTIONS(485),
    [anon_sym_module] = ACTIONS(485),
    [anon_sym_type] = ACTIONS(485),
    [anon_sym_open] = ACTIONS(485),
    [anon_sym_include] = ACTIONS(485),
    [anon_sym_and] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_end] = ACTIONS(485),
    [anon_sym_in] = ACTIONS(487),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [sym_labeled_parameter] = STATE(59),
    [sym_shorthand_labeled_parameter] = STATE(59),
    [sym__pattern] = STATE(59),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [aux_sym_let_binding_repeat1] = STATE(226),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [aux_sym_value_definition_repeat1] = STATE(229),
    [anon_sym_and] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(491),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [anon_sym_EQ] = ACTIONS(493),
    [sym_comment] = ACTIONS(26),
  },
  [172] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_RBRACE] = ACTIONS(400),
    [anon_sym_DASH_GT] = ACTIONS(400),
    [sym_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(26),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [sym__type_identifier] = STATE(233),
    [sym_identifier] = ACTIONS(497),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [anon_sym_SEMI_SEMI] = ACTIONS(499),
    [anon_sym_val] = ACTIONS(499),
    [anon_sym_module] = ACTIONS(499),
    [anon_sym_type] = ACTIONS(499),
    [anon_sym_open] = ACTIONS(499),
    [anon_sym_include] = ACTIONS(499),
    [anon_sym_let] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_end] = ACTIONS(499),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [sym__type] = STATE(234),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(408),
    [anon_sym_RBRACE] = ACTIONS(408),
    [anon_sym_DASH_GT] = ACTIONS(408),
    [sym_identifier] = ACTIONS(410),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_val] = ACTIONS(503),
    [anon_sym_module] = ACTIONS(503),
    [anon_sym_type] = ACTIONS(503),
    [anon_sym_open] = ACTIONS(503),
    [anon_sym_include] = ACTIONS(503),
    [anon_sym_let] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_DASH_GT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [180] = {
    [sym__type] = STATE(235),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_SEMI_SEMI] = ACTIONS(507),
    [anon_sym_val] = ACTIONS(509),
    [anon_sym_module] = ACTIONS(509),
    [anon_sym_type] = ACTIONS(509),
    [anon_sym_open] = ACTIONS(509),
    [anon_sym_include] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_let] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_DASH_GT] = ACTIONS(507),
    [sym_identifier] = ACTIONS(511),
    [sym_comment] = ACTIONS(26),
  },
  [183] = {
    [sym_qualified_type_identifier] = STATE(129),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_val] = ACTIONS(515),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_open] = ACTIONS(515),
    [anon_sym_include] = ACTIONS(515),
    [anon_sym_let] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(249),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [anon_sym_COLON] = ACTIONS(517),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [sym__type_identifier] = STATE(237),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [sym_module_parameter] = STATE(39),
    [aux_sym_module_specification_repeat1] = STATE(239),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(78),
    [anon_sym_module] = ACTIONS(78),
    [anon_sym_type] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(78),
    [anon_sym_include] = ACTIONS(78),
    [anon_sym_and] = ACTIONS(78),
    [anon_sym_let] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_constraint] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(78),
    [sym_comment] = ACTIONS(26),
  },
  [188] = {
    [aux_sym_type_definition_repeat1] = STATE(241),
    [anon_sym_SEMI_SEMI] = ACTIONS(84),
    [anon_sym_val] = ACTIONS(84),
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_type] = ACTIONS(84),
    [anon_sym_open] = ACTIONS(84),
    [anon_sym_include] = ACTIONS(84),
    [anon_sym_and] = ACTIONS(521),
    [anon_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [sym__type_identifier] = STATE(242),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [sym_type_equation] = STATE(245),
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(246),
    [anon_sym_SEMI_SEMI] = ACTIONS(88),
    [anon_sym_val] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_EQ] = ACTIONS(523),
    [anon_sym_open] = ACTIONS(88),
    [anon_sym_include] = ACTIONS(88),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(88),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [anon_sym_val] = ACTIONS(527),
    [anon_sym_module] = ACTIONS(527),
    [anon_sym_type] = ACTIONS(527),
    [anon_sym_open] = ACTIONS(527),
    [anon_sym_include] = ACTIONS(527),
    [anon_sym_end] = ACTIONS(527),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_val] = ACTIONS(529),
    [anon_sym_module] = ACTIONS(529),
    [anon_sym_type] = ACTIONS(529),
    [anon_sym_open] = ACTIONS(529),
    [anon_sym_include] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_let] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_end] = ACTIONS(529),
    [anon_sym_DASH_GT] = ACTIONS(529),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [sym_val_specification] = STATE(135),
    [sym_module_specification] = STATE(135),
    [sym_module_type_specification] = STATE(135),
    [sym_open_directive] = STATE(135),
    [sym_include_directive] = STATE(135),
    [sym_type_definition] = STATE(135),
    [aux_sym_signature_repeat1] = STATE(193),
    [anon_sym_val] = ACTIONS(531),
    [anon_sym_module] = ACTIONS(534),
    [anon_sym_type] = ACTIONS(537),
    [anon_sym_open] = ACTIONS(540),
    [anon_sym_include] = ACTIONS(543),
    [anon_sym_end] = ACTIONS(527),
    [sym_comment] = ACTIONS(26),
  },
  [194] = {
    [sym__module_type] = STATE(247),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [anon_sym_SEMI_SEMI] = ACTIONS(546),
    [anon_sym_val] = ACTIONS(546),
    [anon_sym_module] = ACTIONS(546),
    [anon_sym_type] = ACTIONS(546),
    [anon_sym_open] = ACTIONS(546),
    [anon_sym_include] = ACTIONS(546),
    [anon_sym_let] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [196] = {
    [sym__module] = STATE(248),
    [sym_functor_module] = STATE(80),
    [sym_functor_application_module] = STATE(80),
    [sym_struct_module] = STATE(80),
    [sym_qualified_identifier] = STATE(78),
    [anon_sym_functor] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [197] = {
    [anon_sym_EQ] = ACTIONS(548),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [aux_sym_type_definition_repeat1] = STATE(251),
    [anon_sym_SEMI_SEMI] = ACTIONS(84),
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_type] = ACTIONS(84),
    [anon_sym_and] = ACTIONS(550),
    [anon_sym_let] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [sym__type_identifier] = STATE(252),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [sym_type_equation] = STATE(255),
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(256),
    [anon_sym_SEMI_SEMI] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_type] = ACTIONS(88),
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_let] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(88),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
    [sym_let_binding] = STATE(257),
    [sym__pattern] = STATE(204),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(556),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [202] = {
    [sym_labeled_parameter] = STATE(59),
    [sym_shorthand_labeled_parameter] = STATE(59),
    [sym__pattern] = STATE(59),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [aux_sym_let_binding_repeat1] = STATE(258),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [203] = {
    [aux_sym_value_definition_repeat1] = STATE(260),
    [anon_sym_SEMI_SEMI] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_type] = ACTIONS(112),
    [anon_sym_and] = ACTIONS(558),
    [anon_sym_let] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(26),
  },
  [204] = {
    [anon_sym_EQ] = ACTIONS(560),
    [sym_comment] = ACTIONS(26),
  },
  [205] = {
    [anon_sym_module] = ACTIONS(562),
    [anon_sym_type] = ACTIONS(562),
    [anon_sym_let] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(562),
    [anon_sym_end] = ACTIONS(562),
    [sym_comment] = ACTIONS(26),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [anon_sym_SEMI_SEMI] = ACTIONS(564),
    [anon_sym_val] = ACTIONS(564),
    [anon_sym_module] = ACTIONS(564),
    [anon_sym_type] = ACTIONS(564),
    [anon_sym_open] = ACTIONS(564),
    [anon_sym_include] = ACTIONS(564),
    [anon_sym_LPAREN] = ACTIONS(566),
    [anon_sym_RPAREN] = ACTIONS(564),
    [anon_sym_let] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_end] = ACTIONS(564),
    [sym_comment] = ACTIONS(26),
  },
  [207] = {
    [sym_module_definition] = STATE(144),
    [sym_type_definition] = STATE(144),
    [sym_value_definition] = STATE(144),
    [sym_attribute] = STATE(144),
    [aux_sym_struct_module_repeat1] = STATE(207),
    [anon_sym_module] = ACTIONS(568),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_let] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_end] = ACTIONS(562),
    [sym_comment] = ACTIONS(26),
  },
  [208] = {
    [sym_module_parameter] = STATE(262),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [209] = {
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [sym_module_parameter] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(582),
    [anon_sym_DASH_GT] = ACTIONS(584),
    [sym_comment] = ACTIONS(26),
  },
  [212] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_SEMI_SEMI] = ACTIONS(586),
    [anon_sym_val] = ACTIONS(586),
    [anon_sym_module] = ACTIONS(586),
    [anon_sym_type] = ACTIONS(586),
    [anon_sym_open] = ACTIONS(586),
    [anon_sym_include] = ACTIONS(586),
    [anon_sym_and] = ACTIONS(586),
    [anon_sym_let] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [213] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(267),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_SEMI_SEMI] = ACTIONS(586),
    [anon_sym_val] = ACTIONS(586),
    [anon_sym_module] = ACTIONS(586),
    [anon_sym_type] = ACTIONS(586),
    [anon_sym_open] = ACTIONS(586),
    [anon_sym_include] = ACTIONS(586),
    [anon_sym_and] = ACTIONS(586),
    [anon_sym_let] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_val] = ACTIONS(503),
    [anon_sym_module] = ACTIONS(503),
    [anon_sym_type] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_open] = ACTIONS(503),
    [anon_sym_include] = ACTIONS(503),
    [anon_sym_and] = ACTIONS(503),
    [anon_sym_let] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_constraint] = ACTIONS(503),
    [anon_sym_DASH_GT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(588),
    [anon_sym_SEMI_SEMI] = ACTIONS(588),
    [anon_sym_val] = ACTIONS(588),
    [anon_sym_module] = ACTIONS(588),
    [anon_sym_type] = ACTIONS(588),
    [anon_sym_open] = ACTIONS(588),
    [anon_sym_include] = ACTIONS(588),
    [anon_sym_and] = ACTIONS(588),
    [anon_sym_let] = ACTIONS(588),
    [anon_sym_LBRACK] = ACTIONS(588),
    [anon_sym_constraint] = ACTIONS(588),
    [anon_sym_end] = ACTIONS(588),
    [sym_comment] = ACTIONS(26),
  },
  [216] = {
    [anon_sym_COLON] = ACTIONS(590),
    [sym_comment] = ACTIONS(26),
  },
  [217] = {
    [sym__type] = STATE(269),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [218] = {
    [sym_field_declaration] = STATE(271),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_mutable] = ACTIONS(311),
    [sym_identifier] = ACTIONS(313),
    [sym_comment] = ACTIONS(26),
  },
  [219] = {
    [aux_sym_record_declaration_repeat1] = STATE(273),
    [anon_sym_SEMI] = ACTIONS(594),
    [anon_sym_RBRACE] = ACTIONS(592),
    [sym_comment] = ACTIONS(26),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_SEMI_SEMI] = ACTIONS(507),
    [anon_sym_val] = ACTIONS(509),
    [anon_sym_module] = ACTIONS(509),
    [anon_sym_type] = ACTIONS(509),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_open] = ACTIONS(509),
    [anon_sym_include] = ACTIONS(509),
    [anon_sym_and] = ACTIONS(509),
    [anon_sym_let] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_constraint] = ACTIONS(509),
    [anon_sym_DASH_GT] = ACTIONS(507),
    [sym_identifier] = ACTIONS(511),
    [sym_comment] = ACTIONS(26),
  },
  [222] = {
    [sym_qualified_type_identifier] = STATE(161),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_val] = ACTIONS(515),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_EQ] = ACTIONS(513),
    [anon_sym_open] = ACTIONS(515),
    [anon_sym_include] = ACTIONS(515),
    [anon_sym_and] = ACTIONS(515),
    [anon_sym_let] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_constraint] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(323),
    [sym_comment] = ACTIONS(26),
  },
  [223] = {
    [sym_qualified_type_identifier] = STATE(161),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(596),
    [anon_sym_SEMI_SEMI] = ACTIONS(596),
    [anon_sym_val] = ACTIONS(598),
    [anon_sym_module] = ACTIONS(598),
    [anon_sym_type] = ACTIONS(598),
    [anon_sym_open] = ACTIONS(598),
    [anon_sym_include] = ACTIONS(598),
    [anon_sym_and] = ACTIONS(598),
    [anon_sym_let] = ACTIONS(598),
    [anon_sym_LBRACK] = ACTIONS(596),
    [anon_sym_constraint] = ACTIONS(598),
    [anon_sym_DASH_GT] = ACTIONS(600),
    [sym_identifier] = ACTIONS(323),
    [sym_comment] = ACTIONS(26),
  },
  [224] = {
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_EQ] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_TILDE] = ACTIONS(602),
    [anon_sym_QMARK] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_SEMI] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [sym_identifier] = ACTIONS(604),
    [sym_number] = ACTIONS(604),
    [sym_string] = ACTIONS(602),
    [sym_comment] = ACTIONS(26),
  },
  [225] = {
    [anon_sym_EQ] = ACTIONS(606),
    [anon_sym_LPAREN] = ACTIONS(608),
    [anon_sym_TILDE] = ACTIONS(606),
    [anon_sym_QMARK] = ACTIONS(606),
    [anon_sym_LBRACE] = ACTIONS(606),
    [sym_identifier] = ACTIONS(608),
    [sym_number] = ACTIONS(608),
    [sym_string] = ACTIONS(606),
    [sym_comment] = ACTIONS(26),
  },
  [226] = {
    [sym_labeled_parameter] = STATE(59),
    [sym_shorthand_labeled_parameter] = STATE(59),
    [sym__pattern] = STATE(59),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [aux_sym_let_binding_repeat1] = STATE(110),
    [anon_sym_EQ] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [227] = {
    [sym_let_binding] = STATE(111),
    [sym__pattern] = STATE(171),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(378),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [228] = {
    [sym__expression] = STATE(276),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [229] = {
    [aux_sym_value_definition_repeat1] = STATE(278),
    [anon_sym_and] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(612),
    [sym_comment] = ACTIONS(26),
  },
  [230] = {
    [sym__expression] = STATE(116),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(614),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_DASH_GT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(503),
    [sym_comment] = ACTIONS(26),
  },
  [232] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(26),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_DASH_GT] = ACTIONS(507),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(26),
  },
  [234] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(394),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [235] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [236] = {
    [sym__type] = STATE(283),
    [sym_parenthesized_type] = STATE(284),
    [sym_function_type] = STATE(284),
    [sym_type_variable] = STATE(284),
    [sym_constructed_type] = STATE(284),
    [sym_qualified_type_identifier] = STATE(284),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(284),
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_SQUOTE] = ACTIONS(618),
    [sym_identifier] = ACTIONS(620),
    [sym_comment] = ACTIONS(26),
  },
  [237] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(149),
    [anon_sym_val] = ACTIONS(149),
    [anon_sym_module] = ACTIONS(149),
    [anon_sym_type] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(622),
    [anon_sym_open] = ACTIONS(149),
    [anon_sym_include] = ACTIONS(149),
    [anon_sym_end] = ACTIONS(149),
    [sym_comment] = ACTIONS(26),
  },
  [238] = {
    [sym__module_type] = STATE(288),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(624),
    [sym_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [239] = {
    [sym_module_parameter] = STATE(39),
    [aux_sym_module_specification_repeat1] = STATE(83),
    [anon_sym_COLON] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [240] = {
    [sym_type_constructor_definition] = STATE(85),
    [sym_type_parameters] = STATE(189),
    [sym__type_identifier] = STATE(190),
    [aux_sym_type_parameters_repeat1] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [241] = {
    [aux_sym_type_definition_repeat1] = STATE(290),
    [anon_sym_SEMI_SEMI] = ACTIONS(177),
    [anon_sym_val] = ACTIONS(177),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_open] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(521),
    [anon_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(26),
  },
  [242] = {
    [sym_type_equation] = STATE(292),
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(293),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_val] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(630),
    [anon_sym_open] = ACTIONS(179),
    [anon_sym_include] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(26),
  },
  [243] = {
    [sym_record_declaration] = STATE(297),
    [sym__type] = STATE(298),
    [sym_parenthesized_type] = STATE(299),
    [sym_function_type] = STATE(299),
    [sym_type_variable] = STATE(299),
    [sym_constructed_type] = STATE(299),
    [sym_qualified_type_identifier] = STATE(299),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(299),
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
  },
  [244] = {
    [sym__type_identifier] = STATE(301),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [245] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(293),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_val] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(638),
    [anon_sym_open] = ACTIONS(179),
    [anon_sym_include] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(26),
  },
  [246] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_val] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_open] = ACTIONS(179),
    [anon_sym_include] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(26),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [anon_sym_SEMI_SEMI] = ACTIONS(640),
    [anon_sym_val] = ACTIONS(640),
    [anon_sym_module] = ACTIONS(640),
    [anon_sym_type] = ACTIONS(640),
    [anon_sym_open] = ACTIONS(640),
    [anon_sym_include] = ACTIONS(640),
    [anon_sym_let] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_DASH_GT] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(642),
    [anon_sym_SEMI_SEMI] = ACTIONS(642),
    [anon_sym_val] = ACTIONS(642),
    [anon_sym_module] = ACTIONS(642),
    [anon_sym_type] = ACTIONS(642),
    [anon_sym_open] = ACTIONS(642),
    [anon_sym_include] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_let] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_end] = ACTIONS(642),
    [sym_comment] = ACTIONS(26),
  },
  [249] = {
    [sym__module] = STATE(79),
    [sym_functor_module] = STATE(80),
    [sym_functor_application_module] = STATE(80),
    [sym_struct_module] = STATE(80),
    [sym_qualified_identifier] = STATE(78),
    [anon_sym_functor] = ACTIONS(644),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [250] = {
    [sym_type_constructor_definition] = STATE(85),
    [sym_type_parameters] = STATE(199),
    [sym__type_identifier] = STATE(200),
    [aux_sym_type_parameters_repeat1] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
  },
  [251] = {
    [aux_sym_type_definition_repeat1] = STATE(305),
    [anon_sym_SEMI_SEMI] = ACTIONS(177),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(550),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(26),
  },
  [252] = {
    [sym_type_equation] = STATE(307),
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(308),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(646),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(26),
  },
  [253] = {
    [sym_record_declaration] = STATE(312),
    [sym__type] = STATE(313),
    [sym_parenthesized_type] = STATE(314),
    [sym_function_type] = STATE(314),
    [sym_type_variable] = STATE(314),
    [sym_constructed_type] = STATE(314),
    [sym_qualified_type_identifier] = STATE(314),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(314),
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(26),
  },
  [254] = {
    [sym__type_identifier] = STATE(316),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [255] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(308),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(654),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(26),
  },
  [256] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(318),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_module] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(26),
  },
  [257] = {
    [aux_sym_value_definition_repeat1] = STATE(319),
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
    [anon_sym_module] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_and] = ACTIONS(558),
    [anon_sym_let] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(26),
  },
  [258] = {
    [sym_labeled_parameter] = STATE(59),
    [sym_shorthand_labeled_parameter] = STATE(59),
    [sym__pattern] = STATE(59),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [aux_sym_let_binding_repeat1] = STATE(110),
    [anon_sym_EQ] = ACTIONS(656),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [259] = {
    [sym_let_binding] = STATE(111),
    [sym__pattern] = STATE(204),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(556),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [260] = {
    [aux_sym_value_definition_repeat1] = STATE(321),
    [anon_sym_SEMI_SEMI] = ACTIONS(207),
    [anon_sym_module] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_and] = ACTIONS(558),
    [anon_sym_let] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(26),
  },
  [261] = {
    [sym__expression] = STATE(116),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(658),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [262] = {
    [anon_sym_DASH_GT] = ACTIONS(660),
    [sym_comment] = ACTIONS(26),
  },
  [263] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [anon_sym_SEMI_SEMI] = ACTIONS(662),
    [anon_sym_val] = ACTIONS(662),
    [anon_sym_module] = ACTIONS(662),
    [anon_sym_type] = ACTIONS(662),
    [anon_sym_open] = ACTIONS(662),
    [anon_sym_include] = ACTIONS(662),
    [anon_sym_LPAREN] = ACTIONS(664),
    [anon_sym_RPAREN] = ACTIONS(662),
    [anon_sym_let] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(662),
    [anon_sym_end] = ACTIONS(662),
    [sym_comment] = ACTIONS(26),
  },
  [264] = {
    [anon_sym_DASH_GT] = ACTIONS(666),
    [sym_comment] = ACTIONS(26),
  },
  [265] = {
    [anon_sym_COLON] = ACTIONS(668),
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_DASH_GT] = ACTIONS(668),
    [sym_comment] = ACTIONS(26),
  },
  [266] = {
    [sym__module_type] = STATE(325),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(454),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [267] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_SEMI_SEMI] = ACTIONS(672),
    [anon_sym_val] = ACTIONS(672),
    [anon_sym_module] = ACTIONS(672),
    [anon_sym_type] = ACTIONS(672),
    [anon_sym_open] = ACTIONS(672),
    [anon_sym_include] = ACTIONS(672),
    [anon_sym_and] = ACTIONS(672),
    [anon_sym_let] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_constraint] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [268] = {
    [sym__type] = STATE(326),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [269] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_RBRACE] = ACTIONS(674),
    [anon_sym_DASH_GT] = ACTIONS(676),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [270] = {
    [ts_builtin_sym_end] = ACTIONS(678),
    [anon_sym_SEMI_SEMI] = ACTIONS(678),
    [anon_sym_val] = ACTIONS(678),
    [anon_sym_module] = ACTIONS(678),
    [anon_sym_type] = ACTIONS(678),
    [anon_sym_open] = ACTIONS(678),
    [anon_sym_include] = ACTIONS(678),
    [anon_sym_and] = ACTIONS(678),
    [anon_sym_let] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_constraint] = ACTIONS(678),
    [anon_sym_end] = ACTIONS(678),
    [sym_comment] = ACTIONS(26),
  },
  [271] = {
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [sym_comment] = ACTIONS(26),
  },
  [272] = {
    [sym_field_declaration] = STATE(271),
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_mutable] = ACTIONS(311),
    [sym_identifier] = ACTIONS(313),
    [sym_comment] = ACTIONS(26),
  },
  [273] = {
    [aux_sym_record_declaration_repeat1] = STATE(273),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_RBRACE] = ACTIONS(680),
    [sym_comment] = ACTIONS(26),
  },
  [274] = {
    [sym__type] = STATE(330),
    [sym_parenthesized_type] = STATE(96),
    [sym_function_type] = STATE(96),
    [sym_type_variable] = STATE(96),
    [sym_constructed_type] = STATE(96),
    [sym_qualified_type_identifier] = STATE(96),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [275] = {
    [sym__expression] = STATE(168),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(614),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [276] = {
    [ts_builtin_sym_end] = ACTIONS(687),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_val] = ACTIONS(687),
    [anon_sym_module] = ACTIONS(687),
    [anon_sym_type] = ACTIONS(687),
    [anon_sym_open] = ACTIONS(687),
    [anon_sym_include] = ACTIONS(687),
    [anon_sym_and] = ACTIONS(687),
    [anon_sym_let] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_end] = ACTIONS(687),
    [anon_sym_in] = ACTIONS(689),
    [sym_comment] = ACTIONS(26),
  },
  [277] = {
    [sym__expression] = STATE(331),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [278] = {
    [aux_sym_value_definition_repeat1] = STATE(278),
    [anon_sym_and] = ACTIONS(691),
    [anon_sym_in] = ACTIONS(371),
    [sym_comment] = ACTIONS(26),
  },
  [279] = {
    [sym_let_binding] = STATE(332),
    [sym__pattern] = STATE(171),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(378),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [280] = {
    [sym__type] = STATE(333),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [281] = {
    [sym__type_identifier] = STATE(335),
    [sym_identifier] = ACTIONS(694),
    [sym_comment] = ACTIONS(26),
  },
  [282] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(696),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [283] = {
    [sym_qualified_type_identifier] = STATE(338),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(338),
    [anon_sym_SEMI_SEMI] = ACTIONS(245),
    [anon_sym_val] = ACTIONS(247),
    [anon_sym_module] = ACTIONS(247),
    [anon_sym_type] = ACTIONS(247),
    [anon_sym_open] = ACTIONS(247),
    [anon_sym_include] = ACTIONS(247),
    [anon_sym_end] = ACTIONS(247),
    [anon_sym_DASH_GT] = ACTIONS(698),
    [sym_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [284] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_val] = ACTIONS(253),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_open] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_DASH_GT] = ACTIONS(251),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [285] = {
    [anon_sym_DOT] = ACTIONS(696),
    [sym_comment] = ACTIONS(26),
  },
  [286] = {
    [sym__module_type] = STATE(339),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(624),
    [sym_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [287] = {
    [sym_module_parameter] = STATE(340),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [288] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_val] = ACTIONS(265),
    [anon_sym_module] = ACTIONS(265),
    [anon_sym_type] = ACTIONS(265),
    [anon_sym_open] = ACTIONS(265),
    [anon_sym_include] = ACTIONS(265),
    [anon_sym_end] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(700),
    [sym_comment] = ACTIONS(26),
  },
  [289] = {
    [sym__module_type] = STATE(342),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(624),
    [sym_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [290] = {
    [aux_sym_type_definition_repeat1] = STATE(290),
    [anon_sym_SEMI_SEMI] = ACTIONS(298),
    [anon_sym_val] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(298),
    [anon_sym_type] = ACTIONS(298),
    [anon_sym_open] = ACTIONS(298),
    [anon_sym_include] = ACTIONS(298),
    [anon_sym_and] = ACTIONS(702),
    [anon_sym_end] = ACTIONS(298),
    [sym_comment] = ACTIONS(26),
  },
  [291] = {
    [sym_record_declaration] = STATE(343),
    [sym__type] = STATE(298),
    [sym_parenthesized_type] = STATE(299),
    [sym_function_type] = STATE(299),
    [sym_type_variable] = STATE(299),
    [sym_constructed_type] = STATE(299),
    [sym_qualified_type_identifier] = STATE(299),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(299),
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
  },
  [292] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(345),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_val] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(705),
    [anon_sym_open] = ACTIONS(303),
    [anon_sym_include] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [293] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_val] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_open] = ACTIONS(303),
    [anon_sym_include] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [294] = {
    [sym__type] = STATE(346),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [295] = {
    [sym__type_identifier] = STATE(348),
    [sym_identifier] = ACTIONS(707),
    [sym_comment] = ACTIONS(26),
  },
  [296] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(709),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [297] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(345),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_val] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_open] = ACTIONS(303),
    [anon_sym_include] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [298] = {
    [sym_qualified_type_identifier] = STATE(351),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(351),
    [anon_sym_SEMI_SEMI] = ACTIONS(317),
    [anon_sym_val] = ACTIONS(319),
    [anon_sym_module] = ACTIONS(319),
    [anon_sym_type] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_open] = ACTIONS(319),
    [anon_sym_include] = ACTIONS(319),
    [anon_sym_and] = ACTIONS(319),
    [anon_sym_constraint] = ACTIONS(319),
    [anon_sym_end] = ACTIONS(319),
    [anon_sym_DASH_GT] = ACTIONS(711),
    [sym_identifier] = ACTIONS(713),
    [sym_comment] = ACTIONS(26),
  },
  [299] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_val] = ACTIONS(253),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_open] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_constraint] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_DASH_GT] = ACTIONS(251),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [300] = {
    [anon_sym_DOT] = ACTIONS(709),
    [sym_comment] = ACTIONS(26),
  },
  [301] = {
    [anon_sym_EQ] = ACTIONS(715),
    [sym_comment] = ACTIONS(26),
  },
  [302] = {
    [sym_record_declaration] = STATE(343),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [303] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(327),
    [anon_sym_val] = ACTIONS(327),
    [anon_sym_module] = ACTIONS(327),
    [anon_sym_type] = ACTIONS(327),
    [anon_sym_open] = ACTIONS(327),
    [anon_sym_include] = ACTIONS(327),
    [anon_sym_and] = ACTIONS(327),
    [anon_sym_constraint] = ACTIONS(717),
    [anon_sym_end] = ACTIONS(327),
    [sym_comment] = ACTIONS(26),
  },
  [304] = {
    [sym_module_parameter] = STATE(353),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(26),
  },
  [305] = {
    [aux_sym_type_definition_repeat1] = STATE(305),
    [anon_sym_SEMI_SEMI] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(298),
    [anon_sym_type] = ACTIONS(298),
    [anon_sym_and] = ACTIONS(720),
    [anon_sym_let] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_end] = ACTIONS(298),
    [sym_comment] = ACTIONS(26),
  },
  [306] = {
    [sym_record_declaration] = STATE(354),
    [sym__type] = STATE(313),
    [sym_parenthesized_type] = STATE(314),
    [sym_function_type] = STATE(314),
    [sym_type_variable] = STATE(314),
    [sym_constructed_type] = STATE(314),
    [sym_qualified_type_identifier] = STATE(314),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(314),
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(26),
  },
  [307] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(356),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(723),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [308] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(318),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [309] = {
    [sym__type] = STATE(357),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [310] = {
    [sym__type_identifier] = STATE(359),
    [sym_identifier] = ACTIONS(725),
    [sym_comment] = ACTIONS(26),
  },
  [311] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(727),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [312] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(356),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [313] = {
    [sym_qualified_type_identifier] = STATE(362),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(362),
    [anon_sym_SEMI_SEMI] = ACTIONS(317),
    [anon_sym_module] = ACTIONS(319),
    [anon_sym_type] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_and] = ACTIONS(319),
    [anon_sym_let] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_constraint] = ACTIONS(319),
    [anon_sym_end] = ACTIONS(319),
    [anon_sym_DASH_GT] = ACTIONS(729),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(26),
  },
  [314] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_constraint] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_DASH_GT] = ACTIONS(251),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(26),
  },
  [315] = {
    [anon_sym_DOT] = ACTIONS(727),
    [sym_comment] = ACTIONS(26),
  },
  [316] = {
    [anon_sym_EQ] = ACTIONS(733),
    [sym_comment] = ACTIONS(26),
  },
  [317] = {
    [sym_record_declaration] = STATE(354),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [318] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(318),
    [anon_sym_SEMI_SEMI] = ACTIONS(327),
    [anon_sym_module] = ACTIONS(327),
    [anon_sym_type] = ACTIONS(327),
    [anon_sym_and] = ACTIONS(327),
    [anon_sym_let] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_constraint] = ACTIONS(735),
    [anon_sym_end] = ACTIONS(327),
    [sym_comment] = ACTIONS(26),
  },
  [319] = {
    [aux_sym_value_definition_repeat1] = STATE(321),
    [anon_sym_SEMI_SEMI] = ACTIONS(340),
    [anon_sym_module] = ACTIONS(340),
    [anon_sym_type] = ACTIONS(340),
    [anon_sym_and] = ACTIONS(558),
    [anon_sym_let] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_end] = ACTIONS(340),
    [sym_comment] = ACTIONS(26),
  },
  [320] = {
    [sym__expression] = STATE(168),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(658),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [321] = {
    [aux_sym_value_definition_repeat1] = STATE(321),
    [anon_sym_SEMI_SEMI] = ACTIONS(371),
    [anon_sym_module] = ACTIONS(371),
    [anon_sym_type] = ACTIONS(371),
    [anon_sym_and] = ACTIONS(738),
    [anon_sym_let] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_end] = ACTIONS(371),
    [sym_comment] = ACTIONS(26),
  },
  [322] = {
    [sym_let_binding] = STATE(364),
    [sym__pattern] = STATE(171),
    [sym_record_pattern] = STATE(28),
    [sym_type_pattern] = STATE(28),
    [sym_parenthesized_pattern] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(378),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [323] = {
    [sym__module] = STATE(248),
    [sym_functor_module] = STATE(80),
    [sym_functor_application_module] = STATE(80),
    [sym_struct_module] = STATE(80),
    [sym_qualified_identifier] = STATE(78),
    [anon_sym_functor] = ACTIONS(452),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [324] = {
    [sym__module_type] = STATE(365),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(70),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(454),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [325] = {
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_DASH_GT] = ACTIONS(584),
    [sym_comment] = ACTIONS(26),
  },
  [326] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_DASH_GT] = ACTIONS(676),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [327] = {
    [sym__type] = STATE(366),
    [sym_parenthesized_type] = STATE(122),
    [sym_function_type] = STATE(122),
    [sym_type_variable] = STATE(122),
    [sym_constructed_type] = STATE(122),
    [sym_qualified_type_identifier] = STATE(122),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [328] = {
    [ts_builtin_sym_end] = ACTIONS(743),
    [anon_sym_SEMI_SEMI] = ACTIONS(743),
    [anon_sym_val] = ACTIONS(743),
    [anon_sym_module] = ACTIONS(743),
    [anon_sym_type] = ACTIONS(743),
    [anon_sym_open] = ACTIONS(743),
    [anon_sym_include] = ACTIONS(743),
    [anon_sym_and] = ACTIONS(743),
    [anon_sym_let] = ACTIONS(743),
    [anon_sym_LBRACK] = ACTIONS(743),
    [anon_sym_constraint] = ACTIONS(743),
    [anon_sym_end] = ACTIONS(743),
    [sym_comment] = ACTIONS(26),
  },
  [329] = {
    [sym_field_declaration] = STATE(271),
    [anon_sym_mutable] = ACTIONS(311),
    [sym_identifier] = ACTIONS(313),
    [sym_comment] = ACTIONS(26),
  },
  [330] = {
    [sym_qualified_type_identifier] = STATE(161),
    [sym_qualified_identifier] = STATE(97),
    [sym__type_identifier] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_val] = ACTIONS(515),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_open] = ACTIONS(515),
    [anon_sym_include] = ACTIONS(515),
    [anon_sym_and] = ACTIONS(515),
    [anon_sym_let] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_constraint] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(600),
    [sym_identifier] = ACTIONS(323),
    [sym_comment] = ACTIONS(26),
  },
  [331] = {
    [ts_builtin_sym_end] = ACTIONS(745),
    [anon_sym_SEMI_SEMI] = ACTIONS(745),
    [anon_sym_val] = ACTIONS(745),
    [anon_sym_module] = ACTIONS(745),
    [anon_sym_type] = ACTIONS(745),
    [anon_sym_open] = ACTIONS(745),
    [anon_sym_include] = ACTIONS(745),
    [anon_sym_and] = ACTIONS(745),
    [anon_sym_let] = ACTIONS(745),
    [anon_sym_LBRACK] = ACTIONS(745),
    [anon_sym_end] = ACTIONS(745),
    [anon_sym_in] = ACTIONS(747),
    [sym_comment] = ACTIONS(26),
  },
  [332] = {
    [aux_sym_value_definition_repeat1] = STATE(368),
    [anon_sym_and] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(749),
    [sym_comment] = ACTIONS(26),
  },
  [333] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(751),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [334] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [335] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(400),
    [anon_sym_val] = ACTIONS(402),
    [anon_sym_module] = ACTIONS(402),
    [anon_sym_type] = ACTIONS(402),
    [anon_sym_open] = ACTIONS(402),
    [anon_sym_include] = ACTIONS(402),
    [anon_sym_end] = ACTIONS(402),
    [anon_sym_DASH_GT] = ACTIONS(400),
    [sym_identifier] = ACTIONS(404),
    [sym_comment] = ACTIONS(26),
  },
  [336] = {
    [sym__type_identifier] = STATE(371),
    [sym_identifier] = ACTIONS(753),
    [sym_comment] = ACTIONS(26),
  },
  [337] = {
    [sym__type] = STATE(372),
    [sym_parenthesized_type] = STATE(284),
    [sym_function_type] = STATE(284),
    [sym_type_variable] = STATE(284),
    [sym_constructed_type] = STATE(284),
    [sym_qualified_type_identifier] = STATE(284),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(284),
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_SQUOTE] = ACTIONS(618),
    [sym_identifier] = ACTIONS(620),
    [sym_comment] = ACTIONS(26),
  },
  [338] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(408),
    [anon_sym_val] = ACTIONS(410),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_type] = ACTIONS(410),
    [anon_sym_open] = ACTIONS(410),
    [anon_sym_include] = ACTIONS(410),
    [anon_sym_end] = ACTIONS(410),
    [anon_sym_DASH_GT] = ACTIONS(408),
    [sym_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(26),
  },
  [339] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(414),
    [anon_sym_val] = ACTIONS(414),
    [anon_sym_module] = ACTIONS(414),
    [anon_sym_type] = ACTIONS(414),
    [anon_sym_open] = ACTIONS(414),
    [anon_sym_include] = ACTIONS(414),
    [anon_sym_end] = ACTIONS(414),
    [anon_sym_DASH_GT] = ACTIONS(700),
    [sym_comment] = ACTIONS(26),
  },
  [340] = {
    [anon_sym_DASH_GT] = ACTIONS(755),
    [sym_comment] = ACTIONS(26),
  },
  [341] = {
    [sym__module_type] = STATE(374),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(624),
    [sym_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [342] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(456),
    [anon_sym_val] = ACTIONS(456),
    [anon_sym_module] = ACTIONS(456),
    [anon_sym_type] = ACTIONS(456),
    [anon_sym_open] = ACTIONS(456),
    [anon_sym_include] = ACTIONS(456),
    [anon_sym_end] = ACTIONS(456),
    [anon_sym_DASH_GT] = ACTIONS(700),
    [sym_comment] = ACTIONS(26),
  },
  [343] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(375),
    [anon_sym_SEMI_SEMI] = ACTIONS(458),
    [anon_sym_val] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(458),
    [anon_sym_type] = ACTIONS(458),
    [anon_sym_open] = ACTIONS(458),
    [anon_sym_include] = ACTIONS(458),
    [anon_sym_and] = ACTIONS(458),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [344] = {
    [sym_record_declaration] = STATE(376),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [345] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(458),
    [anon_sym_val] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(458),
    [anon_sym_type] = ACTIONS(458),
    [anon_sym_open] = ACTIONS(458),
    [anon_sym_include] = ACTIONS(458),
    [anon_sym_and] = ACTIONS(458),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [346] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(757),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [347] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [348] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(400),
    [anon_sym_val] = ACTIONS(402),
    [anon_sym_module] = ACTIONS(402),
    [anon_sym_type] = ACTIONS(402),
    [anon_sym_EQ] = ACTIONS(400),
    [anon_sym_open] = ACTIONS(402),
    [anon_sym_include] = ACTIONS(402),
    [anon_sym_and] = ACTIONS(402),
    [anon_sym_constraint] = ACTIONS(402),
    [anon_sym_end] = ACTIONS(402),
    [anon_sym_DASH_GT] = ACTIONS(400),
    [sym_identifier] = ACTIONS(404),
    [sym_comment] = ACTIONS(26),
  },
  [349] = {
    [sym__type_identifier] = STATE(379),
    [sym_identifier] = ACTIONS(759),
    [sym_comment] = ACTIONS(26),
  },
  [350] = {
    [sym__type] = STATE(380),
    [sym_parenthesized_type] = STATE(299),
    [sym_function_type] = STATE(299),
    [sym_type_variable] = STATE(299),
    [sym_constructed_type] = STATE(299),
    [sym_qualified_type_identifier] = STATE(299),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(299),
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [sym_identifier] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
  },
  [351] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(408),
    [anon_sym_val] = ACTIONS(410),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_type] = ACTIONS(410),
    [anon_sym_EQ] = ACTIONS(408),
    [anon_sym_open] = ACTIONS(410),
    [anon_sym_include] = ACTIONS(410),
    [anon_sym_and] = ACTIONS(410),
    [anon_sym_constraint] = ACTIONS(410),
    [anon_sym_end] = ACTIONS(410),
    [anon_sym_DASH_GT] = ACTIONS(408),
    [sym_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(26),
  },
  [352] = {
    [sym__type] = STATE(381),
    [sym_parenthesized_type] = STATE(299),
    [sym_function_type] = STATE(299),
    [sym_type_variable] = STATE(299),
    [sym_constructed_type] = STATE(299),
    [sym_qualified_type_identifier] = STATE(299),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(299),
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [sym_identifier] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
  },
  [353] = {
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_comment] = ACTIONS(26),
  },
  [354] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(383),
    [anon_sym_SEMI_SEMI] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(458),
    [anon_sym_type] = ACTIONS(458),
    [anon_sym_and] = ACTIONS(458),
    [anon_sym_let] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [355] = {
    [sym_record_declaration] = STATE(384),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [356] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(318),
    [anon_sym_SEMI_SEMI] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(458),
    [anon_sym_type] = ACTIONS(458),
    [anon_sym_and] = ACTIONS(458),
    [anon_sym_let] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [357] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(763),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [358] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [359] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(400),
    [anon_sym_module] = ACTIONS(402),
    [anon_sym_type] = ACTIONS(402),
    [anon_sym_EQ] = ACTIONS(400),
    [anon_sym_and] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_constraint] = ACTIONS(402),
    [anon_sym_end] = ACTIONS(402),
    [anon_sym_DASH_GT] = ACTIONS(400),
    [sym_identifier] = ACTIONS(404),
    [sym_comment] = ACTIONS(26),
  },
  [360] = {
    [sym__type_identifier] = STATE(387),
    [sym_identifier] = ACTIONS(765),
    [sym_comment] = ACTIONS(26),
  },
  [361] = {
    [sym__type] = STATE(388),
    [sym_parenthesized_type] = STATE(314),
    [sym_function_type] = STATE(314),
    [sym_type_variable] = STATE(314),
    [sym_constructed_type] = STATE(314),
    [sym_qualified_type_identifier] = STATE(314),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(314),
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [sym_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(26),
  },
  [362] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(408),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_type] = ACTIONS(410),
    [anon_sym_EQ] = ACTIONS(408),
    [anon_sym_and] = ACTIONS(410),
    [anon_sym_let] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_constraint] = ACTIONS(410),
    [anon_sym_end] = ACTIONS(410),
    [anon_sym_DASH_GT] = ACTIONS(408),
    [sym_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(26),
  },
  [363] = {
    [sym__type] = STATE(389),
    [sym_parenthesized_type] = STATE(314),
    [sym_function_type] = STATE(314),
    [sym_type_variable] = STATE(314),
    [sym_constructed_type] = STATE(314),
    [sym_qualified_type_identifier] = STATE(314),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(314),
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [sym_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(26),
  },
  [364] = {
    [aux_sym_value_definition_repeat1] = STATE(391),
    [anon_sym_and] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(767),
    [sym_comment] = ACTIONS(26),
  },
  [365] = {
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_DASH_GT] = ACTIONS(584),
    [sym_comment] = ACTIONS(26),
  },
  [366] = {
    [sym_qualified_type_identifier] = STATE(178),
    [sym_qualified_identifier] = STATE(123),
    [sym__type_identifier] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(676),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(26),
  },
  [367] = {
    [sym__expression] = STATE(276),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(614),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [368] = {
    [aux_sym_value_definition_repeat1] = STATE(278),
    [anon_sym_and] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(769),
    [sym_comment] = ACTIONS(26),
  },
  [369] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_val] = ACTIONS(503),
    [anon_sym_module] = ACTIONS(503),
    [anon_sym_type] = ACTIONS(503),
    [anon_sym_open] = ACTIONS(503),
    [anon_sym_include] = ACTIONS(503),
    [anon_sym_end] = ACTIONS(503),
    [anon_sym_DASH_GT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [370] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [371] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(507),
    [anon_sym_val] = ACTIONS(509),
    [anon_sym_module] = ACTIONS(509),
    [anon_sym_type] = ACTIONS(509),
    [anon_sym_open] = ACTIONS(509),
    [anon_sym_include] = ACTIONS(509),
    [anon_sym_end] = ACTIONS(509),
    [anon_sym_DASH_GT] = ACTIONS(507),
    [sym_identifier] = ACTIONS(511),
    [sym_comment] = ACTIONS(26),
  },
  [372] = {
    [sym_qualified_type_identifier] = STATE(338),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(338),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_val] = ACTIONS(515),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_open] = ACTIONS(515),
    [anon_sym_include] = ACTIONS(515),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(698),
    [sym_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [373] = {
    [sym__module_type] = STATE(393),
    [sym_signature] = STATE(75),
    [sym_functor_module_type] = STATE(75),
    [sym_shorthand_functor_module_type] = STATE(75),
    [sym_qualified_type_identifier] = STATE(75),
    [sym_qualified_identifier] = STATE(285),
    [sym__type_identifier] = STATE(75),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(624),
    [sym_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [374] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(546),
    [anon_sym_val] = ACTIONS(546),
    [anon_sym_module] = ACTIONS(546),
    [anon_sym_type] = ACTIONS(546),
    [anon_sym_open] = ACTIONS(546),
    [anon_sym_include] = ACTIONS(546),
    [anon_sym_end] = ACTIONS(546),
    [anon_sym_DASH_GT] = ACTIONS(700),
    [sym_comment] = ACTIONS(26),
  },
  [375] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(586),
    [anon_sym_val] = ACTIONS(586),
    [anon_sym_module] = ACTIONS(586),
    [anon_sym_type] = ACTIONS(586),
    [anon_sym_open] = ACTIONS(586),
    [anon_sym_include] = ACTIONS(586),
    [anon_sym_and] = ACTIONS(586),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(586),
    [sym_comment] = ACTIONS(26),
  },
  [376] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(394),
    [anon_sym_SEMI_SEMI] = ACTIONS(586),
    [anon_sym_val] = ACTIONS(586),
    [anon_sym_module] = ACTIONS(586),
    [anon_sym_type] = ACTIONS(586),
    [anon_sym_open] = ACTIONS(586),
    [anon_sym_include] = ACTIONS(586),
    [anon_sym_and] = ACTIONS(586),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(586),
    [sym_comment] = ACTIONS(26),
  },
  [377] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_val] = ACTIONS(503),
    [anon_sym_module] = ACTIONS(503),
    [anon_sym_type] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_open] = ACTIONS(503),
    [anon_sym_include] = ACTIONS(503),
    [anon_sym_and] = ACTIONS(503),
    [anon_sym_constraint] = ACTIONS(503),
    [anon_sym_end] = ACTIONS(503),
    [anon_sym_DASH_GT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [378] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [379] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(507),
    [anon_sym_val] = ACTIONS(509),
    [anon_sym_module] = ACTIONS(509),
    [anon_sym_type] = ACTIONS(509),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_open] = ACTIONS(509),
    [anon_sym_include] = ACTIONS(509),
    [anon_sym_and] = ACTIONS(509),
    [anon_sym_constraint] = ACTIONS(509),
    [anon_sym_end] = ACTIONS(509),
    [anon_sym_DASH_GT] = ACTIONS(507),
    [sym_identifier] = ACTIONS(511),
    [sym_comment] = ACTIONS(26),
  },
  [380] = {
    [sym_qualified_type_identifier] = STATE(351),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(351),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_val] = ACTIONS(515),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_EQ] = ACTIONS(513),
    [anon_sym_open] = ACTIONS(515),
    [anon_sym_include] = ACTIONS(515),
    [anon_sym_and] = ACTIONS(515),
    [anon_sym_constraint] = ACTIONS(515),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(711),
    [sym_identifier] = ACTIONS(713),
    [sym_comment] = ACTIONS(26),
  },
  [381] = {
    [sym_qualified_type_identifier] = STATE(351),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(351),
    [anon_sym_SEMI_SEMI] = ACTIONS(596),
    [anon_sym_val] = ACTIONS(598),
    [anon_sym_module] = ACTIONS(598),
    [anon_sym_type] = ACTIONS(598),
    [anon_sym_open] = ACTIONS(598),
    [anon_sym_include] = ACTIONS(598),
    [anon_sym_and] = ACTIONS(598),
    [anon_sym_constraint] = ACTIONS(598),
    [anon_sym_end] = ACTIONS(598),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym_identifier] = ACTIONS(713),
    [sym_comment] = ACTIONS(26),
  },
  [382] = {
    [sym__module] = STATE(248),
    [sym_functor_module] = STATE(80),
    [sym_functor_application_module] = STATE(80),
    [sym_struct_module] = STATE(80),
    [sym_qualified_identifier] = STATE(78),
    [anon_sym_functor] = ACTIONS(644),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [383] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(318),
    [anon_sym_SEMI_SEMI] = ACTIONS(586),
    [anon_sym_module] = ACTIONS(586),
    [anon_sym_type] = ACTIONS(586),
    [anon_sym_and] = ACTIONS(586),
    [anon_sym_let] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(586),
    [sym_comment] = ACTIONS(26),
  },
  [384] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(396),
    [anon_sym_SEMI_SEMI] = ACTIONS(586),
    [anon_sym_module] = ACTIONS(586),
    [anon_sym_type] = ACTIONS(586),
    [anon_sym_and] = ACTIONS(586),
    [anon_sym_let] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(586),
    [sym_comment] = ACTIONS(26),
  },
  [385] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_module] = ACTIONS(503),
    [anon_sym_type] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_and] = ACTIONS(503),
    [anon_sym_let] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_constraint] = ACTIONS(503),
    [anon_sym_end] = ACTIONS(503),
    [anon_sym_DASH_GT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [386] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(78),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_constraint] = ACTIONS(80),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(26),
  },
  [387] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(507),
    [anon_sym_module] = ACTIONS(509),
    [anon_sym_type] = ACTIONS(509),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_and] = ACTIONS(509),
    [anon_sym_let] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_constraint] = ACTIONS(509),
    [anon_sym_end] = ACTIONS(509),
    [anon_sym_DASH_GT] = ACTIONS(507),
    [sym_identifier] = ACTIONS(511),
    [sym_comment] = ACTIONS(26),
  },
  [388] = {
    [sym_qualified_type_identifier] = STATE(362),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(362),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_EQ] = ACTIONS(513),
    [anon_sym_and] = ACTIONS(515),
    [anon_sym_let] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_constraint] = ACTIONS(515),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(729),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(26),
  },
  [389] = {
    [sym_qualified_type_identifier] = STATE(362),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(362),
    [anon_sym_SEMI_SEMI] = ACTIONS(596),
    [anon_sym_module] = ACTIONS(598),
    [anon_sym_type] = ACTIONS(598),
    [anon_sym_and] = ACTIONS(598),
    [anon_sym_let] = ACTIONS(598),
    [anon_sym_LBRACK] = ACTIONS(596),
    [anon_sym_constraint] = ACTIONS(598),
    [anon_sym_end] = ACTIONS(598),
    [anon_sym_DASH_GT] = ACTIONS(773),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(26),
  },
  [390] = {
    [sym__expression] = STATE(276),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(658),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [391] = {
    [aux_sym_value_definition_repeat1] = STATE(278),
    [anon_sym_and] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(775),
    [sym_comment] = ACTIONS(26),
  },
  [392] = {
    [sym__expression] = STATE(331),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(614),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [393] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(640),
    [anon_sym_val] = ACTIONS(640),
    [anon_sym_module] = ACTIONS(640),
    [anon_sym_type] = ACTIONS(640),
    [anon_sym_open] = ACTIONS(640),
    [anon_sym_include] = ACTIONS(640),
    [anon_sym_end] = ACTIONS(640),
    [anon_sym_DASH_GT] = ACTIONS(700),
    [sym_comment] = ACTIONS(26),
  },
  [394] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(303),
    [anon_sym_SEMI_SEMI] = ACTIONS(672),
    [anon_sym_val] = ACTIONS(672),
    [anon_sym_module] = ACTIONS(672),
    [anon_sym_type] = ACTIONS(672),
    [anon_sym_open] = ACTIONS(672),
    [anon_sym_include] = ACTIONS(672),
    [anon_sym_and] = ACTIONS(672),
    [anon_sym_constraint] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(672),
    [sym_comment] = ACTIONS(26),
  },
  [395] = {
    [sym__type] = STATE(399),
    [sym_parenthesized_type] = STATE(299),
    [sym_function_type] = STATE(299),
    [sym_type_variable] = STATE(299),
    [sym_constructed_type] = STATE(299),
    [sym_qualified_type_identifier] = STATE(299),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(299),
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [sym_identifier] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
  },
  [396] = {
    [sym_type_constraint] = STATE(50),
    [aux_sym_type_constructor_definition_repeat1] = STATE(318),
    [anon_sym_SEMI_SEMI] = ACTIONS(672),
    [anon_sym_module] = ACTIONS(672),
    [anon_sym_type] = ACTIONS(672),
    [anon_sym_and] = ACTIONS(672),
    [anon_sym_let] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_constraint] = ACTIONS(554),
    [anon_sym_end] = ACTIONS(672),
    [sym_comment] = ACTIONS(26),
  },
  [397] = {
    [sym__type] = STATE(400),
    [sym_parenthesized_type] = STATE(314),
    [sym_function_type] = STATE(314),
    [sym_type_variable] = STATE(314),
    [sym_constructed_type] = STATE(314),
    [sym_qualified_type_identifier] = STATE(314),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(314),
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [sym_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(26),
  },
  [398] = {
    [sym__expression] = STATE(331),
    [sym_qualified_identifier] = STATE(114),
    [sym_let_expression] = STATE(115),
    [anon_sym_let] = ACTIONS(658),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [399] = {
    [sym_qualified_type_identifier] = STATE(351),
    [sym_qualified_identifier] = STATE(300),
    [sym__type_identifier] = STATE(351),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_val] = ACTIONS(515),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_open] = ACTIONS(515),
    [anon_sym_include] = ACTIONS(515),
    [anon_sym_and] = ACTIONS(515),
    [anon_sym_constraint] = ACTIONS(515),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym_identifier] = ACTIONS(713),
    [sym_comment] = ACTIONS(26),
  },
  [400] = {
    [sym_qualified_type_identifier] = STATE(362),
    [sym_qualified_identifier] = STATE(315),
    [sym__type_identifier] = STATE(362),
    [anon_sym_SEMI_SEMI] = ACTIONS(513),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_and] = ACTIONS(515),
    [anon_sym_let] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_constraint] = ACTIONS(515),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(773),
    [sym_identifier] = ACTIONS(731),
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
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_identifier, 1, .alias_sequence_id = 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_identifier, 1, .alias_sequence_id = 1),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_identifier, 1, .alias_sequence_id = 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_definition, 2),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameters, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_open_directive, 2),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_directive, 2),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 2),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [122] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(2),
  [125] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(3),
  [128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(4),
  [131] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(5),
  [134] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(6),
  [137] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(7),
  [140] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(8),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_type_specification, 3),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_specification_repeat1, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_specification_repeat1, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_definition, 3),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 2),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 1),
  [195] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [198] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 3),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 2),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 2),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 1),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 1),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_val_specification, 4),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_val_specification, 4),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_specification, 4),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__module_type, 1),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__module, 1),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__module, 1),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_definition, 4),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_specification_repeat1, 2),
  [291] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_specification_repeat1, 2), SHIFT_REPEAT(38),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 3),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_parameters_repeat1, 3),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [300] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(44),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 3),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_equation, 2),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_equation, 2),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2),
  [329] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(48),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_identifier, 3),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_identifier, 3),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 4),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 3),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 3),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shorthand_labeled_parameter, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shorthand_labeled_parameter, 2),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2),
  [356] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(24),
  [359] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(58),
  [362] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(26),
  [365] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(28),
  [368] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(28),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_value_definition_repeat1, 2),
  [375] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(61),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_binding, 3),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_binding, 3),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_variable, 2),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructed_type, 2),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_type_specification, 5),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_signature, 2),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_module, 2),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_module, 2),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 1),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_specification, 5),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 4),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 2),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_pattern_repeat1, 2),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 4),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 4),
  [482] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_pattern_repeat1, 2), SHIFT_REPEAT(105),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_binding, 4),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_binding, 4),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 5),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_type, 3),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_type, 3),
  [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_type, 3),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_identifier, 3),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_identifier, 3),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_identifier, 3),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3, .fragile = true),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3, .fragile = true),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_signature, 3),
  [531] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(131),
  [534] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(132),
  [537] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(133),
  [540] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(5),
  [543] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(6),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shorthand_functor_module_type, 3, .fragile = true),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_module, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_module, 3),
  [568] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(140),
  [571] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(141),
  [574] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(142),
  [577] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(8),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 5),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 3),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constraint, 4),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_constraint, 4),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_pattern, 5),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_pattern, 5),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_parameter, 4),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_parameter, 4),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(282),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_module_type, 4, .fragile = true),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_module, 4),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_application_module, 4),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_functor_application_module, 4),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_parameter, 5),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_parameter, 5),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 6),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 4),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_declaration_repeat1, 2),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [684] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_declaration_repeat1, 2), SHIFT_REPEAT(329),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_expression, 4),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_expression, 4),
  [691] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(227),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [702] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(240),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(296),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [717] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(244),
  [720] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(250),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(311),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [735] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(254),
  [738] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(259),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 5),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_expression, 5),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_expression, 5),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
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
