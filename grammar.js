module.exports = grammar({
  name: 'c_sharp',

  extras: $ => [
    $.comment,
    /\s+/
  ],

  rules: {
    compilation_unit: $ => seq(
      repeat($.using_directive),
      repeat($.namespace_declaration)
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
      repeat($.namespace_declaration),
      '}'
    ),

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
