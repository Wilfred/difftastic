'use strict';

// Precence based on order. Indirection overkill but I couldn't help myself.
// https://docs.hhvm.com/hack/expressions-and-operators/operator-precedence
[
  [prec.left, 'qualified'],
  [prec.left, 'subscript'],
  [prec.left, 'select'],
  [prec, 'new'],
  [prec.left, 'paren'],
  [prec, 'clone'],
  [prec.right, 'await', 'postfix'],
  [prec.right, '**', 'cast', 'error', 'prefix'],
  [prec.left, 'is', 'as'],
  [prec.right, 'unary'],
  [prec.left, '*', '/', '%'],
  [prec.left, '+', '-', '.'],
  [prec.left, '<<', '>>'],
  [prec, '<', '>', '<=', '>=', '<=>'],
  [prec, '==', '!=', '===', '!=='],
  [prec.left, '&&'],
  [prec.left, '^'],
  [prec.left, '||'],
  [prec.left, '&'],
  [prec.left, '|'],
  [prec.right, '??'],
  [prec.left, 'ternary'],
  [prec.left, '|>'],
  [prec.right, 'assignment'],
  [prec.right, 'print'],
  [prec.left, 'include', 'require'],
]
  .reverse()
  .forEach(([_prec, ...names], index) =>
    names.forEach(name => {
      prec[name] = rule => _prec(index, rule);
    }),
  );

const rules = {
  script: $ => seq(opt(/<\?[hH][hH]/), rep($._statement)),

  identifier: $ => /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/,

  variable: $ => seq('$', $.identifier),

  pipe_variable: $ => '$$',

  qualified_identifier: $ =>
    prec.left(
      choice(
        prec.qualified(
          choice(
            seq(seq.rep1('\\', $.identifier), opt('\\')),
            seq(seq.rep1($.identifier, '\\'), opt($.identifier)),
            '\\',
          ),
        ),
        $.identifier,
      ),
    ),

  scoped_identifier: $ =>
    seq(
      choice(
        $.qualified_identifier,
        $.variable,
        $.scope_identifier,
        $.xhp_class_identifier,
      ),
      '::',
      choice($.identifier, $.variable),
    ),

  scope_identifier: $ => choice('self', 'parent', 'static'),

  _variablish: $ =>
    choice(
      $.variable,
      $.pipe_variable,
      $.list_expression,
      $.subscript_expression,
      $.qualified_identifier,
      $.parenthesized_expression,
      $.call_expression,
      $.scoped_identifier,
      $.scope_identifier,
      $.selection_expression,
      $.xhp_class_identifier,
    ),

  _statement: $ =>
    choice(
      $._declaration,

      $.compound_statement,
      $.empty_statement,
      $.expression_statement,

      $.return_statement,
      $.break_statement,
      $.continue_statement,
      $.throw_statement,
      $.echo_statement,
      $.unset_statement,

      $.use_statement,
      $.if_statement,
      $.while_statement,
      $.do_statement,
      $.for_statement,
      $.switch_statement,
      $.foreach_statement,
      $.try_statement,
      $.concurrent_statement,
      $.using_statement,
    ),

  _declaration: $ =>
    choice(
      $.function_declaration,
      $.class_declaration,
      $.interface_declaration,
      $.trait_declaration,
      $.alias_declaration,
      $.enum_declaration,
      $.namespace_declaration,
      $.const_declaration,
    ),

  _expression: $ =>
    choice(
      $.varray,
      $.darray,
      $.vec,
      $.keyset,
      $.dict,
      $.tuple,
      $.shape,
      $.collection,
      $._literal,
      $._variablish,
      $.parenthesized_expression,
      $.binary_expression,
      $.prefix_unary_expression,
      $.assignment_expression,
      $.augmented_assignment_expression,
      $.is_expression,
      $.as_expression,
      $.fun_expression,
      $.await_expression,
      $.awaitable_expression,
      $.yield_expression,
      $.error_control_expression,
      $.clone_expression,
      $.cast_expression,
      $.print_expression,
      $.update_expression,
      $.ternary_expression,
      $.lambda_expression,
      $.call_expression,
      $.selection_expression,
      $.new_expression,
      $.include_expression,
      $.require_expression,
      $.anonymous_function_expression,
      $.xhp_expression,
    ),

  // Statements

  empty_statement: $ => ';',

  expression_statement: $ => seq($._expression, ';'),

  compound_statement: $ => seq('{', rep($._statement), '}'),

  return_statement: $ => seq('return', opt($._expression), ';'),

  break_statement: $ => seq('break', opt($._expression), ';'),

  continue_statement: $ => seq('continue', opt($._expression), ';'),

  throw_statement: $ => seq('throw', $._expression, ';'),

  echo_statement: $ => seq('echo', com($._expression), ';'),

  unset_statement: $ => seq('unset', '(', com.opt($._variablish), ')', ';'),

  concurrent_statement: $ => seq('concurrent', $.compound_statement),

  use_statement: $ =>
    seq(
      'use',
      choice(
        com(opt($.use_type), $.use_clause),
        seq(
          opt($.use_type),
          $.qualified_identifier,
          '{',
          com($.use_clause, ','),
          '}',
        ),
      ),
      ';',
    ),

  use_type: $ => choice('namespace', 'function', 'type', 'const'),

  use_clause: $ =>
    seq($.qualified_identifier, field('alias', seq.opt('as', $.identifier))),

  if_statement: $ =>
    prec.right(
      -1,
      seq(
        'if',
        field('condition', $.parenthesized_expression),
        field('body', $._statement),
        rep(
          seq(
            // Match else-if and elseif so long if-statements don't result in deeply nested
            // nodes. Are there drawbacks?
            choice('elseif', seq('else', 'if')),
            field('condition', $.parenthesized_expression),
            field('body', $._statement),
          ),
        ),
        field('else', seq.opt('else', $._statement)),
      ),
    ),

  switch_statement: $ =>
    seq(
      'switch',
      field('value', $.parenthesized_expression),
      seq('{', choice.rep($.switch_case, $.switch_default), '}'),
    ),

  switch_case: $ =>
    seq('case', field('value', $._expression), ':', rep($._statement)),

  switch_default: $ => seq('default', ':', rep($._statement)),

  foreach_statement: $ =>
    seq(
      'foreach',
      '(',
      field('collection', $._expression),
      token(prec.dynamic(1, 'as')),
      field('key', seq.opt($._variablish, '=>')),
      field('value', $._variablish),
      ')',
      field('body', $._statement),
    ),

  while_statement: $ =>
    seq(
      'while',
      field('condition', $.parenthesized_expression),
      field('body', $._statement),
    ),

  do_statement: $ =>
    seq(
      'do',
      field('body', $._statement),
      'while',
      field('condition', $.parenthesized_expression),
      ';',
    ),

  for_statement: $ =>
    seq(
      'for',
      '(',
      com.opt($._expression),
      ';',
      com.opt($._expression),
      ';',
      com.opt($._expression),
      ')',
      field('body', $._statement),
    ),

  try_statement: $ =>
    seq(
      'try',
      field('body', $.compound_statement),
      choice.rep1($.catch_clause, $.finally_clause),
    ),

  catch_clause: $ =>
    seq(
      'catch',
      '(',
      field('type', $._type),
      field('name', $.variable),
      ')',
      field('body', $.compound_statement),
    ),

  finally_clause: $ => seq('finally', field('body', $.compound_statement)),

  using_statement: $ =>
    prec.right(
      -1,
      seq(
        alias.opt('await', $.await_modifier),
        'using',
        choice(
          com($._expression),
          seq('(', com($._expression), ')', $.compound_statement),
        ),
      ),
    ),

  // Literals

  _literal: $ => choice($.string, $.integer, $.float, $.true, $.false, $.null),

  float: $ => /(\d+\.\d*|\d*\.\d+)([eE][+-]?\d+)?/,

  integer: $ =>
    token(
      choice(
        // Integer
        /[1-9]\d*/,
        // Octal - Hack seems to accept non octal literals like 09. Intentional?
        /0[0-7]*/,
        // Hex
        /0[xX][0-9a-fA-F]+/,
        // Binary
        /0[bB][01]+/,
      ),
    ),

  // Tree-sitter confuses boolean /(true|false)/ with identifier. Don't know why.
  true: $ => choice('true', 'True', 'TRUE'),
  false: $ => choice('false', 'False', 'FALSE'),

  null: $ => choice('null', 'Null', 'NULL'),

  string: $ =>
    token(
      choice(
        /(re|b)?'(\\'|\\\\|\\?[^'\\])*'/,
        /(re|b)?"(\\"|\\\\|\\?[^"\\])*"/,
      ),
    ),

  // Types

  _type: $ =>
    choice(
      $.type_specifier,
      $.type_constant,
      $.shape_type_specifier,
      $.function_type_specifier,
      $.tuple_type_specifier,
    ),

  type_specifier: $ =>
    seq(
      rep($._type_modifier),
      choice(
        $._primitive_type,
        $.qualified_identifier,
        $._collection_type,
        $.xhp_class_identifier,
      ),
      opt($.type_arguments),
    ),

  _type_modifier: $ =>
    choice(alias('?', $.nullable_modifier), alias('~', $.like_modifier)),

  tuple_type_specifier: $ =>
    seq(rep($._type_modifier), '(', com($._type, ','), ')'),

  function_type_specifier: $ =>
    seq(
      rep($._type_modifier),
      '(',
      'function',
      '(',
      com.opt($._type, alias.opt('...', $.variadic_modifier)),
      ')',
      ':',
      field('return_type', $._type),
      ')',
    ),

  shape_type_specifier: $ =>
    seq(
      rep($._type_modifier),
      'shape',
      '(',
      com(
        choice(
          alias($._shape_field_specifier, $.field_specifier),
          alias('...', $.open_modifier),
        ),
        ',',
      ),
      ')',
    ),

  _shape_field_specifier: $ =>
    seq(
      alias.opt('?', $.optional_modifier),
      choice($.string, $.scoped_identifier),
      '=>',
      $._type,
    ),

  type_constant: $ =>
    seq(rep($._type_modifier), alias($._type_constant, $.type_constant)),

  _type_constant: $ =>
    seq(
      choice($.qualified_identifier, alias($._type_constant, $.type_constant)),
      '::',
      $.identifier,
    ),

  _collection_type: $ =>
    choice('array', 'varray', 'darray', 'vec', 'dict', 'keyset'),

  _primitive_type: $ =>
    choice(
      'bool',
      'float',
      'int',
      'string',
      'arraykey',
      'void',
      'nonnull',
      $.null,
      'mixed',
      'dynamic',
      'noreturn',
    ),

  type_arguments: $ => seq('<', com($._type, ','), '>'),

  type_parameters: $ => seq('<', com($.type_parameter, ','), '>'),

  type_parameter: $ =>
    seq(
      opt($.attribute_modifier),
      choice.opt(
        alias('+', $.covariant_modifier),
        alias('-', $.contravariant_modifier),
        alias('reify', $.reify_modifier),
      ),
      field('name', $.identifier),
      seq.opt(
        field('constraint_operator', choice('as', 'super')),
        field('constraint_type', $._type),
      ),
    ),

  where_clause: $ => seq('where', seq.rep1($.where_constraint, opt(','))),

  where_constraint: $ =>
    seq(
      // Weird that Hack allows the left operand to be a full on type.
      field('constraint_left_type', $._type),
      field('constraint_operator', choice('as', 'super', '=')),
      field('constraint_right_type', $._type),
    ),

  // Collections

  element_initializer: $ => seq($._expression, '=>', $._expression),

  varray: $ =>
    seq('varray', opt($.type_arguments), '[', com.opt($._expression, ','), ']'),

  vec: $ =>
    seq('vec', opt($.type_arguments), '[', com.opt($._expression, ','), ']'),

  darray: $ =>
    seq(
      'darray',
      opt($.type_arguments),
      '[',
      com.opt($.element_initializer, ','),
      ']',
    ),

  dict: $ =>
    seq(
      'dict',
      opt($.type_arguments),
      '[',
      com.opt($.element_initializer, ','),
      ']',
    ),

  keyset: $ =>
    seq('keyset', opt($.type_arguments), '[', com.opt($._expression, ','), ']'),

  tuple: $ => seq('tuple', '(', com.opt($._expression, ','), ')'),

  shape: $ => seq('shape', '(', com.opt($.field_initializer, ','), ')'),

  field_initializer: $ =>
    seq(choice($.string, $.scoped_identifier), '=>', $._expression),

  collection: $ =>
    seq(
      $.identifier,
      '{',
      choice.opt(com($._expression, ','), com($.element_initializer, ',')),
      '}',
    ),

  // Expressions

  include_expression: $ =>
    prec.include(seq(choice('include', 'include_once'), $._expression)),

  require_expression: $ =>
    prec.include(seq(choice('require', 'require_once'), $._expression)),

  parenthesized_expression: $ => seq('(', $._expression, ')'),

  subscript_expression: $ =>
    prec.subscript(seq($._expression, '[', opt($._expression), ']')),

  list_expression: $ => seq('list', '(', com($._variablish, ','), ')'),

  binary_expression: $ =>
    choice(
      ...[
        '|>',
        '??',
        '||',
        '&&',
        '|',
        '^',
        '&',
        '==',
        '!=',
        '===',
        '!==',
        '<',
        '>',
        '<=',
        '>=',
        '<=>',
        '<<',
        '>>',
        '+',
        '-',
        '.',
        '*',
        '/',
        '%',
        '**',
      ].map(operator =>
        prec[operator](
          seq(
            field('left', $._expression),
            field('operator', operator),
            field('right', $._expression),
          ),
        ),
      ),
    ),

  prefix_unary_expression: $ =>
    prec.unary(
      choice(
        seq(field('operator', '!'), field('operand', $._expression)),
        seq(field('operator', '~'), field('operand', $._expression)),
        seq(field('operator', '-'), field('operand', $._expression)),
        seq(field('operator', '+'), field('operand', $._expression)),
      ),
    ),

  assignment_expression: $ =>
    prec.assignment(
      seq(field('left', $._variablish), '=', field('right', $._expression)),
    ),

  augmented_assignment_expression: $ =>
    prec.assignment(
      seq(
        field('left', $._variablish),
        field(
          'operator',
          choice(
            '??=',
            '.=',
            '|=',
            '^=',
            '&=',
            '<<=',
            '>>=',
            '+=',
            '-=',
            '*=',
            '/=',
            '%=',
            '**=',
          ),
        ),
        field('right', $._expression),
      ),
    ),

  fun_expression: $ =>
    seq(
      'fun',
      '(',
      choice(
        seq("'", field('name', $.qualified_identifier), "'"),
        seq('"', field('name', $.qualified_identifier), '"'),
      ),
      ')',
    ),

  is_expression: $ =>
    prec.is(seq(field('left', $._expression), 'is', field('right', $._type))),

  as_expression: $ =>
    prec.as(
      seq(
        field('left', $._expression),
        choice(token(prec.dynamic(-1, 'as')), '?as'),
        field('right', $._type),
      ),
    ),

  print_expression: $ => prec.print(seq('print', $._expression)),

  clone_expression: $ => prec.clone(seq('clone', $._expression)),

  await_expression: $ => prec.await(seq('await', $._expression)),

  awaitable_expression: $ => seq('async', $.compound_statement),

  yield_expression: $ =>
    prec.right(seq('yield', choice($._expression, $.element_initializer))),

  error_control_expression: $ => prec.error(seq('@', $._expression)),

  update_expression: $ =>
    choice(
      prec.postfix(seq($._expression, choice('++', '--'))),
      prec.prefix(seq(choice('++', '--'), $._expression)),
    ),

  cast_expression: $ =>
    prec.cast(
      seq(
        '(',
        field('type', choice('int', 'float', 'string', 'bool')),
        ')',
        field('value', $._expression),
      ),
    ),

  ternary_expression: $ =>
    prec.ternary(
      seq(
        field('condition', $._expression),
        '?',
        field('body', opt($._expression)),
        ':',
        field('alternative', $._expression),
      ),
    ),

  lambda_expression: $ =>
    seq(
      $._lambda_expression_header,
      field('body', choice($._expression, $.compound_statement)),
    ),

  _callable_lambda_expression: $ =>
    prec.right(
      1,
      seq(
        $._lambda_expression_header,
        field('body', choice($.awaitable_expression, $.compound_statement)),
      ),
    ),

  _lambda_expression_header: $ =>
    seq(
      alias.opt('async', $.async_modifier),
      choice(
        // Make a single-parameter lambda node look like any other lambda node.
        alias($._single_parameter_parameters, $.parameters),
        seq($.parameters, seq.opt(':', field('return_type', $._type))),
      ),
      '==>',
    ),

  _single_parameter_parameters: $ => alias($._single_parameter, $.parameter),

  _single_parameter: $ => field('name', $.variable),

  call_expression: $ =>
    seq(
      field(
        'function',
        choice(
          alias($._callable_lambda_expression, $.lambda_expression),
          $.qualified_identifier,
          $.variable,
          $.pipe_variable,
          $.subscript_expression,
          $.parenthesized_expression,
          $.scoped_identifier,
          $.selection_expression,
          $.call_expression,
          $._collection_type,
        ),
      ),
      opt($.type_arguments),
      $.arguments,
    ),

  new_expression: $ =>
    prec.new(seq('new', $._variablish, opt($.type_arguments), $.arguments)),

  arguments: $ => seq('(', com.opt($.argument, ','), ')'),

  argument: $ =>
    seq(
      choice.opt(
        alias('inout', $.inout_modifier),
        alias('...', $.variadic_modifier),
      ),
      $._expression,
    ),

  selection_expression: $ =>
    prec.select(
      seq(
        $._variablish,
        choice(alias('?->', $.safe_modifier), '->'),
        $._variablish,
      ),
    ),

  // Declarations

  alias_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      choice('type', 'newtype'),
      $.identifier,
      field('as', seq.opt('as', $._type)),
      opt($.type_parameters),
      '=',
      $._type,
      ';',
    ),

  function_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      $._function_declaration_header,
      field('body', $.compound_statement),
    ),

  _function_declaration_header: $ =>
    seq(
      alias.opt('async', $.async_modifier),
      'function',
      field('name', $.identifier),
      opt($.type_parameters),
      $.parameters,
      seq.opt(':', field('return_type', $._type)),
      opt($.where_clause),
    ),

  parameters: $ => prec.paren(seq('(', com.opt($.parameter, ','), ')')),

  parameter: $ =>
    seq(
      opt($.attribute_modifier),
      opt($.visibility_modifier),
      alias.opt('inout', $.inout_modifier),
      field('type', opt($._type)),
      alias.opt('...', $.variadic_modifier),
      field('name', $.variable),
      seq.opt('=', field('default_value', $._expression)),
    ),

  trait_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      'trait',
      field('name', $.identifier),
      opt($.type_parameters),
      opt($.implements_clause),
      opt($.where_clause),
      field('body', $.member_declarations),
    ),

  interface_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      'interface',
      field('name', $.identifier),
      opt($.type_parameters),
      opt($.extends_clause),
      opt($.where_clause),
      field('body', $.member_declarations),
    ),

  class_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      opt($._class_modifier),
      opt($._class_modifier),
      'class',
      field('name', choice($.identifier, $.xhp_class_identifier)),
      opt($.type_parameters),
      opt($.extends_clause),
      opt($.implements_clause),
      opt($.where_clause),
      field('body', $.member_declarations),
    ),

  member_declarations: $ =>
    seq(
      '{',
      choice.rep(
        alias($._class_const_declaration, $.const_declaration),
        $.method_declaration,
        $.property_declaration,
        $.type_const_declaration,
        $.trait_use_clause,
        $.require_implements_clause,
        $.require_extends_clause,
        $.xhp_attribute_declaration,
        $.xhp_children_declaration,
        $.xhp_category_declaration,
      ),
      '}',
    ),

  trait_use_clause: $ =>
    seq(
      'use',
      com($._type),
      choice(
        seq(
          '{',
          seq.rep(choice($.trait_select_clause, $.trait_alias_clause), ';'),
          '}',
        ),
        ';',
      ),
    ),

  trait_select_clause: $ =>
    seq(
      $.qualified_identifier,
      '::',
      $.identifier,
      'insteadof',
      com($.qualified_identifier),
    ),

  trait_alias_clause: $ =>
    seq(
      $.identifier,
      'as',
      choice(
        seq($.visibility_modifier, opt($.identifier)),
        seq(opt($.visibility_modifier), $.identifier),
      ),
    ),

  extends_clause: $ => seq('extends', com($._type)),

  implements_clause: $ => seq('implements', com($._type)),

  require_extends_clause: $ => seq('require', 'extends', com($._type), ';'),

  require_implements_clause: $ =>
    seq('require', 'implements', com($._type), ';'),

  method_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      opt($._member_modifiers),
      $._function_declaration_header,
      choice(field('body', $.compound_statement), ';'),
    ),

  _class_const_declaration: $ =>
    seq(
      opt($._member_modifiers),
      'const',
      field('type', opt($._type)),
      com(alias($._class_const_declarator, $.const_declaration)),
      ';',
    ),

  _class_const_declarator: $ =>
    seq(
      field('name', $.identifier),
      field('value', seq.opt('=', $._expression)),
    ),

  type_const_declaration: $ =>
    seq(
      opt($._member_modifiers),
      'const',
      'type',
      field('name', $.identifier),
      field('as', seq.opt('as', $._type)),
      field('type', seq.opt('=', $._type)),
      ';',
    ),

  const_declaration: $ =>
    seq('const', field('type', opt($._type)), com($.const_declarator), ';'),

  const_declarator: $ =>
    seq(field('name', $.identifier), field('value', seq('=', $._expression))),

  property_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      opt($._member_modifiers),
      field('type', opt($._type)),
      com($.property_declarator),
      ';',
    ),

  property_declarator: $ =>
    seq(field('name', $.variable), field('value', seq.opt('=', $._expression))),

  enum_declaration: $ =>
    seq(
      'enum',
      field('name', $.identifier),
      ':',
      field('type', $._type),
      field('as', seq.opt('as', $._type)),
      '{',
      alias.rep($._enum_field_specifier, $.field_specifier),
      '}',
    ),

  _enum_field_specifier: $ =>
    seq($.identifier, '=', choice($.string, $.integer, $._variablish), ';'),

  namespace_declaration: $ =>
    seq(
      'namespace',
      choice(
        seq(field('name', $.qualified_identifier), ';'),
        seq(
          opt(field('name', $.qualified_identifier)),
          field('body', $.compound_statement),
        ),
      ),
    ),

  // Modifiers

  _member_modifiers: $ =>
    seq(
      $._member_modifier,
      opt($._member_modifier),
      opt($._member_modifier),
      opt($._member_modifier),
    ),

  _member_modifier: $ =>
    choice(
      $.visibility_modifier,
      $.static_modifier,
      $.abstract_modifier,
      $.final_modifier,
    ),

  _class_modifier: $ => choice($.abstract_modifier, $.final_modifier),

  final_modifier: $ => 'final',

  abstract_modifier: $ => 'abstract',

  static_modifier: $ => 'static',

  visibility_modifier: $ => choice('public', 'protected', 'private'),

  attribute_modifier: $ =>
    seq('<<', com($.qualified_identifier, opt($.arguments), ','), '>>'),

  // XHP

  xhp_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*([-:][a-zA-Z0-9_]+)*/,

  xhp_class_identifier: $ => /:[a-zA-Z_][a-zA-Z0-9_]*([-:][a-zA-Z0-9_]+)*/,

  xhp_category_identifier: $ => /%[a-zA-Z_][a-zA-Z0-9_]*([-:][a-zA-Z0-9_]+)*/,

  xhp_expression: $ =>
    choice(
      $.xhp_open_close,
      seq(
        $.xhp_open,
        rep(
          choice(
            $.xhp_string,
            $.xhp_comment,
            $.xhp_braced_expression,
            $.xhp_expression,
          ),
        ),
        $.xhp_close,
      ),
    ),

  xhp_comment: $ => /<!--(.|[\n\r])*-->/,

  xhp_string: $ => /[^<]+/,

  xhp_open: $ => seq('<', $.xhp_identifier, rep($.xhp_attribute), '>'),

  xhp_open_close: $ => seq('<', $.xhp_identifier, rep($.xhp_attribute), '/>'),

  xhp_close: $ => seq('</', $.xhp_identifier, '>'),

  xhp_attribute: $ =>
    choice(
      seq($.xhp_identifier, '=', choice($._literal, $.xhp_braced_expression)),
      choice($.xhp_braced_expression, $.xhp_spread_expression),
    ),

  xhp_braced_expression: $ => seq('{', $._expression, '}'),

  xhp_spread_expression: $ => seq('{', '...', $._expression, '}'),

  xhp_attribute_declaration: $ =>
    seq('attribute', com($.xhp_class_attribute), ';'),

  xhp_class_attribute: $ =>
    seq(
      field('type', choice($._type, $.xhp_enum_type)),
      field('name', opt($.xhp_identifier)),
      seq.opt('=', field('default', $._expression)),
      choice.opt('@required', '@lateinit'),
    ),

  xhp_enum_type: $ =>
    seq('enum', '{', com(choice($.string, $.integer), ','), '}'),

  xhp_category_declaration: $ =>
    seq('category', com($.xhp_category_identifier), ';'),

  xhp_children_declaration: $ =>
    seq('children', com($._xhp_attribute_expression), ';'),

  _xhp_attribute_expression: $ =>
    choice(
      $.xhp_identifier,
      $.xhp_class_identifier,
      $.xhp_category_identifier,
      alias($._xhp_binary_expression, $.binary_expression),
      alias($._xhp_postfix_unary_expression, $.postfix_unary_expression),
      alias($._xhp_parenthesized_expression, $.parenthesized_expression),
    ),

  _xhp_binary_expression: $ =>
    prec.left(
      seq($._xhp_attribute_expression, '|', $._xhp_attribute_expression),
    ),

  _xhp_postfix_unary_expression: $ =>
    prec(1, seq($._xhp_attribute_expression, choice('+', '*', '?'))),

  _xhp_parenthesized_expression: $ =>
    seq('(', com($._xhp_attribute_expression), ')'),

  // Misc

  comment: $ =>
    token(
      choice(
        seq('#', /.*/),
        seq('//', /.*/),
        seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
      ),
    ),

  // Future Deprecations

  anonymous_function_expression: $ =>
    seq(
      alias.opt('async', $.async_modifier),
      'function',
      $.parameters,
      seq.opt(':', field('return_type', $._type)),
      alias.opt($._anonymous_function_use_clause, $.use_clause),
      field('body', $.compound_statement),
    ),

  _anonymous_function_use_clause: $ =>
    seq('use', '(', com($.variable, ','), ')'),
};

/**
 * Comma separated rules. A ',' as the last argument indicates an optional trailing comma.
 */
function com(...rules) {
  if (rules[rules.length - 1] === ',') {
    rules.splice(-1, 1);
    return seq(...rules, repeat(seq(',', ...rules)), optional(','));
  } else {
    return seq(...rules, repeat(seq(',', ...rules)));
  }
}

[seq, choice, alias, com].forEach(func => {
  func.opt = (...args) => optional(func(...args));
  func.rep = (...args) => repeat(func(...args));
  func.rep1 = (...args) => repeat1(func(...args));
});

const opt = optional;
const rep = repeat;

module.exports = grammar({
  rules,

  name: 'hack',

  extras: $ => [/\s/, $.comment],

  supertypes: $ => [
    $._statement,
    $._declaration,
    $._expression,
    $._literal,
    $._type,
  ],

  inline: $ => [
    $._statement,
    $._declaration,
    $._literal,
    $._variablish,
    $._class_modifier,
    $._member_modifier,
    $._member_modifiers,
    $._type,
    $._primitive_type,
    $._collection_type,
    $._xhp_attribute_expression,
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$.binary_expression],
    [$._expression, $.call_expression],
    [$._expression, $.call_expression, $.type_specifier],
    [$._expression, $.parameter],
    [$._expression, $._type],
    [$._expression, $.type_specifier],
    [$.qualified_identifier, $.type_constant],
    [$.scoped_identifier, $._type_constant],
    [$.varray, $.type_specifier],
    [$.darray, $.type_specifier],
    [$.vec, $.type_specifier],
    [$.dict, $.type_specifier],
    [$.keyset, $.type_specifier],
    [$.type_specifier],
  ],
});
