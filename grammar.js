const C = require("tree-sitter-c/grammar")


module.exports = grammar(C, {
  name: 'objc',

  extras: $ => [
    /\u00A0|\s|\\\r?\n/, // non-breaking space
    $.comment,
    $.pragma,
    $._ifdef_if_retain,
    $._ifdef_elif_ignore,
    $._ifdef_else_ignore,
    $._ifdef_endif_retain,
    $._ifdef_undef_retain,
  ],

  conflicts: ($, superclass) => superclass.concat([
    [$.struct_specifier],
    [$.union_specifier],
    [$.enum_specifier],
    [$.ns_enum_specifier],
    [$.function_declarator],
    [$.type_descriptor],
    [$.type_definition], // field attributes
    [$.superclass_reference],
    [$._expression, $.macro_type_specifier],
    [$._expression, $.generic_type_specifier],
    [$._declaration_specifiers],
    [$._declaration_specifiers, $.class_interface],
    [$._protocol_identifier, $._type_specifier],
    [$._protocol_identifier, $._parameterized_class_type_arguments],
    [$.declaration, $._argument_type_declarator],
  ]),

  supertypes: $ => [
    $._expression,
    $._statement,
    $._declarator,
    $._abstract_declarator,
    $._field_declarator,
    $._type_declarator,
  ],
  
  rules: {
    identifier: $ => /[$a-zA-Z_](\w|\$)*/,
    
    _top_level_item: ($, superclass) => choice(
      ...superclass.members.filter(member => member.name !== 'preproc_call'), // FIX: #endif
      $._import,
      $.class_interface,
      $.class_implementation,
      $.category_interface,
      $.category_implementation,
      $.protocol_declaration,
      $.protocol_forward_declaration,
      $.class_forward_declaration,
      $._ns_assume_nonnull_declaration,
      $.compatibility_alias_declaration,
    ),

    _name: $ => field('name', $.identifier),

    //
    // Imports
    //
    _import: $ => choice(
      $.preproc_import,
      $.module_import
    ),

    preproc_import: $ => seq(
      '#import',
      field('path',
        choice(
          $.system_lib_string,
          $.string_literal
        )
      )
    ),

    module_import: $ => seq(
      '@import', field('module', $.module_string)
    ),

    module_string: $ => /[a-zA-Z_]\w*(\.[a-zA-Z_]\w*)*/,


    //
    // Declarations
    //

    _ns_assume_nonnull_declaration: $ => token.immediate(/NS_ASSUME_NONNULL_BEGIN|NS_ASSUME_NONNULL_END|CF_EXTERN_C_BEGIN|CF_EXTERN_C_END/),

    compatibility_alias_declaration: $ => seq(
      '@compatibility_alias',
      field('class_name', $.identifier),
      field('alias_name', $.identifier),
      ';'
    ),

    protocol_forward_declaration: $ => prec(6, seq(
      '@protocol', commaSep1($._name), ';'
    )),

    class_forward_declaration: $ => seq(
      '@class', commaSep1(seq($._name, optional(choice($.protocol_qualifiers, $.parameterized_class_type_arguments)))), ';'
    ),
    
    class_interface: $ => choice(
      seq(
        optional($.class_interface_attribute_sepcifier),
        optional($.swift_name_attribute_sepcifier),
        repeat($.attribute_specifier),
        '@interface',
        choice(
          seq($._name, optional($.parameterized_class_type_arguments)),
          $.generics_type_reference
        ),
        optional($.superclass_reference),
        optional($.parameterized_class_type_arguments),
        $.protocol_qualifiers, // protocol_qualifiers must precede parameterized_class_type_arguments 
        optional($._instance_variables),
        optional($._interface_declaration),
        '@end',
      ),
      seq(
        optional($.class_interface_attribute_sepcifier),
        optional($.swift_name_attribute_sepcifier),
        repeat($.attribute_specifier),
        '@interface',
        choice(
          seq($._name, optional($.parameterized_class_type_arguments), optional($.protocol_qualifiers)),
          $.generics_type_reference
        ),
        optional($.superclass_reference),
        optional($._instance_variables),
        optional($._interface_declaration),
        '@end',
      ),
    ),

    category_interface: $ => seq(
      '@interface',
      choice(
        seq($._name, optional($.parameterized_class_type_arguments), optional($.protocol_qualifiers)),
        $.generics_type_reference
      ),
      '(', field('category', optional($.identifier)),')',
      optional($.protocol_qualifiers),
      optional($._instance_variables),
      optional($._interface_declaration),
      '@end',
    ),

    protocol_declaration: $ => seq(
      optional($.swift_name_attribute_sepcifier),
      optional($.attribute_specifier),
      '@protocol', $._name,
      optional($.protocol_qualifiers),
      optional($._interface_declaration),
      '@end'
    ),

    superclass_reference: $ => seq(
      ':', 
      $._name,
      field('type_reference', optional($.generic_type_references)),
    ),
    
    protocol_qualifiers: $ => seq(
      '<', commaSep1($._protocol_identifier), '>'
    ),

    _protocol_identifier: $ => prec.dynamic(5, field('name', $.identifier)),
    
    parameterized_class_type_arguments: $ => seq(
      '<', commaSep1($._parameterized_class_type_arguments), '>'
    ),

    _parameterized_class_type_arguments: $ => seq(
      optional(choice('__covariant', '__contravariant')),
      field('type', $.identifier),
      optional(seq(':', $.type_descriptor)), // superclass
    ),

    generics_type_reference: $ => seq(
      '__GENERICS',
      '(',
      seq($._name, repeat(seq(',', $._type_specifier))),
      ')',
    ),

    _instance_variables: $ => seq(
      '{', repeat($._instance_variable_declaration) ,'}'
    ),

    _instance_variable_declaration: $ => choice(
      $._visibility_specification,
      $.field_declaration,
    ),

    _field_declarator: ($, superclass) => choice(
      superclass,
      $.block_declarator,
    ),

    _visibility_specification: $ => choice(
      $.private,
      $.public,
      $.protected,
      $.package,
    ),

    private: $ => '@private',

    public: $ => '@public',

    protected: $ => '@protected',

    package: $ => '@package',

    _interface_declaration: $ => repeat1(
      choice(
        $._ns_assume_nonnull_declaration,
        $._interface_declaration_specifier,
        $.declaration,
        $.method_declaration,
        $.property_declaration,
        $._empty_declaration,
        $.type_definition,
        $.preproc_def,
        $.preproc_function_def,
      )
    ),

    _interface_declaration_specifier: $ => choice(
      $.optional,
      $.required,
    ),

    optional: $ => '@optional',

    required: $ => '@required',

    method_declaration: $ => seq(
      field('scope', $._class_member_scope),
      field('return_type', optional($._method_argument_type_specifier)),
      field('selector', $._method_selector),
      repeat(choice(
        $.attribute_specifier,
        $.swift_name_attribute_sepcifier,
      )),
      ';'
    ),

    _class_member_scope: $ => choice(
      $.class_scope,
      $.instance_scope
    ),

    class_scope: $ => '+',

    instance_scope: $ => '-',

    storage_class_specifier: ($, superclass) => choice(
      superclass,
      /FOUNDATION_EXPORT|FOUNDATION_EXTERN|FOUNDATION_STATIC_INLINE|NS_INLINE|UIKIT_EXTERN|CG_EXTERN|CG_INLINE/
    ),

    property_declaration: $ => seq(
      '@property',
      optional($.property_attributes),
      seq(
        optional($.attribute_specifier),
        repeat($.type_qualifier),
        field('type', $._type_specifier),
        optional($.attribute_specifier),
        repeat($.type_qualifier),
        commaSep1(field('declarator', $._declarator)),
      ),
      repeat($.attribute_specifier),
      optional($.swift_name_attribute_sepcifier),
      ';'
    ),

    property_attributes: $ => seq(
      '(', commaSep($._property_attribute), ')'
    ),

    _property_attribute: $ => choice(
      $.getter,
      $.setter,
      $.nonnull,
      $.nullable,
      $.null_resettable,
      $.unsafe_unretained,
      $.null_unspecified,
      $.direct,
      $.readwrite,
      $.readonly,
      $.strong,
      $.weak,
      $.copy,
      $.assign,
      $.retain,
      $.atomic,
      $.nonatomic,
      $.class,
      $.NS_NONATOMIC_IOSONLY,
      $.DISPATCH_QUEUE_REFERENCE_TYPE,
    ),
    
    class_interface_attribute_sepcifier: $ => token.immediate(/IB_DESIGNABLE|NS_ROOT_CLASS/),

    attribute_specifier: ($, superclass) => prec.dynamic(1, prec.left(choice(
      seq(
        choice('__attribute', '__attribute__'),
        '(',
        $.argument_list,
        ')'
      ),
      $.method_attribute_specifier,
      $.method_variadic_arguments_attribute_specifier,
      $.availability_attribute_specifier,
    ))),

    method_attribute_specifier: $ => token.immediate(/NS_DESIGNATED_INITIALIZER|NS_REQUIRES_SUPER|CF_RETURNS_RETAINED|CF_RETURNS_NOT_RETAINED|NS_REQUIRES_NIL_TERMINATION|NS_DIRECT/),
    
    method_variadic_arguments_attribute_specifier: $=> seq(
      choice('NS_FORMAT_FUNCTION', 'CF_FORMAT_FUNCTION'),
      '(',
      $.number_literal,
      ',',
      $.number_literal,
      ')'
    ),

    availability_attribute_specifier: $ => prec(1, choice(
      'NS_UNAVAILABLE',
      'DEPRECATED_ATTRIBUTE',
      'UI_APPEARANCE_SELECTOR',
      'UNAVAILABLE_ATTRIBUTE',
      seq(
        choice('NS_AVAILABLE', '__IOS_AVAILABLE', 'NS_AVAILABLE_IOS', 
          'API_AVAILABLE', 'API_UNAVAILABLE', 'API_DEPRECATED', 
          'NS_ENUM_AVAILABLE_IOS', 'NS_DEPRECATED_IOS', 'NS_ENUM_DEPRECATED_IOS', 
          'DEPRECATED_MSG_ATTRIBUTE', '__deprecated_msg', '__deprecated_enum_msg', 
          'NS_SWIFT_UNAVAILABLE', 'NS_EXTENSION_UNAVAILABLE_IOS', 'NS_CLASS_AVAILABLE_IOS', 'NS_CLASS_DEPRECATED_IOS'),
        '(',
        commaSep1(choice(field('message', $.string_literal), $.platform_version)),
        ')'
      ),
    )),
    
    platform_version: $ => choice(
      field('version', /\d+_\d+/), // 8_0
      field('version', $.number_literal), // 11.0
      field('platform', $.platform), // ios, macos, tvos
      seq(
        field('platform', $.platform),
        '(',
        field('version', commaSep1(choice(
          /\d+_\d+/, // 8_0
          $.number_literal, // 11.0
          $.identifier, // API_TO_BE_DEPRECATED macro
        ))),
        ')'
      )
    ),
    
    platform: $ => choice(
      'ios', 'tvos', 'macos', 'macosx', 'watchos'
    ),

    swift_name_attribute_sepcifier: $ => choice(
      'NS_REFINED_FOR_SWIFT',
      seq(
        'NS_SWIFT_NAME',
        '(',
        field('class', optional($.identifier)),
        field('method', $.identifier),
        field('parameters', optional(seq(
          '(',
          repeat(
            seq(repeat($._type_specifier), ':'),
          ),
          ')',
        ))),
        ')'
      ),
    ),

    getter: $ => seq(
      'getter', '=', $._name
    ),

    setter: $ => seq(
      'setter', '=', seq($._name, optional(':'))
    ),

    nonnull: $ => 'nonnull',

    nullable: $ => 'nullable',

    null_resettable: $ => 'null_resettable',

    unsafe_unretained: $ => 'unsafe_unretained',

    null_unspecified: $ => 'null_unspecified',

    direct: $ => 'direct',
    
    readwrite: $ => 'readwrite',

    readonly: $ => 'readonly',

    strong: $ => 'strong',

    weak: $ => 'weak',

    copy: $ => 'copy',

    assign: $ => 'assign',

    retain: $ => 'retain',

    atomic: $ => 'atomic',

    nonatomic: $ => 'nonatomic',

    class: $ => 'class',

    NS_NONATOMIC_IOSONLY: $ => 'NS_NONATOMIC_IOSONLY',

    DISPATCH_QUEUE_REFERENCE_TYPE: $=> 'DISPATCH_QUEUE_REFERENCE_TYPE',

    //
    // Implementation
    //
    class_implementation: $ => seq(
      optional($.attribute_specifier),
      '@implementation', $._name, optional($.superclass_reference), optional('NS_UNAVAILABLE'),
      optional($._instance_variables),
      optional($._implementation_definition),
      '@end'
    ),

    category_implementation: $ => seq(
      optional($.attribute_specifier),
      '@implementation', $._name, '(', field('category', $.identifier),')',
      optional($._implementation_definition),
      '@end'
    ),

    _implementation_definition: $ => repeat1(
      choice(
        $._ns_assume_nonnull_declaration,
        $.function_definition,
        $.declaration,
        $.synthesize_definition,
        $.dynamic_definition,
        $.method_definition,
        $.type_definition,
        $.preproc_def,
        $.preproc_function_def,
      )
    ),

    synthesize_definition: $ => seq(
      '@synthesize', commaSep1($.synthesize_property), ';'
    ),

    synthesize_property: $ => seq(
      field('property', $.identifier),
      optional(seq('=', field('instance_variable', $.identifier)))
    ),

    dynamic_definition: $ => seq(
      '@dynamic', commaSep1(field('property', $.identifier)), ';'
    ),

    method_definition: $ => seq(
      field('scope', $._class_member_scope),
      field('return_type', optional($._method_argument_type_specifier)),
      field('selector', $._method_selector),
      optional($.attribute_specifier),
      optional(';'), // compatible with: - (void)method; {}
      field('body', $.compound_statement),
      optional(';'),
    ),

    _method_selector: $ => choice(
      $._unary_selector,
      seq(
        $.keyword_selector,
        optional(seq(',', '...')),
      ),
    ),

    _unary_selector: $ => $.identifier,

    keyword_selector: $ => repeat1($.keyword_declarator),

    keyword_declarator: $ => prec.right(seq(
      field('keyword', optional($.identifier)),
      ':',
      field('type', optional($._method_argument_type_specifier)),
      $._name,
      optional('__unused')
    )),
    
    _method_argument_type_specifier: $ => prec(1, seq(
      '(',
        $._argument_type_declarator,
      ')',
      optional($.attribute_specifier),
    )),
    
    _argument_type_declarator: $ => prec(10, seq(
      optional(choice($.nullable, $.nonnull)),
      optional('NS_NOESCAPE'),
      $._declaration_specifiers,
      optional(field('declarator', choice(
        $._declarator,
        $._abstract_declarator
      ))),
      repeat($.attribute_specifier),
    )),
    
    // Type specifiers

    type_definition: ($, superclass) => prec(1, seq(
      optional($.attribute_specifier),
      optional($.swift_name_attribute_sepcifier),
      'typedef',
      choice(
        seq(
          optional($.attribute_specifier),
          repeat($.type_qualifier),
          field('type', $._type_specifier),
          optional($.attribute_specifier),
          repeat($.type_qualifier),
          field('declarator', $._type_declarator),
          ), 
        seq(
          optional($.attribute_specifier),
          repeat($.type_qualifier),
          field('type', $.ns_enum_specifier),
          optional($.attribute_specifier),
          repeat($.type_qualifier),
          field('declarator', optional($._type_declarator)), // NS_ENUM optional
        )
      ),
      field('attributes', optional(choice($.identifier, $.attribute_specifier))),
      ';'
    )),
    
    _type_declarator: ($, superclass) => choice(
      superclass,
      $.block_declarator,
    ),
    
    _abstract_declarator: ($, superclass) => choice(
      superclass,
      $.block_abstract_declarator,
    ),

    enum_specifier: ($, superclass) => seq(
      'enum',
      choice(
        seq(
          field('name', optional($._type_identifier)),
          field('superclass', optional(seq(':', $._type_specifier))),
          field('body', optional($.enumerator_list))
          ),
        field('body', $.enumerator_list)
      )
    ),

    ns_enum_specifier: ($, superclass) => seq(
      choice('NS_ENUM', 'NS_ERROR_ENUM', 'NS_OPTIONS'),
      '(',
      field('type', $._type_specifier),
      optional(seq(',', field('name', $._type_identifier))),
      ')',
      field('body', optional($.enumerator_list)),
    ),

    enumerator: ($, superclass) => seq(
      field('name', $.identifier),
      optional(seq('=', field('value', $._expression))),
      repeat(choice($.attribute_specifier, $.swift_name_attribute_sepcifier)),
    ),

    _type_specifier: ($, superclass) => choice(
      superclass,
      $.id,
      $.SEL,
      $.IMP,
      $.Class,
      $.BOOL,
      $.auto,
      $.instancetype,
      $.ns_enum_specifier,
      $.typeof_specifier,
      $.atomic_specifier,
      $.generic_type_specifier,
    ),

    typeof_specifier: $ => seq(
      field('operator', choice('typeof', '__typeof', '__typeof__')),
      '(',
      field('type', $._expression),
      ')',
    ),

    // https://en.cppreference.com/w/c/language/atomic
    // Note: fail to match macro_type_specifier rule, because _Atomic is also a storage_class_specifier
    atomic_specifier: $ => prec(-1, seq(
      field('operator', '_Atomic'),
      '(',
      field('type', $.type_descriptor),
      ')'
    )),

    generic_type_specifier: $ => prec.dynamic(1, choice(
      seq(
        field('class_name', choice($._type_identifier, $.id, $.Class)),
        field('type_reference', repeat1(choice($.protocol_qualifiers, $.generic_type_references))),
      )
    )),

    generic_type_references: $ => seq(
      '<', commaSep1($.type_descriptor), '>'
    ),

    struct_specifier: ($, superclass) => choice(
      seq(
        'struct',
        optional($.attribute_specifier),
        choice(
          seq(
            field('name', $._type_identifier),
            optional($.superclass_reference),
            field('body', optional($.field_declaration_list))
            ),
          field('body', $.field_declaration_list)
          ),
      ),
      seq(
        'struct',
        optional($.attribute_specifier),
        field('name', optional($.identifier)),
        field('body', seq('@defs', '(', field('class_name', $.identifier),')'))
      )
    ),
    
    type_qualifier: ($, superclass) => choice(
      superclass,
      'in',
      'out',
      'inout',
      'bycopy',
      'byref',
      'oneway',
      '_Nullable',
      '_Nonnull',
      '_Nullable_result',
      '_Null_unspecified',
      '__autoreleasing',
      '__nullable',
      '__nonnull',
      '__strong',
      '__weak',
      '__bridge',
      '__bridge_transfer',
      '__bridge_retained',
      '__unsafe_unretained',
      '__block',
      '__kindof',
      '__unused',
      '_Complex',
      '__complex',
      'IBOutlet',
      'IBInspectable',
      'NS_VALID_UNTIL_END_OF_SCOPE',
    ),

    //
    // Block
    // https://opensource.apple.com/source/clang/clang-703.0.31/src/tools/clang/docs/BlockLanguageSpec.rst.auto.html
    // How Do I Declare A Block in Objective-C?
    // https://stackoverflow.com/questions/9201514/block-declaration-syntax-list
    /**
      As a local variable:
      returnType (^blockName)(parameterTypes) = ^returnType(parameters) {...};

      As a property:
      @property (nonatomic, copy, nullability) returnType (^blockName)(parameterTypes);

      As a method parameter:
      - (void)someMethodThatTakesABlock:(returnType (^nullability)(parameterTypes))blockName;

      As an argument to a method call:
      [someObject someMethodThatTakesABlock:^returnType (parameters) {...}];

      As a parameter to a C function:
      void SomeFunctionThatTakesABlock(returnType (^blockName)(parameterTypes));

      As a typedef:
      typedef returnType (^TypeName)(parameterTypes);
      TypeName blockName = ^returnType(parameters) {...};

      As a cast type specifier:
      (returnType (^)(parameterTypes))anotherBlock;
    **/

    declaration: $ => seq(
      optional($.swift_name_attribute_sepcifier),
      $._declaration_specifiers,
      commaSep1(field('declarator', choice(
        $._declarator,
        $.init_declarator
      ))),
      optional($.attribute_specifier),
      optional($.type_qualifier),
      ';'
    ),
    
    _declarator: ($, superclass) => choice(
      superclass,
      $.block_declarator,
    ),
    
    block_abstract_declarator: $ => seq(
      '(',
      optional('NS_NOESCAPE'),
      optional($.type_qualifier),
      '^',
      optional($.type_qualifier),
      ')',
      field('parameters', $.parameter_list),
    ),

    block_declarator: $ => seq(
      '(',
      '^',
      choice(
        seq(
          repeat($.type_qualifier),
          field('declarator', $.identifier),
          repeat($.type_qualifier),
        ),
        field('return_type', $.block_declarator),
      ),
      ')',
      field('parameters', $.parameter_list),
    ),

    block_expression: $ => seq(
      '^',
      field('declarator', optional(choice($.type_descriptor, $.type_qualifier))),
      field('parameters', optional($.parameter_list)),
      $.compound_statement
    ),

    //
    // Types
    //
    self: $ => 'self',

    super: $ => 'super',

    nil: $ => 'nil',

    id: $ => 'id',
    
    instancetype: $ => 'instancetype',

    Class: $ => 'Class',

    Method: $ => 'Method',

    SEL: $ => 'SEL',

    IMP: $ => 'IMP',

    BOOL: $ => 'BOOL',
    
    auto: $ => '__auto_type',

    //
    // Statements
    //
    _non_case_statement: ($, superclass) => choice(
      superclass,
      $.autoreleasepool_statement,
      $.synchronized_statement,
      $.for_in_statement,
      $.try_catch_statement,
      $.throw_statement,
    ),

    autoreleasepool_statement: $ => prec.right(seq(
      '@autoreleasepool',
      field('consequence', $._statement),
    )),

    synchronized_statement: $ => prec.right(seq(
      '@synchronized',
      field('condition', $.parenthesized_expression),
      field('consequence', $._statement),
    )),

    for_in_statement: $ => prec.dynamic(1, seq(
      'for',
      '(',
      field('initializer', $._argument_type_declarator),
      'in',
      field('loop', $._expression),
      ')',
      $._statement
    )),

    try_catch_statement: $ => prec.right(seq(
      '@try',
      field('body', $._statement),
      repeat(seq(
        '@catch',
        field('declaration', seq('(', choice($.parameter_declaration, '...'), ')')),
        field('catch', $._statement),
      )),
      optional(seq(
        '@finally',
        field('finally', $._statement)
      ))
    )),

    throw_statement: $ => seq(
      '@throw',
      optional(choice($._expression, $.comma_expression)),
      ';'
    ),


    //
    // Expressions
    //
    _expression: ($, superclass) => choice(
      superclass,
      $.self,
      $.super,
      $.nil,
      $.YES,
      $.NO,
      $.message_expression,
      $.selector_expression,
      $.protocol_expression,
      $.encode_expression,
      $.number_expression,
      $.string_expression,
      $.object_expression,
      $.dictionary_expression,
      $.array_expression,
      $.boolean_expression,
      $.block_expression,
      $.available_expression,
      $.statement_expression,
      $.va_arg_expression,
    ),

    _assignment_left_expression: ($, superclass) => choice(
      superclass,
      $.self,
    ),

    message_expression: $ => seq(
      '[',
      field('receiver', $._receiver),
      field('selector', $._message_selector),
      ']'
    ),

    _receiver: $ => choice(
      $._type_specifier,
      $._expression,
    ),

    _message_selector: $ => choice(
      field('selector', $.identifier),
      $.keyword_argument_list
    ),

    keyword_argument_list: $ => repeat1($.keyword_argument),

    keyword_argument: $ => seq(
      field('keyword', optional($.identifier)),
      ':',
      field('argument', choice(
        $._expression,
        $._variadic_arguments,
      ))
    ),

    _variadic_arguments: $ => prec(1, commaSep1($._expression)),

    selector_expression: $ => seq(
      '@selector', '(', $._selector_name, ')'
    ),

    _selector_name: $ => choice(
      $._name,
      repeat1($._keyword_name)
    ),

    _keyword_name: $ => choice(
      seq($._name, ':'),
      ':'
    ),

    // https://opensource.apple.com/source/clang/clang-703.0.31/src/tools/clang/docs/ObjectiveCLiterals.rst.auto.html
    // objc-at-expression : '@' (string-literal | encode-literal | selector-literal | protocol-literal | object-literal)
    protocol_expression: $ => seq(
      '@protocol', '(', $._name, ')'
    ),

    encode_expression: $ => seq(
      '@encode', '(', $.type_descriptor, ')'
    ),
    
    number_expression: $ => prec(1, seq(
      '@',
      choice(
        seq(
          '(',
          choice(
            alias($.number_literal, 'number_literal'),
            seq("'", /[A-Za-z0-9]/, "'"),
          ),
          ')',
        ),
        seq(
          choice(
            alias($.number_literal, 'number_literal'),
            seq("'", /[A-Za-z0-9]/, "'"),
          ),
        )
      )
    )),

    string_expression: $ => seq(
      seq('@', alias($.string_literal, 'string_literal')),
      repeat(seq(optional('@'), alias($.string_literal, 'string_literal'))),
    ),

    object_expression: $ => seq(
      '@', '(', optional($._expression) , ')'
    ),

    dictionary_expression: $ => seq(
      '@', '{', optional($._dictionary_key_value_list), '}'
    ),

    _dictionary_key_value_list: $ => seq(
      commaSep1($._dictionary_key_value_pair),
      optional(',')
    ),

    _dictionary_key_value_pair: $ => seq(
      field('key', $._expression),
      ':',
      field('value', $._expression),
    ),

    array_expression: $ => seq(
      '@', '[', optional(commaSep1($._expression)), optional(',') ,']'
    ),
    
    YES: $ => 'YES',
    
    NO: $ => 'NO',

    boolean_expression: $ => seq(
      '@', choice($.YES, $.NO, '__objc_no', '__objc_yes')
    ),

    available_expression: $ => seq(
      choice('__builtin_available', '@available'),
      '(',
      commaSep1(seq(
          field('platform', $.identifier),
          field('version', /[0-9]+(\.[0-9]+)*/),
      )),
      optional(seq(',', '*')),
      ')',
    ),

    statement_expression: $ => seq(
      '(',
      field('body', $._statement),
      ')',
    ),

    va_arg_expression: $ => seq(
      'va_arg',
      '(',
      field('va_list', $._expression),
      ',',
      field('type', $.type_descriptor),
      ')'
    ),

    _preproc_expression: ($, superclass) => choice(
      $.preproc_has_include,
      superclass,
    ),

    preproc_has_include: $ => seq(
      '__has_include',
      '(',
      field('path', choice(
        $.string_literal,
        $.system_lib_string,
        $.module_string,
      )),
      ')'
    ),

    conditional_expression: ($, superclass) => prec.right(-2, choice(
      superclass,
      seq(
        field('condition', $._expression),
        '?',
        ':',
        field('alternative', $._expression)
      ),
    )),

    cast_expression: $ => prec(C.PREC.CAST, seq(
      '(',
      field('type', choice($.type_descriptor, $.block_abstract_declarator)),
      ')',
      field('value', $._expression)
    )),

    //
    // Lexical Structure
    // /#[ \t]*(import|include|pragma|if|elif|else|endif|define|undef|line|warning|error)[^\r\n]*\r?\n/
    //
    pragma: $ => token(
      /#[ \t]*(pragma|warning|error)[^\r\n]*\r?\n/
    ),

    _ifdef_if_retain: $ => token(choice(
      /#if[^\r\n]*\r?\n/,
      seq(
        /#if[^\r\\\n]*\\\r?\n/,
        repeat(/[^\r\\\n]*\\\r?\n/),
        /[^#\\\n]+\r?\n/
      ),
      seq(
        /#if[^\r\n]*\r?\n/,
        /#else[ \t]*\r?\n/,
      )
    )),

    _ifdef_elif_ignore: $ => token(seq(
      /#elif[^\r\n]*\r?\n/,
      repeat(choice(
        /([ \t]*[^#][^#]*)?\r?\n/,
        /[ \t]*#[ \t]*(elif|else|import|include|pragma|define|undef|line|warning|error).*\r?\n/,
      )),
      /[ \t]*#endif/,
    )),

    _ifdef_else_ignore: $ => token(choice(
      '#else',
      seq(
        /#else[ \t]*\r?\n/,
        repeat(choice(
          /([ \t]*[^#][^#]*)?\r?\n/,
          /[ \t]*#[ \t]*(import|include|pragma|define|undef|line|warning|error).*\r?\n/,
        )),
        /[ \t]*#endif/,
      )
    )),

    _ifdef_endif_retain: $ => token(
      /#endif[^\r\n]*\r?\n?/,
    ),
    
    _ifdef_undef_retain: $ => token(
      /#undef[^\r\n]*\r?\n?/,
    ),

  }
});

function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}