module.exports = grammar({
  name: 'c_sharp',

  extras: $ => [
    $.comment,
    /\s+/
  ],

  rules: {
    compilation_unit: $ => seq(
      repeat($.using_directive),
      repeat(choice(
        $.namespace_declaration,
        $.class_declaration,
        $.struct_declaration
      ))
    ),

    using_directive: $ => seq(
      'using',
      optional(choice(
        $.static,
        $.name_equals
      )),
      choice(
        $.qualified_name,
        $.identifier_name
      ),
      ';'
    ),

    namespace_declaration: $ => seq(
      'namespace',
      choice(
        $.qualified_name,
        $.identifier_name
      ),
      '{',
      repeat(choice(
        $.namespace_declaration,
        $.class_declaration,
        $.struct_declaration
      )),
      '}'
    ),

    class_declaration: $ => seq(
      optional($._type_modifiers),
      'class',
      $.identifier_name,
      optional($.type_parameter_list),
      '{',
      repeat(choice(
        $.class_declaration,
        $.struct_declaration
      )),
      '}'
    ),

    struct_declaration: $ => seq(
      optional($._type_modifiers),
      'struct',
      $.identifier_name,
      optional($.type_parameter_list),
      '{',
      repeat(choice(
        $.class_declaration,
        $.struct_declaration
      )),
      '}'
    ),

    _type_modifiers: $ => repeat1(choice(
      'new',
      'public',
      'protected',
      'internal',
      'private',
      'abstract',
      'sealed',
      'static',
      'unsafe'
    )),

    type_parameter_list: $ => seq(
      '<',
      commaSep1($.type_parameter),
      '>'
    ),

    type_parameter: $ => $.identifier_name,

    qualified_name: $ => seq(
      choice(
        $.identifier_name,
        $.qualified_name,
        $.alias_qualified_name
      ),
      '.',
      $.identifier_name
    ),

    alias_qualified_name: $ => seq(
      $.global,
      '::',
      $.identifier_name
    ),

    name_equals: $ => seq(
      $.identifier_name,
      '='
    ),

    global: $ => 'global',

    static: $ => 'static',

    identifier_name: $ => (/[a-zA-Z][a-zA-Z-0-9]*/),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        repeat(choice(
          /[^*]/,
          /\*[^/]/
        )),
        '*/'
      )
    ))
  }
})

function commaSep1 (rule) {
  return seq(
    rule,
    repeat(seq(
      ',',
      rule
    ))
  )
}
