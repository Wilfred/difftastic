const PREC = {
  OR: 1, // or
  AND: 2, // and
  COMPARE: 3, // < > <= >= ~= ==
  BIT_OR: 4, // |
  BIT_NOT: 5, // ~
  BIT_AND: 6, // &
  BIT_SHIFT: 7, // << >>
  CONCAT: 8, // ..
  PLUS: 9, // + -
  MULTI: 10, // * / // %
  UNARY: 11, // not # - ~
  POWER: 12, // ^
};

const list_seq = (rule, separator, trailing_separator = false) =>
  trailing_separator
    ? seq(rule, repeat(seq(separator, rule)), optional(separator))
    : seq(rule, repeat(seq(separator, rule)));

const optional_block = ($) => alias(optional($._block), $.block);

// namelist ::= Name {',' Name}
const name_list = ($) => list_seq(field('name', $.identifier), ',');

module.exports = grammar({
  name: 'lua',

  extras: ($) => [$.comment, /\s/],

  externals: ($) => [
    $._block_comment_start,
    $._block_comment_content,
    $._block_comment_end,

    $._block_string_start,
    $._block_string_content,
    $._block_string_end,
  ],

  supertypes: ($) => [$.statement, $.expression, $.declaration, $.variable],

  word: ($) => $.identifier,

  rules: {
    // chunk ::= block
    chunk: ($) =>
      seq(
        optional($.hash_bang_line),
        repeat($.statement),
        optional($.return_statement)
      ),

    hash_bang_line: (_) => /#.*/,

    // block ::= {stat} [retstat]
    _block: ($) =>
      choice(
        seq(repeat1($.statement), optional($.return_statement)),
        seq(repeat($.statement), $.return_statement)
      ),

    /*
      stat ::=  ';' |
                varlist '=' explist |
                functioncall |
                label |
                break |
                goto Name |
                do block end |
                while exp do block end |
                repeat block until exp |
                if exp then block {elseif exp then block} [else block] end |
                for Name '=' exp ',' exp [',' exp] do block end |
                for namelist in explist do block end |
                function funcname funcbody |
                local function Name funcbody |
                local namelist ['=' explist]
    */
    statement: ($) =>
      choice(
        $.empty_statement,
        $.assignment_statement,
        $.function_call,
        $.label_statement,
        $.break_statement,
        $.goto_statement,
        $.do_statement,
        $.while_statement,
        $.repeat_statement,
        $.if_statement,
        $.for_statement,
        $.declaration
      ),

    // retstat ::= return [explist] [';']
    return_statement: ($) =>
      seq(
        'return',
        optional(alias($._expression_list, $.expression_list)),
        optional(';')
      ),

    // ';'
    empty_statement: (_) => ';',

    // varlist '=' explist
    assignment_statement: ($) =>
      seq(
        alias($._variable_assignment_varlist, $.variable_list),
        '=',
        alias($._variable_assignment_explist, $.expression_list)
      ),
    // varlist ::= var {',' var}
    _variable_assignment_varlist: ($) =>
      list_seq(field('name', $.variable), ','),
    // explist ::= exp {',' exp}
    _variable_assignment_explist: ($) =>
      list_seq(field('value', $.expression), ','),

    // label ::= '::' Name '::'
    label_statement: ($) => seq('::', $.identifier, '::'),

    // break
    break_statement: (_) => 'break',

    // goto Name
    goto_statement: ($) => seq('goto', $.identifier),

    // do block end
    do_statement: ($) => seq('do', field('body', optional_block($)), 'end'),

    // while exp do block end
    while_statement: ($) =>
      seq(
        'while',
        field('condition', $.expression),
        'do',
        field('body', optional_block($)),
        'end'
      ),

    // repeat block until exp
    repeat_statement: ($) =>
      seq(
        'repeat',
        field('body', optional_block($)),
        'until',
        field('condition', $.expression)
      ),

    // if exp then block {elseif exp then block} [else block] end
    if_statement: ($) =>
      seq(
        'if',
        field('condition', $.expression),
        'then',
        field('consequence', optional_block($)),
        repeat(field('alternative', $.elseif_statement)),
        optional(field('alternative', $.else_statement)),
        'end'
      ),
    // elseif exp then block
    elseif_statement: ($) =>
      seq(
        'elseif',
        field('condition', $.expression),
        'then',
        field('consequence', optional_block($))
      ),
    // else block
    else_statement: ($) => seq('else', field('body', optional_block($))),

    // for Name '=' exp ',' exp [',' exp] do block end
    // for namelist in explist do block end
    for_statement: ($) =>
      seq(
        'for',
        field('clause', choice($.for_generic_clause, $.for_numeric_clause)),
        'do',
        field('body', optional_block($)),
        'end'
      ),
    // namelist in explist
    for_generic_clause: ($) =>
      seq(
        alias($._name_list, $.variable_list),
        'in',
        alias($._expression_list, $.expression_list)
      ),
    // Name '=' exp ',' exp [',' exp]
    for_numeric_clause: ($) =>
      seq(
        field('name', $.identifier),
        '=',
        field('start', $.expression),
        ',',
        field('end', $.expression),
        optional(seq(',', field('step', $.expression)))
      ),

    // function funcname funcbody
    // local function Name funcbody
    // local namelist ['=' explist]
    declaration: ($) =>
      choice(
        $.function_declaration,
        field(
          'local_declaration',
          alias($._local_function_declaration, $.function_declaration)
        ),
        field('local_declaration', $.variable_declaration)
      ),
    // function funcname funcbody
    function_declaration: ($) =>
      seq('function', field('name', $._function_name), $._function_body),
    // local function Name funcbody
    _local_function_declaration: ($) =>
      seq('local', 'function', field('name', $.identifier), $._function_body),
    // funcname ::= Name {'.' Name} [':' Name]
    _function_name: ($) =>
      choice(
        $._function_name_prefix_expression,
        alias(
          $._function_name_method_index_expression,
          $.method_index_expression
        )
      ),
    _function_name_prefix_expression: ($) =>
      choice(
        $.identifier,
        alias($._function_name_dot_index_expression, $.dot_index_expression)
      ),
    _function_name_dot_index_expression: ($) =>
      seq(
        field('table', $._function_name_prefix_expression),
        '.',
        field('field', $.identifier)
      ),
    _function_name_method_index_expression: ($) =>
      seq(
        field('table', $._function_name_prefix_expression),
        ':',
        field('method', $.identifier)
      ),

    // local namelist ['=' explist]
    variable_declaration: ($) =>
      seq(
        'local',
        choice(
          alias($._att_name_list, $.variable_list),
          alias($._local_variable_assignment, $.assignment_statement)
        )
      ),
    _local_variable_assignment: ($) =>
      seq(
        alias($._att_name_list, $.variable_list),
        '=',
        alias($._variable_assignment_explist, $.expression_list)
      ),
    // namelist ::= Name {',' Name}
    _name_list: ($) => name_list($),

    // attnamelist ::=  Name attrib {‘,’ Name attrib}
    _att_name_list: ($) =>
      list_seq(
        seq(
          field('name', $.identifier),
          optional(field('attribute', alias($._attrib, $.attribute)))
        ),
        ','
      ),
    // attrib ::= [‘<’ Name ‘>’]
    _attrib: ($) => seq('<', $.identifier, '>'),

    // explist ::= exp {',' exp}
    _expression_list: ($) => list_seq($.expression, ','),

    /*
      exp ::=  nil | false | true | Numeral | LiteralString | '...' | functiondef |
               prefixexp | tableconstructor | exp binop exp | unop exp
     */
    expression: ($) =>
      choice(
        $.nil,
        $.false,
        $.true,
        $.number,
        $.string,
        $.vararg_expression,
        $.function_definition,
        $.variable,
        $.function_call,
        $.parenthesized_expression,
        $.table_constructor,
        $.binary_expression,
        $.unary_expression
      ),

    // nil
    nil: (_) => 'nil',

    // false
    false: (_) => 'false',

    // true
    true: (_) => 'true',

    // Numeral
    number: (_) => {
      function number_literal(digits, exponent_marker, exponent_digits) {
        return choice(
          seq(digits, /U?LL/i),
          seq(
            choice(
              seq(optional(digits), optional('.'), digits),
              seq(digits, optional('.'), optional(digits))
            ),
            optional(
              seq(
                choice(
                  exponent_marker.toLowerCase(),
                  exponent_marker.toUpperCase()
                ),
                seq(optional(choice('-', '+')), exponent_digits)
              )
            ),
            optional(choice('i', 'I'))
          )
        );
      }

      const decimal_digits = /[0-9]+/;
      const decimal_literal = number_literal(
        decimal_digits,
        'e',
        decimal_digits
      );

      const hex_digits = /[a-fA-F0-9]+/;
      const hex_literal = seq(
        choice('0x', '0X'),
        number_literal(hex_digits, 'p', decimal_digits)
      );

      return token(choice(decimal_literal, hex_literal));
    },

    // LiteralString
    string: ($) => choice($._quote_string, $._block_string),

    _quote_string: ($) =>
      choice(
        seq(
          field('start', alias('"', '"')),
          field(
            'content',
            optional(alias($._doublequote_string_content, $.string_content))
          ),
          field('end', alias('"', '"'))
        ),
        seq(
          field('start', alias("'", "'")),
          field(
            'content',
            optional(alias($._singlequote_string_content, $.string_content))
          ),
          field('end', alias("'", "'"))
        )
      ),

    _doublequote_string_content: ($) =>
      repeat1(choice(token.immediate(prec(1, /[^"\\]+/)), $.escape_sequence)),

    _singlequote_string_content: ($) =>
      repeat1(choice(token.immediate(prec(1, /[^'\\]+/)), $.escape_sequence)),

    _block_string: ($) =>
      seq(
        field('start', alias($._block_string_start, '[[')),
        field('content', alias($._block_string_content, $.string_content)),
        field('end', alias($._block_string_end, ']]'))
      ),

    escape_sequence: () =>
      token.immediate(
        seq(
          '\\',
          choice(
            /[\nabfnrtv\\'"]/,
            /z\s*/,
            /[0-9]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u\{[0-9a-fA-F]+\}/
          )
        )
      ),

    // '...'
    vararg_expression: (_) => '...',

    // functiondef ::= function funcbody
    function_definition: ($) => seq('function', $._function_body),
    // funcbody ::= '(' [parlist] ')' block end
    _function_body: ($) =>
      seq(
        field('parameters', $.parameters),
        field('body', optional_block($)),
        'end'
      ),
    // '(' [parlist] ')'
    parameters: ($) => seq('(', optional($._parameter_list), ')'),
    // parlist ::= namelist [',' '...'] | '...'
    _parameter_list: ($) =>
      choice(
        seq(name_list($), optional(seq(',', $.vararg_expression))),
        $.vararg_expression
      ),

    // prefixexp ::= var | functioncall | '(' exp ')'
    _prefix_expression: ($) =>
      prec(1, choice($.variable, $.function_call, $.parenthesized_expression)),

    // var ::=  Name | prefixexp [ exp ] | prefixexp . Name
    variable: ($) =>
      choice($.identifier, $.bracket_index_expression, $.dot_index_expression),
    // prefixexp [ exp ]
    bracket_index_expression: ($) =>
      seq(
        field('table', $._prefix_expression),
        '[',
        field('field', $.expression),
        ']'
      ),
    // prefixexp . Name
    dot_index_expression: ($) =>
      seq(
        field('table', $._prefix_expression),
        '.',
        field('field', $.identifier)
      ),

    // functioncall ::=  prefixexp args | prefixexp ':' Name args
    function_call: ($) =>
      seq(
        field('name', choice($._prefix_expression, $.method_index_expression)),
        field('arguments', $.arguments)
      ),
    // prefixexp ':' Name
    method_index_expression: ($) =>
      seq(
        field('table', $._prefix_expression),
        ':',
        field('method', $.identifier)
      ),
    // args ::=  '(' [explist] ')' | tableconstructor | LiteralString
    arguments: ($) =>
      choice(
        seq('(', optional(list_seq($.expression, ',')), ')'),
        $.table_constructor,
        $.string
      ),

    // '(' exp ')'
    parenthesized_expression: ($) => seq('(', $.expression, ')'),

    // tableconstructor ::= '{' [fieldlist] '}'
    table_constructor: ($) => seq('{', optional($._field_list), '}'),
    // fieldlist ::= field {fieldsep field} [fieldsep]
    _field_list: ($) => list_seq($.field, $._field_sep, true),
    // fieldsep ::= ',' | ';'
    _field_sep: (_) => choice(',', ';'),
    // field ::= '[' exp ']' '=' exp | Name '=' exp | exp
    field: ($) =>
      choice(
        seq(
          '[',
          field('name', $.expression),
          ']',
          '=',
          field('value', $.expression)
        ),
        seq(field('name', $.identifier), '=', field('value', $.expression)),
        field('value', $.expression)
      ),

    // exp binop exp
    binary_expression: ($) =>
      choice(
        ...[
          ['or', PREC.OR],
          ['and', PREC.AND],
          ['<', PREC.COMPARE],
          ['<=', PREC.COMPARE],
          ['==', PREC.COMPARE],
          ['~=', PREC.COMPARE],
          ['>=', PREC.COMPARE],
          ['>', PREC.COMPARE],
          ['|', PREC.BIT_OR],
          ['~', PREC.BIT_NOT],
          ['&', PREC.BIT_AND],
          ['<<', PREC.BIT_SHIFT],
          ['>>', PREC.BIT_SHIFT],
          ['+', PREC.PLUS],
          ['-', PREC.PLUS],
          ['*', PREC.MULTI],
          ['/', PREC.MULTI],
          ['//', PREC.MULTI],
          ['%', PREC.MULTI],
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(
              field('left', $.expression),
              operator,
              field('right', $.expression)
            )
          )
        ),
        ...[
          ['..', PREC.CONCAT],
          ['^', PREC.POWER],
        ].map(([operator, precedence]) =>
          prec.right(
            precedence,
            seq(
              field('left', $.expression),
              operator,
              field('right', $.expression)
            )
          )
        )
      ),

    // unop exp
    unary_expression: ($) =>
      prec.left(
        PREC.UNARY,
        seq(choice('not', '#', '-', '~'), field('operand', $.expression))
      ),

    // Name
    identifier: (_) => {
      const identifier_start =
        /[^\p{Control}\s+\-*/%^#&~|<>=(){}\[\];:,.\\'"\d]/;
      const identifier_continue =
        /[^\p{Control}\s+\-*/%^#&~|<>=(){}\[\];:,.\\'"]*/;
      return token(seq(identifier_start, identifier_continue));
    },

    // comment
    comment: ($) =>
      choice(
        seq(
          field('start', '--'),
          field('content', alias(/[^\r\n]*/, $.comment_content))
        ),
        seq(
          field('start', alias($._block_comment_start, '[[')),
          field('content', alias($._block_comment_content, $.comment_content)),
          field('end', alias($._block_comment_end, ']]'))
        )
      ),
  },
});
