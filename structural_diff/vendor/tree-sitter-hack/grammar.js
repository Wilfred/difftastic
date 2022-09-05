'use strict';

// Precedence based on order. Indirection overkill but I couldn't help myself.
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
  [prec.left, '<', '>', '<=', '>=', '<=>'],
  [prec.left, '==', '!=', '===', '!=='],
  [prec.left, '&&'],
  [prec.left, '^'],
  [prec.left, '||'],
  [prec.left, '&'],
  [prec.left, '|'],
  [prec.right, '??'],
  [prec.left, 'ternary', '?:'],
  [prec.left, '|>'],
  // prettier-ignore
  [prec.right,
    '=', '??=', '.=', '|=', '^=', '&=', '<<=', '>>=', '+=', '-=', '*=', '/=', '%=', '**='],
  [prec.right, 'print'],
  [prec.left, 'include', 'require'],
]
  .reverse()
  .forEach(([_prec, ...names], index) =>
    names.forEach(name => {
      prec[name] = rule => _prec(index, rule);
    }),
  );

const identifier = /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/;

const rules = {
  script: $ => seq(opt(/<\?[hH][hH]/), rep($._statement)),

  identifier: $ => identifier,

  variable: $ => token(seq('$', identifier)),

  pipe_variable: $ => '$$',

  // TODO: More types?
  _keyword: $ =>
    choice(
      'type',
      'newtype',
      'shape',
      'tuple',
      'clone',
      'new',
      'print',
      'namespace',
      $._primitive_type,
      $._collection_type,
    ),

  qualified_identifier: $ =>
    choice(
      seq(
        opt(choice($.identifier, 'namespace')),
        rep1(seq('\\', $.identifier)),
      ),
      $.identifier,
    ),

  scoped_identifier: $ =>
    seq(
      choice(
        $.qualified_identifier,
        $.variable,
        $.scope_identifier,
        $._xhp_identifier,
        $.pipe_variable,
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
      $._xhp_identifier,
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
      $.abstract_enum_class_declaration,
      $.enum_class_declaration,
      $.namespace_declaration,
      $.const_declaration,
    ),

  heredoc: $ =>
    seq(
      '<<<',
      $._heredoc_start,
      opt(alias($._heredoc_start_newline, '\n')),
      rep(choice($._heredoc_body, $.variable, $.embedded_braced_expression)),
      opt(alias($._heredoc_end_newline, '\n')),
      $._heredoc_end,
    ),

  embedded_braced_expression: $ =>
    seq(
      // Use an external scanner for the opening brace so we can restrict embedded braced
      // expressions to ones that start with a $.variable.
      alias($._embedded_opening_brace, '{'),
      choice(
        $.variable,
        $.call_expression,
        $.subscript_expression,
        $.selection_expression,
      ),
      '}',
    ),

  braced_expression: $ => seq('{', $._expression, '}'),

  _expression: $ =>
    choice(
      $.heredoc,
      $.array,
      $.tuple,
      $.shape,
      $.collection,
      $._literal,
      $._variablish,
      $.prefixed_string,
      $.parenthesized_expression,
      $.binary_expression,
      $.prefix_unary_expression,
      $.postfix_unary_expression,
      $.is_expression,
      $.as_expression,
      $.awaitable_expression,
      $.yield_expression,
      $.cast_expression,
      $.ternary_expression,
      $.lambda_expression,
      $.call_expression,
      $.selection_expression,
      $.new_expression,
      $.include_expression,
      $.require_expression,
      $.anonymous_function_expression,
      $.xhp_expression,
      $.function_pointer,
      $.enum_class_label,
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

  unset_statement: $ => seq('unset', '(', opt(com($._variablish)), ')', ';'),

  concurrent_statement: $ => seq('concurrent', $.compound_statement),

  use_statement: $ =>
    seq(
      'use',
      choice(
        com($.use_clause, ','),
        seq(
          opt($.use_type),
          $._namespace_identifier,
          '{',
          com($.use_clause, ','),
          '}',
        ),
      ),
      ';',
    ),

  use_type: $ => choice('namespace', 'function', 'type', 'const'),

  use_clause: $ =>
    seq(
      opt($.use_type),
      $._namespace_identifier,
      field('alias', opt(seq('as', $.identifier))),
    ),

  _namespace_identifier: $ =>
    choice(seq($.qualified_identifier, opt('\\')), '\\'),

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
        field('else', opt(seq('else', $._statement))),
      ),
    ),

  switch_statement: $ =>
    seq(
      'switch',
      field('value', $.parenthesized_expression),
      seq('{', rep(choice($.switch_case, $.switch_default)), '}'),
    ),

  switch_case: $ =>
    seq('case', field('value', $._expression), ':', rep($._statement)),

  switch_default: $ => seq('default', ':', rep($._statement)),

  foreach_statement: $ =>
    seq(
      'foreach',
      '(',
      field('collection', $._expression),
      opt($.await_modifier),
      token(prec.dynamic(1, 'as')),
      field('key', opt(seq($._variablish, '=>'))),
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
      opt(com($._expression)),
      ';',
      opt(com($._expression)),
      ';',
      opt(com($._expression)),
      ')',
      field('body', $._statement),
    ),

  try_statement: $ =>
    seq(
      'try',
      field('body', $.compound_statement),
      rep($.catch_clause),
      choice($.catch_clause, $.finally_clause),
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
        opt($.await_modifier),
        'using',
        choice(
          $.expression_statement,
          seq('(', com($._expression), ')', choice($.compound_statement, ';')),
        ),
      ),
    ),

  // Literals

  _literal: $ => choice($.string, $.integer, $.float, $.true, $.false, $.null),

  float: $ =>
    token(
      choice(
        // 1., 1.0 , 1.0E1, 1.E1
        /\d+\.\d*([eE][+-]?\d+)?/,

        // .1, 0.1 , 0.1E1, .1E1
        /\d*\.\d+([eE][+-]?\d+)?/,

        // 1E1
        /\d+[eE][+-]?\d+/,
      ),
    ),

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

  // prettier-ignore
  string: $ =>
    token(
      choice(
        /'(\\'|\\\\|\\?[^'\\])*'/,
        /"(\\"|\\\\|\\?[^"\\])*"/,
      ),
    ),

  prefixed_string: $ => seq(field('prefix', $.identifier), $.string),

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
        $._xhp_identifier,
      ),
      opt($.type_arguments),
    ),

  _type_modifier: $ =>
    choice(
      alias('@', $.soft_modifier),
      alias('?', $.nullable_modifier),
      alias('~', $.like_modifier),
    ),

  tuple_type_specifier: $ =>
    seq(rep($._type_modifier), '(', com($._type, ','), ')'),

  function_type_specifier: $ =>
    seq(
      rep($._type_modifier),
      '(',
      'function',
      /\s*/,
      '(',
      opt(com(opt($.inout_modifier), $._type, opt($.variadic_modifier), ',')),
      ')',
      opt($.capability_list),
      ':',
      field('return_type', $._type),
      ')',
    ),

  shape_type_specifier: $ =>
    seq(
      rep($._type_modifier),
      'shape',
      '(',
      opt(com(choice($.field_specifier, alias('...', $.open_modifier)), ',')),
      ')',
    ),

  field_specifier: $ =>
    seq(opt(alias('?', $.optional_modifier)), $._expression, '=>', $._type),

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

  type_arguments: $ => seq('<', opt(com($._type, ',')), '>'),

  type_parameters: $ => seq('<', com($.type_parameter, ','), '>'),

  type_parameter: $ =>
    seq(
      opt($.attribute_modifier),
      opt(
        choice(
          alias('+', $.covariant_modifier),
          alias('-', $.contravariant_modifier),
          alias('reify', $.reify_modifier),
        ),
      ),
      field('name', $.identifier),
      rep(
        seq(
          field('constraint_operator', choice('as', 'super')),
          field('constraint_type', $._type),
        ),
      ),
    ),

  where_clause: $ => seq('where', rep1(seq($.where_constraint, opt(',')))),

  where_constraint: $ =>
    seq(
      // Weird that Hack allows the left operand to be a full on type.
      field('constraint_left_type', $._type),
      field('constraint_operator', choice('as', 'super', '=')),
      field('constraint_right_type', $._type),
    ),

  // Collections

  array: $ =>
    seq(
      alias($._collection_type, $.array_type),
      opt($.type_arguments),
      '[',
      opt(com(choice($._expression, $.element_initializer), ',')),
      ']',
    ),

  element_initializer: $ => prec.right(seq($._expression, '=>', $._expression)),

  tuple: $ => seq('tuple', '(', opt(com($._expression, ',')), ')'),

  shape: $ => seq('shape', '(', opt(com($.field_initializer, ',')), ')'),

  field_initializer: $ =>
    seq(choice($.string, $.scoped_identifier), '=>', $._expression),

  collection: $ =>
    seq(
      $.qualified_identifier,
      '{',
      opt(com(choice($._expression, $.element_initializer), ',')),
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

  list_expression: $ => seq('list', '(', com(opt($._expression), ','), ')'),

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

        '?:',

        '=',
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
    choice(
      ...[
        ['!', prec.unary],
        ['~', prec.unary],
        ['-', prec.unary],
        ['+', prec.unary],
        ['++', prec.prefix],
        ['--', prec.prefix],
        ['print', prec.print],
        ['clone', prec.clone],
        ['await', prec.await],
        ['@', prec.error],
      ].map(([operator, prec]) =>
        prec(seq(field('operator', operator), field('operand', $._expression))),
      ),
    ),

  postfix_unary_expression: $ =>
    prec.postfix(seq($._expression, choice('++', '--'))),

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

  awaitable_expression: $ => seq('async', $.compound_statement),

  yield_expression: $ =>
    prec.right(seq('yield', choice($._expression, $.element_initializer))),

  cast_expression: $ =>
    prec.cast(
      seq(
        '(',
        field('type', choice('array', 'int', 'float', 'string', 'bool')),
        ')',
        field('value', $._expression),
      ),
    ),

  ternary_expression: $ =>
    prec.ternary(
      seq(
        field('condition', $._expression),
        '?',
        field('consequence', $._expression),
        ':',
        field('alternative', $._expression),
      ),
    ),

  lambda_expression: $ =>
    seq(
      opt($.attribute_modifier),
      opt($.async_modifier),
      choice(
        // Make a single-parameter lambda node look like any other lambda node.
        alias($._single_parameter_parameters, $.parameters),
        seq(
          $.parameters,
          opt($.capability_list),
          opt(seq(':', field('return_type', $._type))),
        ),
      ),
      '==>',
      field('body', choice($._expression, $.compound_statement)),
    ),

  _single_parameter_parameters: $ => alias($._single_parameter, $.parameter),

  _single_parameter: $ => field('name', $.variable),

  call_expression: $ =>
    prec.paren(
      seq(
        field('function', choice($._expression, $._collection_type)),
        opt($.type_arguments),
        $.arguments,
      ),
    ),

  new_expression: $ =>
    prec.new(seq('new', $._variablish, opt($.type_arguments), $.arguments)),

  arguments: $ => seq('(', opt(com($.argument, ',')), ')'),

  argument: $ =>
    seq(opt(choice($.inout_modifier, $.variadic_modifier)), $._expression),

  selection_expression: $ =>
    prec.select(
      seq(
        choice($._variablish, $.as_expression),
        field('selection_operator', choice('?->', '->')),
        choice(
          $._variablish,
          $.braced_expression,
          alias($._keyword, $.identifier),
        ),
      ),
    ),

  // Declarations

  alias_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      choice('type', 'newtype'),
      $.identifier,
      opt($.type_parameters),
      field('as', opt(seq('as', $._type))),
      '=',
      $._type,
      ';',
    ),

  function_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      $._function_declaration_header,
      choice(field('body', $.compound_statement), ';'),
    ),

  _function_declaration_header: $ =>
    seq(
      opt($.async_modifier),
      'function',
      field('name', $.identifier),
      opt($.type_parameters),
      $.parameters,
      opt($.capability_list),
      opt(seq(':', opt($.attribute_modifier), field('return_type', $._type))),
      opt($.where_clause),
    ),

  capability_list: $ => seq('[', opt(com($.capability)), ']'),

  capability: $ =>
    choice(
      seq($.identifier, opt($.type_parameters)),
      $.scoped_identifier,
      seq('ctx', $.variable),
    ),

  parameters: $ =>
    prec.paren(
      seq('(', opt(choice($.variadic_modifier, com($.parameter, ','))), ')'),
    ),

  parameter: $ =>
    seq(
      opt($.attribute_modifier),
      opt($.visibility_modifier),
      opt($.inout_modifier),
      field('type', opt($._type)),
      opt($.variadic_modifier),
      field('name', $.variable),
      opt(seq('=', field('default_value', $._expression))),
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
      opt($.xhp_modifier),
      'class',
      field('name', choice($.identifier, $._xhp_identifier)),
      opt($.type_parameters),
      opt($.extends_clause),
      opt($.implements_clause),
      opt($.where_clause),
      field('body', $.member_declarations),
    ),

  member_declarations: $ =>
    seq(
      '{',
      rep(
        choice(
          alias($._class_const_declaration, $.const_declaration),
          $.method_declaration,
          $.property_declaration,
          $.type_const_declaration,
          $.context_const_declaration,
          $.trait_use_clause,
          $.require_implements_clause,
          $.require_extends_clause,
          $.xhp_attribute_declaration,
          $.xhp_children_declaration,
          $.xhp_category_declaration,
        ),
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
          rep(seq(choice($.trait_select_clause, $.trait_alias_clause), ';')),
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
      rep($._member_modifier),
      $._function_declaration_header,
      choice(field('body', $.compound_statement), ';'),
    ),

  _class_const_declaration: $ =>
    seq(
      rep($._member_modifier),
      'const',
      field('type', opt($._type)),
      com(alias($._class_const_declarator, $.const_declarator)),
      ';',
    ),

  _class_const_declarator: $ =>
    seq(
      field('name', choice($.identifier, alias($._keyword, $.identifier))),
      field(
        'value',
        // The only reason we need a separate const declarator for classes is that
        // the assignment expression is optional.
        opt(seq('=', $._expression)),
      ),
    ),

  type_const_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      rep($._member_modifier),
      'const',
      'type',
      field('name', $.identifier),
      opt($.type_parameters),
      field('as', opt(seq('as', $._type))),
      field('type', opt(seq('=', $._type))),
      ';',
    ),

  context_const_declaration: $ =>
    seq(
      opt($.abstract_modifier),
      'const',
      'ctx',
      field('name', $.identifier),
      field('super', opt(seq('super', $.capability_list))),
      field('as', opt(seq('as', $.capability_list))),
      field('context', opt(seq('=', $.capability_list))),
      ';',
    ),

  const_declaration: $ =>
    seq('const', field('type', opt($._type)), com($.const_declarator), ';'),

  const_declarator: $ =>
    seq(
      field('name', choice($.identifier, alias($._keyword, $.identifier))),
      field('value', seq('=', $._expression)),
    ),

  property_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      rep($._member_modifier),
      field('type', opt($._type)),
      com($.property_declarator),
      ';',
    ),

  property_declarator: $ =>
    seq(
      field('name', $.variable),
      field('value', opt(seq('=', $._expression))),
    ),

  enum_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      'enum',
      field('name', $.identifier),
      ':',
      field('type', $._type),
      field('as', opt(seq('as', $._type))),
      '{',
      rep($.enumerator),
      '}',
    ),
  /**
   * Abstract enum classes have their own oddities. In particular they
   * can contain abstract members.
   */
  abstract_enum_class_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      'abstract',
      'enum',
      'class',
      field('name', $.identifier),
      ':',
      opt($.extends_clause),
      field('type', $._type),
      '{',
      rep(
        choice($.typed_enumerator, seq('abstract', $._type, $.identifier, ';')),
      ),
      '}',
    ),
  /**
   * Enum classes require their own rule, as they contain somewhat different
   * syntax from enums. In particular cannot contain the `as` keyword.
   */
  enum_class_declaration: $ =>
    seq(
      opt($.attribute_modifier),
      'enum',
      'class',
      field('name', $.identifier),
      ':',
      field('type', $._type),
      opt($.extends_clause),
      '{',
      rep($.typed_enumerator),
      '}',
    ),

  enum_class_label: $ =>
    seq(field('enum_class', opt($.qualified_identifier)), '#', $.identifier),

  enumerator: $ => seq($.identifier, '=', $._expression, ';'),

  typed_enumerator: $ => seq($._type, $.enumerator),

  namespace_declaration: $ =>
    prec.right(
      seq(
        'namespace',
        opt(
          choice(
            seq(field('name', $.qualified_identifier), ';'),
            seq(
              opt(field('name', $.qualified_identifier)),
              field('body', $.compound_statement),
            ),
          ),
        ),
      ),
    ),

  // Modifiers

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

  xhp_modifier: $ => 'xhp',

  static_modifier: $ => 'static',

  visibility_modifier: $ => choice('public', 'protected', 'private'),

  attribute_modifier: $ =>
    seq('<<', com($.qualified_identifier, opt($.arguments), ','), '>>'),

  inout_modifier: $ => 'inout',

  variadic_modifier: $ => '...',

  async_modifier: $ => 'async',

  await_modifier: $ => 'await',

  // XHP

  xhp_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*([-:][a-zA-Z0-9_]+)*/,

  xhp_class_identifier: $ => /:[a-zA-Z_][a-zA-Z0-9_]*([-:][a-zA-Z0-9_]+)*/,

  _xhp_identifier: $ => choice($.xhp_identifier, $.xhp_class_identifier),

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
            $.braced_expression,
            $.xhp_expression,
          ),
        ),
        $.xhp_close,
      ),
    ),

  xhp_comment: $ => token(seq('<!--', /(-?>)?([^>]|[^-]>|[^-]->)*/, '-->')),

  xhp_string: $ => token(prec(1, /[^<{]+/)),

  xhp_open: $ => seq('<', $._xhp_identifier, rep($.xhp_attribute), '>'),

  xhp_open_close: $ => seq('<', $._xhp_identifier, rep($.xhp_attribute), '/>'),

  xhp_close: $ => seq('</', $._xhp_identifier, '>'),

  xhp_attribute: $ =>
    choice(
      seq($.xhp_identifier, '=', choice($.string, $.braced_expression)),
      choice($.braced_expression, $.xhp_spread_expression),
    ),

  xhp_spread_expression: $ => seq('{', '...', $._expression, '}'),

  xhp_attribute_declaration: $ =>
    seq('attribute', com($.xhp_class_attribute), ';'),

  xhp_class_attribute: $ =>
    seq(
      field('type', choice($._type, $.xhp_enum_type)),
      field('name', opt($.xhp_identifier)),
      opt(seq('=', field('default', $._expression))),
      opt(choice('@required', '@lateinit')),
    ),

  xhp_enum_type: $ =>
    seq('enum', '{', com(choice($.string, $.integer), ','), '}'),

  _xhp_attribute_expression: $ =>
    choice(
      $.xhp_identifier,
      $.xhp_class_identifier,
      $.xhp_category_identifier,
      alias($._xhp_binary_expression, $.binary_expression),
      alias($._xhp_postfix_unary_expression, $.postfix_unary_expression),
      alias($._xhp_parenthesized_expression, $.parenthesized_expression),
    ),

  // We want function pointers to parse only as a "last resort" as there is
  // ambiguity in expressions like
  // ```
  // foo<int, string>()
  // ```
  // which should parse as a function call, but could also parse as a function
  // pointer _being_ called.
  function_pointer: $ =>
    prec.dynamic(
      -1,
      seq(
        choice($.scoped_identifier, $.qualified_identifier),
        $.type_arguments,
      ),
    ),

  // Misc

  comment: $ =>
    token(choice(seq('//', /.*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),

  // Future Deprecations

  anonymous_function_expression: $ =>
    seq(
      opt($.async_modifier),
      'function',
      $.parameters,
      opt($.capability_list),
      opt(seq(':', field('return_type', $._type))),
      opt(alias($._anonymous_function_use_clause, $.use_clause)),
      field('body', $.compound_statement),
    ),

  _anonymous_function_use_clause: $ =>
    seq('use', '(', com($.variable, ','), ')'),

  // See https://github.com/hhvm/xhp-lib/pull/276 for deprecation info
  xhp_children_declaration: $ =>
    seq('children', com($._xhp_attribute_expression), ';'),

  xhp_category_declaration: $ =>
    seq('category', com($.xhp_category_identifier), ';'),

  _xhp_binary_expression: $ =>
    prec.left(
      seq($._xhp_attribute_expression, '|', $._xhp_attribute_expression),
    ),

  _xhp_postfix_unary_expression: $ =>
    prec(1, seq($._xhp_attribute_expression, choice('+', '*', '?'))),

  _xhp_parenthesized_expression: $ =>
    seq('(', com($._xhp_attribute_expression), ')'),
};

/**
 * Comma separated rules. A ',' as the last argument indicates an optional trailing comma.
 */
function com(...rules) {
  if (rules[rules.length - 1] == ',') {
    rules.splice(-1, 1);
    return seq(...rules, repeat(seq(',', ...rules)), optional(','));
  } else {
    return seq(...rules, repeat(seq(',', ...rules)));
  }
}

const opt = optional;
const rep = repeat;
const rep1 = repeat1;

module.exports = grammar({
  rules,

  name: 'hack',

  word: $ => $.identifier,

  extras: $ => [/\s/, $.comment],

  externals: $ => [
    $._heredoc_start,
    $._heredoc_start_newline,
    $._heredoc_body,
    $._heredoc_end_newline,
    $._heredoc_end,
    $._embedded_opening_brace,
  ],

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
    $._type,
    $._primitive_type,
    $._collection_type,
    $._xhp_attribute_expression,
    $._keyword,
    $._xhp_identifier,
  ],

  conflicts: $ => [
    [$.binary_expression, $.call_expression],
    [$.binary_expression, $.cast_expression, $.call_expression],
    [$.binary_expression, $.prefix_unary_expression, $.call_expression],
    [$._expression, $.parameter],
    [$._expression, $.type_specifier],
    [$._expression, $.type_specifier, $.function_pointer],
    [$._expression, $.field_initializer],
    [$._expression, $.function_pointer],
    [$.scoped_identifier, $._type_constant],
    [$.context_const_declaration, $._member_modifier],
    [$.type_specifier],
    [$.type_specifier, $.function_pointer],
    [$.shape_type_specifier, $.shape],
    [$.qualified_identifier],
    [$.qualified_identifier, $.use_type],
    [$.list_expression],
  ],
});
