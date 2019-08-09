module.exports = grammar({
  name: 'prisma',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.datasource_definition,
      $.model_definition,
      $.type_definition
    ),

    datasource_definition: $ => seq(
      'datasource',
      $.identifier,
      $.datasource_block,
    ),

    type_definition: $ => seq(
      'type',
      $.identifier,
      $.identifier,
      $.namespace
    ),

    model_definition: $ => seq(
      'model',
      $.identifier,
      $.model_block,
    ),

    datasource_block: $ => seq(
      '{',
      repeat($._datasource_statement),
      '}'
    ),

    model_block: $ => seq(
      '{',
      repeat($._model_statement),
      '}'
    ),

    _model_statement: $ => choice(
      $.column_statement,
      $.block_attribute,
    ),

    column_statement: $ => seq(
      $.identifier,
      $._column_value,
      optional($.namespace),
      optional($.namespace),
      $.new_line,
    ),

    _datasource_statement: $ => seq(
      $.identifier,
      $.assignation,
      $.assignee,
    ),

    assignee: $ => choice(
      $.string_value,
      $._environment_variable,
      $.boolean
    ),

    namespace: $ => seq(
      $.namespace_name,
      optional($.namespace_arguments),
    ),

    namespace_name: $ => token(
      seq(/@@?/, /([a-z_]+\.?([a-z_]+)?)/)
    ),

    namespace_arguments: $ => seq(
      '(',
      choice(
        $.string_value,
        $.number,
        $._namespace_function_call
      ),
      ')'
    ),

    _namespace_function_call: $ => seq(
      $.identifier,
      $.namespace_function_call
    ),

    namespace_function_call: $ => seq(
      '(',
      // Could this have arguments? If so, then we need a definition for a generic function call.
      ')'
    ),

    name_pattern: $ => seq(
      field('key', $.identifier),
      ':',
      $.string_value
    ),

    block_attribute: $ => seq(
      $.block_name,
      optional($._call_signature)
    ),

    block_name: $ => token(
      seq('@@', /([a-zA-Z-_]+\.?([a-zA-Z0-9-_]+)?)/)
    ),

    _environment_variable: $ => seq(
      $.identifier,
      $.dot,
      $.identifier
    ),

    _call_signature: $ => seq(
      $.formal_parameters,
      // field('parameters', $.formal_parameters)
    ),

    formal_parameters: $ => seq(
      '(',
      optional(seq(
        commaSep1($._formal_parameter)
      )),
      ')'
    ),

    _formal_parameter: $ => choice(
      $.identifier,
      $.string_value,
      $.array,
      // $.name_pattern,
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-zA-Z-_][a-zA-Z0-9-_]*/,

    column_value: $ => /[a-zA-Z-_][a-zA-Z0-9-_]*\??/,

    _column_value: $ => seq(
      $.column_value,
      optional($.array)
    ),

    string_value: $ => token(choice(
      seq("'", /([^'\n]|\\(.|\n))*/, "'"),
      seq('"', /([^"\n]|\\(.|\n))*/, '"')
    )),

    number: $ => /\d+/,

    assignation: $ => '=',

    dot: $ => '.',

    array: $ => seq(
      '[',
      commaSep(optional(
        $._expression
      )),
      ']'
    ),

    new_line: $ => seq(
      '\n',
    ),

    boolean: $ => choice(
      $.true,
      $.false
    ),

    true: $ => 'true',
    false: $ => 'false'
  }
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
