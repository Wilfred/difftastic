const PREC = {
  prefix: 19,
  dot: 18,
  hash: 17,
  app: 16,
  neg: 15,
  pow: 14,
  mult: 13,
  add: 12,
  cons: 11,
  concat: 10,
  rel: 9,
  and: 8,
  or: 7,
  prod: 6,
  assign: 5,
  if: 4,
  seq: 3,
  match: 2
}

const OP_CHAR = /[!$%&*+\-./:<=>?@^|~]/
const HASH_OP_CHAR = /[#!$%&*+\-./:<=>?@^|~]/
const NUMBER = token(choice(
  /[0-9][0-9_]*(\.[0-9_]*)?([eE][+\-]?[0-9][0-9_]*)?[g-zG-Z]?/,
  /0[xX][0-9A-Fa-f][0-9A-Fa-f_]*(\.[0-9A-Fa-f_]*)?([pP][+\-]?[0-9][0-9_]*)?[g-zG-Z]?/,
  /0[oO][0-7][0-7_]*[g-zG-Z]?/,
  /0[bB][01][01_]*[g-zG-Z]?/
))

module.exports = grammar({
  name: 'ocaml',

  extras: $ => [
    /\s/,
    $.comment,
    $.line_number_directive,
    $.attribute
  ],

  inline: $ => [
    $._module_type_ext,
    $._module_expression_ext,
    $._module_expression_ext,
    $._simple_type_ext,
    $._simple_expression_ext,
    $._expression_ext,
    $._quoted_string,
    $._label_name,
    $._field_name,
    $._class_name,
    $._class_type_name,
    $._method_name,
    $._type_constructor,
    $._instance_variable_name,
    $._module_name,
    $._module_type_name,
    $._constructor_name,
  ],

  word: $ => $._identifier,

  supertypes: $ => [
    $._structure_item,
    $._parameter,
    $._module_type,
    $._simple_module_expression,
    $._module_expression,
    $._simple_class_type,
    $._class_type,
    $._class_field_specification,
    $._simple_class_expression,
    $._class_expression,
    $._class_field,
    $._polymorphic_type,
    $._simple_type,
    $._tuple_type,
    $._tag_spec,
    $._type,
    $._simple_expression,
    $._expression,
    $._sequence_expression,
    $._argument,
    $._simple_pattern,
    $._pattern,
    $._binding_pattern,
    $._extension,
    $._item_extension,
    $._constant,
    $._signed_constant,
    $._value_name,
    $._value_pattern
  ],

  rules: {
    compilation_unit: $ => seq(
      optional($.shebang),
      optional($._structure)
    ),

    shebang: $ => /#!.*/,

    _structure: $ => choice(
      repeat1(';;'),
      seq(
        repeat(';;'),
        choice($._structure_item_ext, $.toplevel_directive, $.expression_item),
        repeat(choice(
          seq(repeat(';;'), choice($._structure_item_ext, $.toplevel_directive)),
          seq(repeat1(';;'), $.expression_item)
        )),
        repeat(';;')
      )
    ),

    expression_item: $ => seq(
      $._sequence_expression_ext,
      repeat($.item_attribute)
    ),

    _signature: $ => choice(
      repeat1(';;'),
      seq(repeat1(seq(repeat(';;'), $._signature_item_ext)), repeat(';;'))
    ),

    // Toplevel

    toplevel_directive: $ => seq(
      $.directive,
      optional(choice(
        $._constant,
        $.value_path,
        $.module_path
      ))
    ),

    // Module implementation

    _structure_item: $ => choice(
      $.value_definition,
      $.external,
      $.type_definition,
      $.exception_definition,
      $.module_definition,
      $.module_type_definition,
      $.open_module,
      $.include_module,
      $.class_definition,
      $.class_type_definition,
      $.floating_attribute
    ),

    _structure_item_ext: $ => choice(
      $._structure_item,
      $._item_extension
    ),

    value_definition: $ => seq(
      choice(seq('let', optional($._attribute), optional('rec')), $.let_operator),
      sep1(choice('and', $.and_operator), $.let_binding)
    ),

    let_binding: $ => prec.right(seq(
      field('pattern', $._binding_pattern_ext),
      optional(seq(
        repeat($._parameter),
        optional($._polymorphic_typed),
        optional(seq(':>', $._type_ext)),
        '=',
        field('body', $._sequence_expression_ext),
      )),
      repeat($.item_attribute)
    )),

    _parameter: $ => choice(
      $.parameter,
      alias($._parenthesized_abstract_type, $.abstract_type)
    ),

    parameter: $ => choice(
      field('pattern', $._simple_pattern_ext),
      seq(
        choice('~', '?'),
        field('pattern', alias($._identifier, $.value_pattern))
      ),
      seq(
        $._label,
        token.immediate(':'),
        field('pattern', $._simple_pattern_ext)
      ),
      seq(
        choice('~', '?'),
        '(',
        field('pattern', alias($._identifier, $.value_pattern)),
        optional($._typed),
        optional(seq('=', $._sequence_expression_ext)),
        ')'
      ),
      seq(
        $._label,
        token.immediate(':'),
        '(',
        field('pattern', $._pattern_ext),
        optional($._typed),
        seq('=', $._sequence_expression_ext),
        ')'
      )
    ),

    external: $ => seq(
      'external',
      optional($._attribute),
      $._value_name,
      $._polymorphic_typed,
      '=',
      repeat1($.string),
      repeat($.item_attribute)
    ),

    type_definition: $ => seq(
      'type',
      optional($._attribute),
      optional('nonrec'),
      sep1('and', $.type_binding)
    ),

    type_binding: $ => seq(
      optional($._type_params),
      choice(
        seq(
          field('name', $._type_constructor),
          optional($._type_equation),
          optional(seq(
            '=',
            optional('private'),
            field('body', choice($.variant_declaration, $.record_declaration, '..'))
          )),
          repeat($.type_constraint)
        ),
        seq(
          field('name', $.type_constructor_path),
          seq(
            '+=',
            optional('private'),
            field('body', $.variant_declaration)
          )
        )
      ),
      repeat($.item_attribute)
    ),

    _type_params: $ => choice(
      $._type_param,
      parenthesize(sep1(',', $._type_param))
    ),

    _type_param: $ => seq(
      optional(choice(
        seq('+', optional('!')),
        seq('-', optional('!')),
        seq('!', optional(choice('+', '-'))),
      )),
      choice($.type_variable, alias('_', $.type_variable))
    ),

    _type_equation: $ => seq(
      choice('=', ':='),
      optional('private'),
      $._type_ext
    ),

    variant_declaration: $ => choice(
      seq('|', sep('|', $.constructor_declaration)),
      sep1('|', $.constructor_declaration)
    ),

    constructor_declaration: $ => seq(
      choice(
        $._constructor_name,
        alias(choice(seq('[', ']'), seq('(', ')'), 'true', 'false'), $.constructor_name)
      ),
      optional(choice(
        seq('of', $._constructor_argument),
        seq(
          ':',
          optional(seq(repeat1($.type_variable), '.')),
          optional(seq($._constructor_argument, '->')),
          $._simple_type_ext
        ),
        seq('=', $.constructor_path)
      ))
    ),

    _constructor_argument: $ => choice(
      sep1('*', $._simple_type_ext),
      $.record_declaration
    ),

    record_declaration: $ => seq(
      '{',
      sep1(';', $.field_declaration),
      optional(';'),
      '}'
    ),

    field_declaration: $ => seq(
      optional('mutable'),
      $._field_name,
      $._polymorphic_typed,
    ),

    type_constraint: $ => seq(
      'constraint',
      $._type_ext,
      '=',
      $._type_ext
    ),

    exception_definition: $ => seq(
      'exception',
      optional($._attribute),
      $.constructor_declaration,
      repeat($.item_attribute)
    ),

    module_definition: $ => seq(
      'module', optional($._attribute), optional('rec'),
      sep1('and', $.module_binding)
    ),

    module_binding: $ => seq(
      field('name', choice($._module_name, alias('_', $.module_name))),
      repeat($.module_parameter),
      optional($._module_typed),
      optional(seq(choice('=', ':='), field('body', $._module_expression_ext))),
      repeat($.item_attribute)
    ),

    module_parameter: $ => parenthesize(optional(seq(
      field('name', choice($._module_name, alias('_', $.module_name))),
      $._module_typed
    ))),

    module_type_definition: $ => seq(
      'module', 'type',
      optional($._attribute),
      field('name', $._module_type_name),
      optional(seq(choice('=', ':='), field('body', $._module_type_ext))),
      repeat($.item_attribute)
    ),

    open_module: $ => seq(
      'open',
      optional('!'),
      optional($._attribute),
      $._module_expression_ext,
      repeat($.item_attribute)
    ),

    include_module: $ => seq(
      'include',
      optional($._attribute),
      $._module_expression_ext,
      repeat($.item_attribute)
    ),

    class_definition: $ => seq(
      'class', optional($._attribute),
      sep1('and', $.class_binding)
    ),

    class_binding: $ => prec.right(seq(
      optional('virtual'),
      optional(seq(
        '[',
        sep1(',', $._type_param),
        ']'
      )),
      field('name', $._class_name),
      repeat($._parameter),
      optional($._class_typed),
      optional(seq('=', field('body', $._class_expression_ext))),
      repeat($.item_attribute)
    )),

    class_type_definition: $ => seq(
      'class', 'type', optional($._attribute),
      sep1('and', $.class_type_binding)
    ),

    class_type_binding: $ => seq(
      optional('virtual'),
      optional(seq(
        '[',
        sep1(',', $._type_param),
        ']'
      )),
      field('name', $._class_type_name),
      '=',
      field('body', $._simple_class_type_ext),
      repeat($.item_attribute)
    ),

    // Module signature

    _signature_item: $ => choice(
      $.value_specification,
      $.external,
      $.type_definition,
      $.exception_definition,
      $.module_definition,
      $.module_type_definition,
      $.open_module,
      $.include_module_type,
      $.class_definition,
      $.class_type_definition,
      $.floating_attribute
    ),

    _signature_item_ext: $ => choice(
      $._signature_item,
      $._item_extension
    ),

    value_specification: $ => seq(
      'val',
      optional($._attribute),
      $._value_name,
      $._polymorphic_typed,
      repeat($.item_attribute)
    ),

    include_module_type: $ => seq(
      'include',
      optional($._attribute),
      $._module_type_ext,
      repeat($.item_attribute)
    ),

    // Module types

    _module_typed: $ => seq(':', $._module_type_ext),

    _module_type: $ => choice(
      $.module_type_path,
      $.signature,
      $.module_type_constraint,
      $.module_type_of,
      $.functor_type,
      $.parenthesized_module_type
    ),

    _module_type_ext: $ => choice(
      $._module_type,
      $._extension
    ),

    signature: $ => seq(
      'sig',
      optional($._signature),
      'end'
    ),

    module_type_constraint: $ => prec.right(seq(
      $._module_type_ext,
      'with',
      sep1('and', choice(
        $.constrain_type,
        $.constrain_module,
        $.constrain_module_type
      ))
    )),

    constrain_type: $ => seq(
      'type',
      optional($._type_params),
      $.type_constructor_path,
      $._type_equation,
      repeat($.type_constraint)
    ),

    constrain_module: $ => seq(
      'module',
      $.module_path,
      choice('=', ':='),
      $.extended_module_path
    ),

    constrain_module_type: $ => prec.left(seq(
      'module', 'type',
      $.module_type_path,
      choice('=', ':='),
      $._module_type_ext
    )),

    module_type_of: $ => seq(
      'module', 'type', 'of',
      $._module_expression_ext
    ),

    functor_type: $ => prec.right(seq(
      choice(
        seq('functor', repeat($.module_parameter)),
        $._module_type_ext
      ),
      '->',
      $._module_type_ext
    )),

    parenthesized_module_type: $ => seq(
      parenthesize($._module_type_ext)
    ),

    // Module expressions

    _simple_module_expression: $ => choice(
      $.typed_module_expression,
      $.parenthesized_module_expression,
      $.packed_module
    ),

    _simple_module_expression_ext: $ => choice(
      $._simple_module_expression,
      $._extension
    ),

    _module_expression: $ => choice(
      $._simple_module_expression,
      $.module_path,
      $.structure,
      $.functor,
      $.module_application
    ),

    _module_expression_ext: $ => choice(
      $._module_expression,
      $._extension
    ),

    structure: $ => seq(
      'struct',
      optional($._structure),
      'end'
    ),

    functor: $ => prec.right(seq(
      'functor',
      repeat1($.module_parameter),
      '->',
      field('body', $._module_expression_ext),
    )),

    module_application: $ => seq(
      field('functor', $._module_expression_ext),
      choice(
        field('argument', $._simple_module_expression_ext),
        seq('(', ')')
      )
    ),

    typed_module_expression: $ => parenthesize(seq(
      $._module_expression_ext,
      $._module_typed
    )),

    packed_module: $ => parenthesize(seq(
      'val',
      $._expression_ext,
      optional($._module_typed),
      optional(seq(':>', $._module_type_ext))
    )),

    parenthesized_module_expression: $ => parenthesize($._module_expression_ext),

    // Class types

    _class_typed: $ => seq(':', $._class_type_ext),

    _simple_class_type: $ => choice(
      $.class_type_path,
      $.instantiated_class_type,
      $.class_body_type,
      $.let_open_class_type
    ),

    _simple_class_type_ext: $ => choice(
      $._simple_class_type,
      $._extension,
    ),

    _class_type: $ => choice(
      $._simple_class_type,
      $.class_function_type
    ),

    _class_type_ext: $ => choice(
      $._class_type,
      $._extension
    ),

    instantiated_class_type: $ => seq(
      '[',
      sep1(',', $._type_ext),
      ']',
      $.class_type_path
    ),

    class_body_type: $ => seq(
      'object',
      optional(parenthesize($._type_ext)),
      repeat(choice(
        $._class_field_specification_ext,
        $.floating_attribute
      )),
      'end'
    ),

    _class_field_specification: $ => choice(
      $.inheritance_specification,
      $.instance_variable_specification,
      $.method_specification,
      $.type_parameter_constraint
    ),

    _class_field_specification_ext: $ => choice(
      $._class_field_specification,
      $._item_extension
    ),

    inheritance_specification: $ => seq(
      'inherit',
      $._simple_class_type_ext,
      repeat($.item_attribute)
    ),

    instance_variable_specification: $ => seq(
      'val',
      repeat(choice('mutable', 'virtual')),
      $._instance_variable_name,
      $._typed,
      repeat($.item_attribute)
    ),

    method_specification: $ => seq(
      'method',
      repeat(choice('private', 'virtual')),
      $._method_name,
      $._polymorphic_typed,
      repeat($.item_attribute)
    ),

    type_parameter_constraint: $ => seq(
      'constraint',
      $._type_ext,
      '=',
      $._type_ext,
      repeat($.item_attribute)
    ),

    let_open_class_type: $ => prec.right(PREC.match, seq(
      'let',
      $.open_module,
      'in',
      field('body', $._simple_class_type_ext)
    )),

    class_function_type: $ => prec.right(PREC.seq, seq(
      optional(seq(optional('?'), $._label_name, ':')),
      $._tuple_type_ext,
      '->',
      $._class_type_ext
    )),

    // Class expressions

    _simple_class_expression: $ => choice(
      $.class_path,
      $.instantiated_class,
      $.object_expression,
      $.typed_class_expression,
      $.parenthesized_class_expression
    ),

    _class_expression: $ => choice(
      $._simple_class_expression,
      $.class_function,
      $.class_application,
      $.let_class_expression,
      $.let_open_class_expression
    ),

    _class_expression_ext: $ => choice(
      $._class_expression,
      $._extension
    ),

    instantiated_class: $ => seq(
      '[',
      sep1(',', $._type_ext),
      ']',
      $.class_path
    ),

    typed_class_expression: $ => seq(
      parenthesize(seq(
        $._class_expression_ext,
        $._class_typed
      ))
    ),

    class_function: $ => prec.right(PREC.match, seq(
      'fun',
      repeat1($._parameter),
      '->',
      field('body', $._class_expression_ext)
    )),

    class_application: $ => prec.right(PREC.app, seq(
      field('class', $._simple_class_expression),
      repeat1(field('argument', $._argument))
    )),

    let_class_expression: $ => prec.right(PREC.match, seq(
      $.value_definition,
      'in',
      field('body', $._class_expression_ext)
    )),

    _class_field: $ => choice(
      $.inheritance_definition,
      $.instance_variable_definition,
      $.method_definition,
      $.type_parameter_constraint,
      $.class_initializer
    ),

    _class_field_ext: $ => choice(
      $._class_field,
      $._item_extension
    ),

    inheritance_definition: $ => seq(
      'inherit',
      optional('!'),
      $._class_expression_ext,
      optional(seq('as', $._value_pattern)),
      repeat($.item_attribute)
    ),

    instance_variable_definition: $ => seq(
      'val',
      optional('!'),
      repeat(choice('mutable', 'virtual')),
      field('name', $._instance_variable_name),
      optional($._typed),
      optional(seq(':>', $._type_ext)),
      optional(seq('=', field('body', $._sequence_expression_ext))),
      repeat($.item_attribute)
    ),

    method_definition: $ => seq(
      'method',
      optional('!'),
      repeat(choice('private', 'virtual')),
      field('name', $._method_name),
      repeat($._parameter),
      optional($._polymorphic_typed),
      optional(seq('=', field('body', $._sequence_expression_ext))),
      repeat($.item_attribute)
    ),

    class_initializer: $ => seq(
      'initializer',
      $._sequence_expression_ext,
      repeat($.item_attribute)
    ),

    let_open_class_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.open_module,
      'in',
      field('body', $._class_expression_ext)
    )),

    parenthesized_class_expression: $ => seq(
      parenthesize($._class_expression_ext)
    ),

    // Types

    _typed: $ => seq(':', $._type_ext),

    _simple_typed: $ => seq(':', $._simple_type_ext),

    _polymorphic_typed: $ => seq(':', $._polymorphic_type),

    _polymorphic_type: $ => choice(
      $.polymorphic_type,
      $._type_ext
    ),

    polymorphic_type: $ => seq(
      choice(
        repeat1($.type_variable),
        alias($._abstract_type, $.abstract_type)
      ),
      '.',
      $._type_ext
    ),

    _abstract_type: $ => seq(
      'type',
      repeat1($._type_constructor)
    ),

    _parenthesized_abstract_type: $ => parenthesize($._abstract_type),

    _simple_type: $ => choice(
      $.type_variable,
      $.type_constructor_path,
      $.constructed_type,
      $.polymorphic_variant_type,
      $.package_type,
      $.hash_type,
      $.object_type,
      $.parenthesized_type
    ),

    _simple_type_ext: $ => choice(
      $._simple_type,
      $._extension
    ),

    _tuple_type: $ => choice(
      $._simple_type,
      $.tuple_type
    ),

    _tuple_type_ext: $ => choice(
      $._tuple_type,
      $._extension
    ),

    _type: $ => choice(
      $._tuple_type,
      $.function_type,
      $.aliased_type,
    ),

    _type_ext: $ => choice(
      $._type,
      $._extension
    ),

    function_type: $ => prec.right(PREC.seq, seq(
      choice($.typed_label, $._type_ext),
      '->',
      $._type_ext
    )),

    typed_label: $ => prec.left(PREC.seq, seq(
      optional('?'),
      $._label_name,
      ':',
      $._type_ext
    )),

    tuple_type: $ => prec(PREC.prod, seq(
      $._tuple_type_ext,
      '*',
      $._simple_type_ext
    )),

    constructed_type: $ => prec(PREC.app, seq(
      choice(
        $._simple_type_ext,
        parenthesize(sep1(',', $._type_ext))
      ),
      $.type_constructor_path
    )),

    aliased_type: $ => prec(PREC.match, seq(
      $._type_ext,
      'as',
      $.type_variable
    )),

    polymorphic_variant_type: $ => seq(
      choice(
        seq('[', $.tag_specification, ']'),
        seq('[', optional($._tag_spec), '|', sep1('|', $._tag_spec), ']'),
        seq('[>', optional('|'), sep('|', $._tag_spec), ']'),
        seq('[<', optional('|'), sep1('|', $._tag_spec), optional(seq('>', repeat1($.tag))), ']'),
      )
    ),

    _tag_spec: $ => choice(
      $._type_ext,
      $.tag_specification
    ),

    tag_specification: $ => seq(
      $.tag,
      optional(seq(
        'of',
        optional('&'),
        sep1('&', $._type_ext)
      ))
    ),

    package_type: $ => parenthesize(seq(
      'module',
      optional($._attribute),
      $._module_type_ext
    )),

    object_type: $ => seq(
      '<',
      optional(choice(
        seq(
          sep1(';', choice(
            $.method_type,
            $._simple_type_ext
          )),
          optional(seq(';', optional('..')))
        ),
        '..'
      )),
      '>'
    ),

    method_type: $ => seq(
      $._method_name,
      $._polymorphic_typed
    ),

    hash_type: $ => prec(PREC.hash, seq(
      optional(choice(
        $._simple_type_ext,
        parenthesize(sep1(',', $._type_ext))
      )),
      '#',
      $.class_type_path
    )),

    parenthesized_type: $ => parenthesize($._type_ext),

    // Expressions

    _simple_expression: $ => choice(
      $.value_path,
      $._constant,
      $.typed_expression,
      $.constructor_path,
      $.tag,
      $.list_expression,
      $.array_expression,
      $.record_expression,
      $.prefix_expression,
      $.hash_expression,
      $.field_get_expression,
      $.array_get_expression,
      $.string_get_expression,
      $.bigarray_get_expression,
      $.coercion_expression,
      $.local_open_expression,
      $.package_expression,
      $.new_expression,
      $.object_copy_expression,
      $.method_invocation,
      $.object_expression,
      $.parenthesized_expression,
      $.ocamlyacc_value
    ),

    _simple_expression_ext: $ => choice(
      $._simple_expression,
      $._extension
    ),

    _expression: $ => choice(
      $._simple_expression,
      $.product_expression,
      $.cons_expression,
      $.application_expression,
      $.infix_expression,
      $.sign_expression,
      $.set_expression,
      $.if_expression,
      $.while_expression,
      $.for_expression,
      $.match_expression,
      $.function_expression,
      $.fun_expression,
      $.try_expression,
      $.let_expression,
      $.assert_expression,
      $.lazy_expression,
      $.let_module_expression,
      $.let_open_expression,
      $.let_exception_expression
    ),

    _expression_ext: $ => choice(
      $._expression,
      $._extension
    ),

    _sequence_expression: $ => choice(
      $._expression,
      $.sequence_expression
    ),

    _sequence_expression_ext: $ => choice(
      $._sequence_expression,
      $._extension
    ),

    typed_expression: $ => parenthesize(seq(
      $._sequence_expression_ext,
      $._typed
    )),

    product_expression: $ => prec.left(PREC.prod, seq(
      field('left', $._expression_ext),
      ',',
      field('right', $._expression_ext)
    )),

    cons_expression: $ => prec.right(PREC.cons, seq(
      field('left', $._expression_ext),
      '::',
      field('right', $._expression_ext)
    )),

    list_expression: $ => seq(
      '[',
      optional(seq(
        sep1(';', $._expression_ext),
        optional(';')
      )),
      ']'
    ),

    array_expression: $ => seq(
      '[|',
      optional(seq(
        sep1(';', $._expression_ext),
        optional(';')
      )),
      '|]'
    ),

    record_expression: $ => seq(
      '{',
      optional(seq($._simple_expression_ext, 'with')),
      sep1(';', $.field_expression),
      optional(';'),
      '}'
    ),

    field_expression: $ => prec(PREC.seq, seq(
      field('name', $.field_path),
      optional($._typed),
      optional(seq('=', field('body', $._expression_ext)))
    )),

    application_expression: $ => prec.right(PREC.app, seq(
      field('function', $._simple_expression_ext),
      repeat1(field('argument', $._argument))
    )),

    _argument: $ => choice(
      $._simple_expression_ext,
      $.labeled_argument
    ),

    labeled_argument: $ => choice(
      $._label,
      seq(
        $._label,
        token.immediate(':'),
        $._simple_expression_ext
      ),
      seq(
        choice('~', '?'),
        '(',
        $._label_name,
        $._typed,
        ')'
      ),
    ),

    prefix_expression: $ => prec(PREC.prefix, seq(
      $.prefix_operator,
      field('right', $._simple_expression_ext)
    )),

    sign_expression: $ => prec(PREC.neg, seq(
      $.sign_operator,
      field('right', $._expression_ext)
    )),

    hash_expression: $ => prec.left(PREC.hash, seq(
      field('left', $._simple_expression_ext),
      $.hash_operator,
      field('right', $._simple_expression_ext)
    )),

    infix_expression: $ => {
      const table = [
        {
          operator: $._pow_operator,
          precedence: PREC.pow,
          associativity: 'right'
        },
        {
          operator: $._mult_operator,
          precedence: PREC.mult,
          associativity: 'left'
        },
        {
          operator: $._add_operator,
          precedence: PREC.add,
          associativity: 'left'
        },
        {
          operator: $._concat_operator,
          precedence: PREC.concat,
          associativity: 'right'
        },
        {
          operator: $._rel_operator,
          precedence: PREC.rel,
          associativity: 'left'
        },
        {
          operator: $._and_operator,
          precedence: PREC.and,
          associativity: 'right'
        },
        {
          operator: $._or_operator,
          precedence: PREC.or,
          associativity: 'right'
        },
        {
          operator: $._assign_operator,
          precedence: PREC.assign,
          associativity: 'right'
        }
      ]

      return choice(...table.map(({operator, precedence, associativity}) =>
        prec[associativity](precedence, seq(
          field('left', $._expression_ext),
          alias(operator, $.infix_operator),
          field('right', $._expression_ext)
        ))
      ))
    },

    field_get_expression: $ => prec.left(PREC.dot, seq(
      $._simple_expression_ext,
      '.',
      $.field_path
    )),

    array_get_expression: $ => prec(PREC.dot, seq(
      $._simple_expression_ext,
      '.',
      optional($.indexing_operator_path),
      '(',
      $._sequence_expression_ext,
      ')'
    )),

    string_get_expression: $ => prec(PREC.dot, seq(
      $._simple_expression_ext,
      '.',
      optional($.indexing_operator_path),
      '[',
      $._sequence_expression_ext,
      ']'
    )),

    bigarray_get_expression: $ => prec(PREC.dot, seq(
      $._simple_expression_ext,
      '.',
      optional($.indexing_operator_path),
      '{',
      $._sequence_expression_ext,
      '}'
    )),

    set_expression: $ => prec.right(PREC.assign, seq(
      choice(
        $.field_get_expression,
        $.array_get_expression,
        $.string_get_expression,
        $.bigarray_get_expression,
        $._instance_variable_name
      ),
      '<-',
      field('body', $._expression_ext)
    )),

    if_expression: $ => prec.right(PREC.if, seq(
      'if',
      optional($._attribute),
      field('condition', $._sequence_expression_ext),
      $.then_clause,
      optional($.else_clause)
    )),

    then_clause: $ => seq(
      'then',
      $._expression_ext
    ),

    else_clause: $ => seq(
      'else',
      $._expression_ext
    ),

    while_expression: $ => seq(
      'while',
      optional($._attribute),
      field('condition', $._sequence_expression_ext),
      $.do_clause
    ),

    do_clause: $ => seq(
      'do',
      optional($._sequence_expression_ext),
      'done'
    ),

    for_expression: $ => seq(
      'for',
      optional($._attribute),
      field('name', $._value_pattern),
      '=',
      field('from', $._sequence_expression_ext),
      choice('to', 'downto'),
      field('to', $._sequence_expression_ext),
      $.do_clause
    ),

    sequence_expression: $ => prec.right(PREC.seq, seq(
      field('left', $._expression_ext),
      ';',
      optional(seq(
        optional($._attribute),
        field('right', $._sequence_expression_ext)
      ))
    )),

    match_expression: $ => prec.right(PREC.match, seq(
      choice(
        seq('match', optional($._attribute)),
        $.match_operator
      ),
      $._sequence_expression_ext,
      'with',
      $._match_cases
    )),

    _match_cases: $ => prec.right(seq(
      optional('|'),
      sep1('|', $.match_case)
    )),

    match_case: $ => seq(
      field('pattern', $._pattern_ext),
      optional($.guard),
      '->',
      field('body', choice($._sequence_expression_ext, $.refutation_case))
    ),

    guard: $ => seq(
      'when',
      $._sequence_expression_ext
    ),

    refutation_case: $ => '.',

    function_expression: $ => prec.right(PREC.match, seq(
      'function',
      optional($._attribute),
      $._match_cases
    )),

    fun_expression: $ => prec.right(PREC.match, seq(
      'fun',
      optional($._attribute),
      repeat1($._parameter),
      optional($._simple_typed),
      '->',
      field('body', $._sequence_expression_ext)
    )),

    try_expression: $ => prec.right(PREC.match, seq(
      'try',
      optional($._attribute),
      $._sequence_expression_ext,
      'with',
      $._match_cases
    )),

    let_expression: $ => prec.right(PREC.match, seq(
      $.value_definition,
      'in',
      $._sequence_expression_ext
    )),

    coercion_expression: $ => parenthesize(seq(
      $._sequence_expression_ext,
      optional($._typed),
      ':>',
      $._type_ext
    )),

    assert_expression: $ => prec.left(PREC.app, seq(
      'assert',
      optional($._attribute),
      $._simple_expression_ext
    )),

    lazy_expression: $ => prec.left(PREC.app, seq(
      'lazy',
      optional($._attribute),
      $._simple_expression_ext
    )),

    let_module_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.module_definition,
      'in',
      field('body', $._sequence_expression_ext)
    )),

    let_open_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.open_module,
      'in',
      field('body', $._sequence_expression_ext)
    )),

    local_open_expression: $ => seq(
      $.module_path,
      '.',
      choice(
        parenthesize(optional($._sequence_expression_ext)),
        $.list_expression,
        $.array_expression,
        $.record_expression,
        $.object_copy_expression,
        $.package_expression
      )
    ),

    package_expression: $ => parenthesize(seq(
      'module',
      optional($._attribute),
      $._module_expression_ext,
      optional($._module_typed)
    )),

    let_exception_expression: $ => prec.right(PREC.match, seq(
      'let',
      $.exception_definition,
      'in',
      field('body', $._sequence_expression_ext)
    )),

    new_expression: $ => seq(
      'new',
      optional($._attribute),
      $.class_path
    ),

    object_copy_expression: $ => seq(
      '{<',
      sep(';', $.instance_variable_expression),
      optional(';'),
      '>}'
    ),

    instance_variable_expression: $ => seq(
      $._instance_variable_name,
      optional(seq('=', $._expression_ext))
    ),

    method_invocation: $ => prec.right(PREC.hash, seq(
      $._simple_expression_ext,
      '#',
      $._method_name
    )),

    object_expression: $ => seq(
      'object',
      optional($._attribute),
      optional(parenthesize(seq(
        $._pattern_ext,
        optional($._typed)
      ))),
      repeat(choice(
        $._class_field_ext,
        $.floating_attribute
      )),
      'end'
    ),

    parenthesized_expression: $ => choice(
      seq(
        'begin',
        optional($._attribute),
        $._sequence_expression_ext,
        'end'
      ),
      parenthesize($._sequence_expression_ext)
    ),

    ocamlyacc_value: $ => /\$[0-9]+/,

    // Patterns

    _simple_pattern: $ => choice(
      $._value_pattern,
      $._signed_constant,
      $.typed_pattern,
      $.constructor_path,
      $.tag,
      $.polymorphic_variant_pattern,
      $.record_pattern,
      $.list_pattern,
      $.array_pattern,
      $.local_open_pattern,
      $.package_pattern,
      $.parenthesized_pattern
    ),

    _simple_pattern_ext: $ => choice(
      $._simple_pattern,
      $._extension
    ),

    _pattern: $ => choice(
      $._simple_pattern,
      $.alias_pattern,
      $.or_pattern,
      $.constructor_pattern,
      $.tag_pattern,
      $.tuple_pattern,
      $.cons_pattern,
      $.range_pattern,
      $.lazy_pattern,
      $.exception_pattern
    ),

    _pattern_ext: $ => choice(
      $._pattern,
      $._extension
    ),

    _binding_pattern: $ => choice(
      $._value_name,
      $._signed_constant,
      alias($.typed_binding_pattern, $.typed_pattern),
      $.constructor_path,
      $.tag,
      $.polymorphic_variant_pattern,
      alias($.record_binding_pattern, $.record_pattern),
      alias($.list_binding_pattern, $.list_pattern),
      alias($.array_binding_pattern, $.array_pattern),
      alias($.local_open_binding_pattern, $.local_open_pattern),
      $.package_pattern,
      alias($.parenthesized_binding_pattern, $.parenthesized_pattern),
      alias($.alias_binding_pattern, $.alias_pattern),
      alias($.or_binding_pattern, $.or_pattern),
      alias($.constructor_binding_pattern, $.constructor_pattern),
      alias($.tag_binding_pattern, $.tag_pattern),
      alias($.tuple_binding_pattern, $.tuple_pattern),
      alias($.cons_binding_pattern, $.cons_pattern),
      $.range_pattern,
      alias($.lazy_binding_pattern, $.lazy_pattern)
    ),

    _binding_pattern_ext: $ => choice(
      $._binding_pattern,
      $._extension
    ),

    alias_pattern: $ => prec.left(PREC.match, seq(
      $._pattern_ext,
      'as',
      $._value_pattern
    )),

    alias_binding_pattern: $ => prec.left(PREC.match, seq(
      $._binding_pattern_ext,
      'as',
      $._value_name
    )),

    typed_pattern: $ => seq(
      parenthesize(seq(
        $._pattern_ext,
        $._typed
      ))
    ),

    typed_binding_pattern: $ => seq(
      parenthesize(seq(
        field('pattern', $._binding_pattern_ext),
        $._typed
      ))
    ),

    or_pattern: $ => prec.left(PREC.seq, seq(
      $._pattern_ext,
      '|',
      $._pattern_ext
    )),

    or_binding_pattern: $ => prec.left(PREC.seq, seq(
      $._binding_pattern_ext,
      '|',
      $._binding_pattern_ext
    )),

    constructor_pattern: $ => prec.right(PREC.app, seq(
      $.constructor_path,
      optional(alias($._parenthesized_abstract_type, $.abstract_type)),
      $._pattern_ext
    )),

    constructor_binding_pattern: $ => prec.right(PREC.app, seq(
      $.constructor_path,
      field('pattern', $._binding_pattern_ext)
    )),

    tag_pattern: $ => prec.right(PREC.app, seq(
      $.tag,
      $._pattern_ext
    )),

    tag_binding_pattern: $ => prec.right(PREC.app, seq(
      $.tag,
      field('pattern', $._binding_pattern_ext)
    )),

    polymorphic_variant_pattern: $ => seq(
      '#',
      $.type_constructor_path
    ),

    tuple_pattern: $ => prec.left(PREC.prod, seq(
      $._pattern_ext,
      ',',
      $._pattern_ext
    )),

    tuple_binding_pattern: $ => prec.left(PREC.prod, seq(
      $._binding_pattern_ext,
      ',',
      $._binding_pattern_ext
    )),

    record_pattern: $ => prec.left(seq(
      '{',
      sep1(';', $.field_pattern),
      optional(seq(';', '_')),
      optional(';'),
      '}'
    )),

    field_pattern: $ => seq(
      $.field_path,
      optional($._typed),
      optional(seq('=', $._pattern_ext))
    ),

    record_binding_pattern: $ => prec.left(seq(
      '{',
      sep1(';', alias($.field_binding_pattern, $.field_pattern)),
      optional(seq(';', '_')),
      optional(';'),
      '}'
    )),

    field_binding_pattern: $ => seq(
      $.field_path,
      optional($._typed),
      optional(seq('=', field('pattern', $._binding_pattern_ext)))
    ),

    list_pattern: $ => prec.left(seq(
      '[',
      optional(seq(
        sep1(';', $._pattern_ext),
        optional(';')
      )),
      ']'
    )),

    list_binding_pattern: $ => prec.left(seq(
      '[',
      optional(seq(
        sep1(';', $._binding_pattern_ext),
        optional(';')
      )),
      ']'
    )),

    cons_pattern: $ => prec.right(PREC.cons, seq(
      $._pattern_ext,
      '::',
      $._pattern_ext
    )),

    cons_binding_pattern: $ => prec.right(PREC.cons, seq(
      $._binding_pattern_ext,
      '::',
      $._binding_pattern_ext
    )),

    array_pattern: $ => prec.left(seq(
      '[|',
      optional(seq(
        sep1(';', $._pattern_ext),
        optional(';')
      )),
      '|]'
    )),

    array_binding_pattern: $ => prec.left(seq(
      '[|',
      optional(seq(
        sep1(';', $._binding_pattern_ext),
        optional(';')
      )),
      '|]'
    )),

    range_pattern: $ => prec(PREC.dot, seq(
      $._signed_constant,
      '..',
      $._signed_constant
    )),

    lazy_pattern: $ => prec(PREC.hash, seq(
      'lazy',
      optional($._attribute),
      $._pattern_ext
    )),

    lazy_binding_pattern: $ => prec(PREC.hash, seq(
      'lazy',
      optional($._attribute),
      $._binding_pattern_ext
    )),

    local_open_pattern: $ => seq(
      $.module_path,
      '.',
      choice(
        parenthesize(optional($._pattern_ext)),
        $.list_pattern,
        $.array_pattern,
        $.record_pattern
      )
    ),

    local_open_binding_pattern: $ => seq(
      $.module_path,
      '.',
      choice(
        parenthesize(optional($._binding_pattern_ext)),
        $.list_binding_pattern,
        $.array_binding_pattern,
        $.record_binding_pattern
      )
    ),

    package_pattern: $ => parenthesize(seq(
      'module',
      optional($._attribute),
      choice($._module_name, alias('_', $.module_name)),
      optional($._module_typed)
    )),

    parenthesized_pattern: $ => parenthesize($._pattern_ext),

    parenthesized_binding_pattern: $ => parenthesize($._binding_pattern_ext),

    exception_pattern: $ => seq(
      'exception',
      optional($._attribute),
      $._pattern_ext
    ),

    // Attributes and extensions

    attribute: $ => seq(
      '[@',
      $.attribute_id,
      optional($.attribute_payload),
      ']'
    ),

    item_attribute: $ => seq(
      '[@@',
      $.attribute_id,
      optional($.attribute_payload),
      ']'
    ),

    floating_attribute: $ => seq(
      '[@@@',
      $.attribute_id,
      optional($.attribute_payload),
      ']'
    ),

    attribute_payload: $ => choice(
      $._structure,
      seq(':', optional(choice($._type_ext, $._signature))),
      seq(
        '?',
        $._pattern_ext,
        optional($.guard)
      )
    ),

    _extension: $ => choice(
      $.extension,
      $.quoted_extension
    ),

    extension: $ => seq(
      '[%',
      $.attribute_id,
      optional($.attribute_payload),
      ']'
    ),

    quoted_extension: $ => seq(
      '{%',
      $.attribute_id,
      optional(/\s+/),
      $._quoted_string,
      '}'
    ),

    _item_extension: $ => choice(
      $.item_extension,
      $.quoted_item_extension
    ),

    item_extension: $ => seq(
      '[%%',
      $.attribute_id,
      optional($.attribute_payload),
      ']',
      repeat($.item_attribute)
    ),

    quoted_item_extension: $ => seq(
      '{%%',
      $.attribute_id,
      optional(/\s+/),
      $._quoted_string,
      '}',
      repeat($.item_attribute)
    ),

    _attribute: $ => seq('%', $.attribute_id),

    // Constants

    _constant: $ => choice(
      $.number,
      $.character,
      $.string,
      $.quoted_string,
      $.boolean,
      $.unit
    ),

    _signed_constant: $ => choice(
      $._constant,
      $.signed_number
    ),

    number: $ => NUMBER,

    signed_number: $ => seq(
      choice('+', '-'),
      NUMBER
    ),

    character: $ => seq("'", $.character_content, "'"),

    character_content: $ => choice(
      /[^\\']/,
      $._null,
      $.escape_sequence
    ),

    string: $ => seq('"', optional($.string_content), '"'),

    string_content: $ => repeat1(choice(
      token.immediate(' '),
      token.immediate('\n'),
      token.immediate('\t'),
      token.immediate('[@'),
      token.immediate('[@@'),
      token.immediate('[@@@'),
      /[^\\"%@]+|%|@/,
      $._null,
      $.escape_sequence,
      alias(/\\u\{[0-9A-Fa-f]+\}/, $.escape_sequence),
      alias(/\\\n[\t ]*/, $.escape_sequence),
      $.conversion_specification,
      $.pretty_printing_indication
    )),

    quoted_string: $ => seq('{', $._quoted_string, '}'),

    _quoted_string: $ => seq(
      $._left_quoted_string_delimiter,
      optional($.quoted_string_content),
      $._right_quoted_string_delimiter,
    ),

    quoted_string_content: $ => repeat1(choice(
      token.immediate(' '),
      token.immediate('\n'),
      token.immediate('\t'),
      token.immediate('[@'),
      token.immediate('[@@'),
      token.immediate('[@@@'),
      /[^%@|]+|%|@|\|/,
      $._null,
      $.conversion_specification,
      $.pretty_printing_indication
    )),

    escape_sequence: $ => choice(
      /\\[\\"'ntbr ]/,
      /\\[0-9][0-9][0-9]/,
      /\\x[0-9A-Fa-f][0-9A-Fa-f]/,
      /\\o[0-3][0-7][0-7]/
    ),

    conversion_specification: $ => token(seq(
      '%',
      optional(/[\-0+ #]/),
      optional(/[1-9][0-9]*|\*/),
      optional(/\.([0-9]*|\*)/),
      choice(
        /[diunlLNxXosScCfFeEgGhHbBat!%@,]/,
        /[lnL][diuxXo]/
      )
    )),

    pretty_printing_indication: $ => /@([\[\], ;.{}?]|\\n|<[0-9]+>)/,

    boolean: $ => choice('true', 'false'),

    unit: $ => choice(
      seq('(', ')'),
      seq('begin', 'end')
    ),

    // Operators

    prefix_operator: $ => token(choice(
      seq('!', choice(optional(/[#!$%&*+\-./:<>?@^|~]/), repeat2(HASH_OP_CHAR))),
      seq(/[~?]/, repeat1(HASH_OP_CHAR))
    )),

    sign_operator: $ => choice('+', '-', '+.', '-.'),

    infix_operator: $ => choice(
      $._pow_operator,
      $._mult_operator,
      $._add_operator,
      $._concat_operator,
      $._rel_operator,
      $._and_operator,
      $._or_operator,
      $._assign_operator
    ),

    hash_operator: $ => token(seq('#', repeat1(HASH_OP_CHAR))),

    _pow_operator: $ => choice(
      token(seq('**', repeat(OP_CHAR))),
      'lsl', 'lsr', 'asr'
    ),

    _mult_operator: $ => choice(
      token(seq(/[*/%]/, repeat(OP_CHAR))),
      'mod', 'land', 'lor', 'lxor'
    ),

    _add_operator: $ => choice(
      '+', '-', '+.', '-.',
      token(choice(
        seq('+', repeat1(OP_CHAR)),
        seq('-', choice(repeat1(/[!$%&*+\-./:<=?@^|~]/), repeat2(OP_CHAR)))
      ))
    ),

    _concat_operator: $ => token(
      seq(/[@^]/, repeat(OP_CHAR))
    ),

    _rel_operator: $ => token(choice(
      seq(/[=>$]/, repeat(OP_CHAR)),
      seq('<', choice(optional(/[!$%&*+./:<=>?@^|~]/), repeat2(OP_CHAR))),
      seq('&', choice(/[!$%*+\-./:<=>?@^|~]/, repeat2(OP_CHAR))),
      seq('|', choice(/[!$%&*+\-./:<=>?@^~]/, repeat2(OP_CHAR))),
      '!='
    )),

    _and_operator: $ => choice('&', '&&'),

    _or_operator: $ => choice('or', '||'),

    _assign_operator: $ => choice(':='),

    indexing_operator: $ => token(
      seq(/[!$%&*+\-/:=>?@^|]/, repeat(OP_CHAR))
    ),

    indexing_operator_path: $ => path($.module_path, $.indexing_operator),

    let_operator: $ => token(
      seq('let', /[$&*+\-/<=>@^|]/, repeat(OP_CHAR))
    ),

    and_operator: $ => token(
      seq('and', /[$&*+\-/<=>@^|]/, repeat(OP_CHAR))
    ),

    match_operator: $ => token(
      seq('match', /[$&*+\-/<=>@^|]/, repeat(OP_CHAR))
    ),

    // Names

    _value_name: $ => choice(
      alias($._identifier, $.value_name),
      $.parenthesized_operator
    ),

    _value_pattern: $ => choice(
      alias($._identifier, $.value_pattern),
      $.parenthesized_operator
    ),

    parenthesized_operator: $ => parenthesize(choice(
      $.prefix_operator,
      $.infix_operator,
      $.hash_operator,
      seq(
        '.',
        $.indexing_operator,
        choice(
          seq('(', optional(seq(';', '..')), ')'),
          seq('[', optional(seq(';', '..')), ']'),
          seq('{', optional(seq(';', '..')), '}')
        ),
        optional('<-')
      ),
      $.let_operator,
      $.and_operator,
      $.match_operator
    )),

    value_path: $ => path($.module_path, $._value_name),

    module_path: $ => prec(1, path($.module_path, $._module_name)),

    extended_module_path: $ => choice(
      path($.extended_module_path, $._module_name),
      seq(
        $.extended_module_path,
        parenthesize($.extended_module_path)
      )
    ),

    module_type_path: $ => path($.extended_module_path, $._module_type_name),

    field_path: $ => path($.module_path, $._field_name),

    constructor_path: $ => path($.module_path, $._constructor_name),

    type_constructor_path: $ => prec(1, path($.extended_module_path, $._type_constructor)),

    class_path: $ => path($.module_path, $._class_name),

    class_type_path: $ => path($.extended_module_path, $._class_type_name),

    _label_name: $ => alias($._identifier, $.label_name),
    _field_name: $ => alias($._identifier, $.field_name),
    _class_name: $ => alias($._identifier, $.class_name),
    _class_type_name: $ => alias($._identifier, $.class_type_name),
    _method_name: $ => alias($._identifier, $.method_name),
    _type_constructor: $ => alias($._identifier, $.type_constructor),
    _instance_variable_name: $ => alias($._identifier, $.instance_variable_name),

    _module_name: $ => alias($._capitalized_identifier, $.module_name),
    _module_type_name: $ => alias(choice($._capitalized_identifier, $._identifier), $.module_type_name),
    _constructor_name: $ => choice(
      alias($._capitalized_identifier, $.constructor_name),
      parenthesize(alias('::', $.constructor_name))
    ),

    _identifier: $ => /[a-z_][a-zA-Z0-9_']*/,
    _capitalized_identifier: $ => /[A-Z][a-zA-Z0-9_']*/,

    _label: $ => seq(choice('~', '?'), $._label_name),
    directive: $ => seq('#', choice($._identifier, $._capitalized_identifier)),
    type_variable: $ => seq("'", choice($._identifier, $._capitalized_identifier)),
    tag: $ => seq('`', choice($._identifier, $._capitalized_identifier)),
    attribute_id: $ => sep1('.', choice($._identifier, $._capitalized_identifier))
  },

  externals: $ => [
    $.comment,
    $._left_quoted_string_delimiter,
    $._right_quoted_string_delimiter,
    '"',
    $.line_number_directive,
    $._null
  ]
})

function sep(delimiter, rule) {
  return optional(sep1(delimiter, rule))
}

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}

function repeat2(rule) {
  return seq(rule, repeat1(rule))
}

function parenthesize(rule) {
  return seq('(', rule, ')')
}

function path(prefix, final) {
  return choice(final, seq(prefix, '.', final))
}
