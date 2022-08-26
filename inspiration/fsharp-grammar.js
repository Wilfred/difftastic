const keywords = [ 
  'abstract', 'and', 'as', 'assert', 'base', 'begin', 'class', 'default', 
  'delegate', 'do', 'done', 'downcast', 'downto', 'elif', 'else', 'end',
  'exception', 'extern', 'false', 'finally', 'for', 'fun', 'function', 'global',
  'if', 'in', 'inherit', 'inline', 'interface', 'internal', 'lazy', 'let',
  'match', 'member', 'module', 'mutable', 'namespace', 'new', 'null', 'of', 
  'open', 'or', 'override', 'private', 'public', 'rec', 'return', 'sig', 
  'static', 'struct', 'then', 'to', 'true', 'try', 'type', 'upcast', 'use',
  'val', 'void', 'when', 'while', 'with', 'yield' ];
const reserved_words = [
  'atomic', 'break', 'checked', 'component', 'const', 'constraint', 
  'constructor', 'continue', 'eager', 'fixed', 'fori', 'functor', 'include',
  'measure', 'method', 'mixin', 'object', 'parallel', 'params', 'process', 
  'protected', 'pure', 'recursive', 'sealed', 'tailcall', 'trait', 'virtual', 
  'volatile'];
const symbolic_keywords = [
  'let!', 'use!', 'do!', 'yield!', 'return!', '|', '->', '<-.', ':', '(', ')', 
  '[', ']', '[<', '>]', '[|', '|]', '{', '}', '\'', '#', ':?>', ':?', ':>', 
  '..', '::', ':=', ';;', ';', '=_', '?', '??', '(*)', '<@', '@>', '<@@', '@@>'];
const reserved_symbolic_sequences = ['~', '`']

function imm(x) {
  return token.immediate(x);
}

module.exports = grammar({
    name: 'fsharp',
    
    /**
     * an array of tokens that may appear anywhere in the language. This is often used for whitespace and comments. The default value of extras is to accept whitespace. To control whitespace explicitly, specify extras: $ => [] in your grammar.
     */
    extras: $ => [
      /\s/,
    ],
    /**
     * an array of rule names that should be automatically removed from the grammar by replacing all of their usages with a copy of their definition. This is useful for rules that are used in multiple places but for which you don’t want to create syntax tree nodes at runtime.
     */
    inline: $ => [],
    /**
     * an array of arrays of rule names. Each inner array represents a set of rules that’s involved in an LR(1) conflict that is intended to exist in the grammar. When these conflicts occur at runtime, Tree-sitter will use the GLR algorithm to explore all of the possible interpretations. If multiple parses end up succeeding, Tree-sitter will pick the subtree whose corresponding rule has the highest total dynamic precedence.
     */
    conflicts: $ => [
      [$._quote_op_left, $.symbolic_op],
      [$._quote_op_right, $.symbolic_op],
    ],
    /**
     * an array of token names which can be returned by an external scanner. External scanners allow you to write custom C code which runs during the lexing process in order to handle lexical rules (e.g. Python’s indentation tokens) that cannot be described by regular expressions.
     */
    externals: $ => [],
    /**
     * the name of a token that will match keywords for the purpose of the keyword extraction optimization.
     */
    word: null,
    /**
     * an array of hidden rule names which should be considered to be ‘supertypes’ in the generated node types file.
     */
    supertypes: $ => [],
    
    rules: {
      // used to have a top-level node to test with until top-level acutal nodes are fleshed out
      test: $ => choice(
        $.comment,
        $.symbolic_op,

        // literals
        //$.bytearray,
        //$.bytechar,
        //$.string,
        //$.char,

        //$.verbatim_string,
        //$.verbatim_bytearray,
        //$.triple_quoted_string,

        //$.ieee32,
        //$.ieee64,

        //$.int,
        //$.xint,
        //$.decimal,
        //$.bignum,
        //$.sbyte,
        //$.byte,
        //$.int16,
        //$.uint16,
        //$.int32,
        //$.uint32,
        //$.nativeint,
        //$.unativeint,
        //$.int64,
        //$.uint64,

        $.shebang,
        $.line_directive,
        $.cond_directive,

        $.active_pattern_op_name,
        $.long_ident,

        $.expr,
      ),
      
      // 3.1 Whitespace
      _whitespace: $ => repeat1(' '),
      _newline: $ => choice(
        '\n',
        '\r\n'),
      _whitespace_or_newline: $ => choice(
        $._whitespace,
        $._newline),

      // 3.2 Comments
      _single_line_comment: $ => seq("//", /[^\n\r]*/),
      _multi_line_comment: $ => seq("(*", repeat(/.|\n|\r/), "*)"),
      comment: $ => token(choice(
        // cannot use symbols in a token definition
        // see: https://github.com/tree-sitter/tree-sitter/issues/449
        seq("//", /[^\n\r]*/),  // single line
        seq("(*", repeat(/.|\n|\r/), "*)"))), // multi line

      // 3.3 Conditional Compilation
      cond_directive: $ => choice(
        $.if_directive,
        $.else_directive,
        $.endif_directive),
      // XXX line occupation rule ignored
      if_directive: $ => seq(
        "#if",
        $._if_expression_text),
      else_directive: $ => "#else",
      endif_directive: $ => "#endif",
      _if_expression_text: $ => choice(
        prec.left(1, seq($._if_expression_text, "||", $._if_expression_text)),
        prec.left(2, seq($._if_expression_text, "&&", $._if_expression_text)),
        prec.left(3, seq("!", $._if_expression_text)),
        prec.left(4, seq("(", $._if_expression_text, ")")),
        $._ident_text,
      ),
      
      // 3.4 Identifiers and Keywords
      _digit_char_imm: $ => imm(/[0-9]/),
      _letter_char: $ => /\p{Lu}|\p{Ll}|\p{Lt}|\p{Lm}|\p{Lo}|\p{Nl}/,
      _connecting_char: $ => /\p{Pc}/,
      _combining_char: $ => /\p{Mn}|\p{Mc}/,
      _formatting_char: $ => /\p{Cf}/,
      _identifier_start_char: $ => choice(
        $._letter_char, 
        /_/
      ),
      _identifier_char: $ => choice(
        $._letter_char,
        $._digit_char_imm,
        $._connecting_char,
        $._combining_char,
        $._formatting_char,
        /'/,
        /_/
      ),
      _ident_text: $ => prec.left(seq(
        $._identifier_start_char,
        repeat($._identifier_char))
      ),
      _escaped_ident_text: $ => /``([^`\n\r\t] | `[^`\n\r\t])+``/,
      ident: $ => choice(
        $._ident_text,
        $._escaped_ident_text
      ),

      keyword: $ => choice(
        ...keywords,
        ...reserved_words
      ),

      // 3.5 Strings and Characters
      _escape_char: $ => imm(/\\["\'ntbrafv]/),
      _non_escape_char: $ => imm(/\\[^"\'ntbrafv]/),
      // using \u0008 to model \b
      _simple_char_char: $ => imm(/[^\n\t\r\u0008\a\f\v'\\]/),
      _hex_digit_imm: $ => imm(/[0-9a-fA-F]/),
      _unicodegraph_short: $ => seq(
        imm('\\u'),
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
      ),
      _unicodegraph_long: $ => seq(
        imm('\\U'),
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
      ),
      _trigraph: $ => seq(imm('\\'), $._digit_char_imm, $._digit_char_imm, $._digit_char_imm),

      _char_char: $ => choice(
        $._simple_char_char,
        $._escape_char,
        $._trigraph,
        $._unicodegraph_short
      ),

      // note: \n is allowed in strings
      _simple_string_char: $ => /[^\t\r\u0008\a\f\v\\"]/,
      _string_char: $ => choice(
        $._simple_string_char,
        $._escape_char,
        $._non_escape_char,
        $._trigraph,
        $._unicodegraph_short,
        $._unicodegraph_long,
        $._newline
      ),
      _string_elem: $ => choice(
        $._string_char,
        seq('\\', $._newline, repeat($._whitespace), $._string_elem)
      ),
      char: $ => seq("'", $._char_char, imm("'")),
      string: $ => seq('"', repeat($._string_char), imm('"')),
      _verbatim_string_char: $ => choice(
        $._simple_string_char,
        $._non_escape_char,
        $._newline,
        '\\',
        ''
      ),
      verbatim_string: $ => seq('@"', repeat($._verbatim_string_char), imm('"')),
      bytechar: $ => seq("'", $._char_char, imm("'B")),
      bytearray: $ => seq('"', repeat($._string_char), imm('"B')),
      verbatim_bytearray: $ => seq('@"', repeat($._verbatim_string_char), imm('"B')),
      _simple_or_escape_char: $ => choice($._escape_char, imm(/[^'\\]/)),
      triple_quoted_string: $ => seq('"""', repeat($._simple_or_escape_char), imm('"""')),

      // 3.6 Symbolic Keywords
      symbolic_keyword: $ => choice(...symbolic_keywords, ...reserved_symbolic_sequences),

      // 3.7 Symbolic Operators
      _first_op_char: $ => /[!%&*+-./<=>@^|~]/,
      _op_char: $ => choice($._first_op_char, '?'),
      _quote_op_left: $ => choice("<@", "<@@"),
      _quote_op_right: $ => choice("@>", "@@>"),
      symbolic_op: $ => choice(
        "?", 
        "?<-", 
        seq($._first_op_char, repeat($._op_char)),
        $._quote_op_left,
        $._quote_op_right),

      // 3.8 Numeric Literals
      _octaldigit_imm: $ => imm(/[0-7]/),
      _bitdigit_imm:   $ => imm(/[0-1]/),
      int:             $ => seq(/[0-9]/, repeat($._digit_char_imm)),
      xint: $ => choice(
        seq(/0[xX]/, repeat1($._hex_digit_imm)),
        seq(/0[oO]/, repeat1($._octaldigit_imm)),
        seq(/0[bB]/, repeat1($._bitdigit_imm)),
      ),

      sbyte:      $ => seq(choice($.int, $.xint), imm('y')),
      byte:       $ => seq(choice($.int, $.xint), imm('uy')),
      int16:      $ => seq(choice($.int, $.xint), imm('s')),
      uint16:     $ => seq(choice($.int, $.xint), imm('us')),
      int32:      $ => seq(choice($.int, $.xint), imm('l')),
      uint32:     $ => seq(choice($.int, $.xint), imm(choice('ul', 'u'))),
      nativeint:  $ => seq(choice($.int, $.xint), imm('n')),
      unativeint: $ => seq(choice($.int, $.xint), imm('un')),
      int64:      $ => seq(choice($.int, $.xint), imm('L')),
      uint64:     $ => seq(choice($.int, $.xint), imm(choice('UL', 'uL'))),

      ieee32: $ => choice(seq($._float, imm("f")), seq($.xint, imm("lf"))),
      ieee64: $ => choice($._float, seq($.xint, imm("LF"))),

      bignum:     $ => seq($.int, imm(/[QRZING]/)),
      decimal:    $ => seq(choice($._float,$.int), imm(/[Mm]/)),

      _float: $ => token(choice(
        seq(/[0-9]+/, imm(/\.[0-9]*/)),
        seq(/[0-9]+/, optional(imm(/\.[0-9]*/)), imm(/[eE]/), optional(imm(/[+-]/)), imm(/[0-9]+/))
      )),

      // TODO 3.8.1 Post-filtering of Adjacent Prefix Tokens
      // TODO 3.8.2 Post-filtering of Integers Followed by Adjacent ".."
      // TODO 3.8.3 Reserved Numeric Literal Forms
      // 3.8.4 Shebang
      // XXX how to say begining/end of line?
      shebang: $ => /#!.*/,

      // 3.9 Line Directives
      line_directive: $ => choice(
        seq("# ", $.int),
        seq("# ", $.int, $.string),
        seq("# ", $.int, $.verbatim_string),
        seq("#line", $.int),
        seq("#line", $.int, $.string),
        seq("#line", $.int, $.verbatim_string),
      ),

      // TODO 3.10 Hidden Tokens
      // TODO 3.11 Identifier Replacements

      // 4. Basic Grammar Elements
      // 4.1 Operator Names
      ident_or_op: $ => prec.right(choice(
        $.ident,
        seq('(', $.op_name, ')'),
        "(*)"
      )),
      op_name: $ => choice(
        $.symbolic_op,
        $.range_op_name,
        $.active_pattern_op_name
      ),
      range_op_name: $ => choice(
        "..",
        ".. .."
      ),
      active_pattern_op_name: $ => choice(
        // full pattern
        seq("|", $.ident, repeat1(seq("|", $.ident)), "|"),
        // partial pattern
        seq("|", $.ident, repeat(seq("|", $.ident)), "|", "_", "|"),
      ),
      // 4.2 Long Identifiers
      long_ident : $ => seq($.ident, repeat1(seq(".", $.ident))),
      long_ident_or_op: $ => choice(
        seq($.long_ident, ".", $.long_ident_or_op),
        $.ident_or_op),

      // 4.3 Constants
      konst: $ => choice(
        $.sbyte, $.int16, $.int32, $.int64, $.byte, $.uint16, $.uint32, $.int, 
        $.uint64, $.ieee32, $.ieee64, $.bignum, $.char, $.string, 
        $.verbatim_string, $.triple_quoted_string, $.bytearray, 
        $.verbatim_bytearray, $.bytechar, "false", "true", seq("(", ")")),

      // 4.4 Operators and Precedence
      // 4.4.1 Categorization of Symbolic Operators
      infix_or_prefix_op: $ => prec.left(choice('+', '-', '+.', '-.', '%', '&', '&&')),
      prefix_op: $ => choice(
        $.infix_or_prefix_op, /~+/, 
        // !OP except !=
        /![!%&*+-./<>@^|~?][!%&*+-./<=>@^|~?]*/
      ),
      infix_op: $ => choice(
        $.infix_or_prefix_op,

        /\.*-[!%&*+-./<=>@^|~?]+/,
        /\.*\+[!%&*+-./<=>@^|~?]+/,
        /\.*||/,
        /\.*<[!%&*+-./<=>@^|~?]+/,
        /\.*>[!%&*+-./<=>@^|~?]+/,
        /\.*=/,
        /\.*|[!%&*+-./<=>@^|~?]+/,
        /\.*&[!%&*+-./<=>@^|~?]+/,
        /\.*\^[!%&*+-./<=>@^|~?]+/,
        /\.*\*[!%&*+-./<=>@^|~?]+/,
        /\.*\/[!%&*+-./<=>@^|~?]+/,
        /\.*%[!%&*+-./<=>@^|~?]+/,
        /\.*!=/,
        ":=", "::", "$", "or", "?",
      ),

      // TODO 4.4.2 Precedence of Symbolic Operators and Pattern/Expression Constructs
      // 5. Types and Type Constraints
      type: $ => choice(
        seq('(', $.type, ')'),
        seq($.type, '->', $.type),
        seq($.type, repeat1(seq('*', $.type))),
        $.typar,
        $.long_ident,
        seq($.long_ident, '<', $.type_args, '>'),
        seq($.long_ident, '<', '>'),
        seq($.type, $.long_ident),
        seq($.type, '[', repeat(','), ']'),
        seq($.type, $.typar_defns),
        seq($.typar, ':>', $.type),
        seq('#', $.type)),

      type_args: $ => seq($.type_arg, repeat(seq(',', $.type_arg))),
      type_arg: $ => choice(
        $.type,
        '$.measure', // TODO
        '$.static_parameter' //TODO
      ),
      atomic_type: $ => seq($.type, ':', choice(
        seq('#', $.type),
        $.typar,
        $.long_ident,
        seq($.long_ident, '<', $.type_args, '>'),
      )),
      typar: $ => choice(
        '_',
        seq("'", $.ident),
        seq("^", $.ident)),
      constraint: $ => choice(
        seq($.typar, ':>', $.type),
        seq($.typar, ':', 'null'),
        seq($.static_typars, ':', '(', $.member_sig, ')'),
        seq($.typar, ':', '(', 'new', ':', 'unit', '->', "'T", ')'), // really?
        seq($.typar, ':', 'struct'),
        seq($.typar, ':', 'not', 'struct'),
        seq($.typar, ':', 'enum', '<', $.type, '>'),
        seq($.typar, ':', 'unmanaged'),
        seq($.typar, ':', 'delegate', '<', $.type, ',', $.type, '>'),
        seq($.typar, ':', 'equality'),
        seq($.typar, ':', 'comparison')),
      typar_defn: $ => seq( optional($.attributes), $.typar),
      typar_defns: $ => seq(
        '<', $.typar_defn, repeat(seq(',', $.typar_defn)), optional($.typar_constraints)),
      typar_constraints: $ => seq(
        'when', $.constraint, repeat(seq('and', $.constraint))),
      static_typars: $ => choice(
        seq("^", $.ident),
        seq('(', $.ident, repeat(seq('or', $.ident)), ')')),
      // 6. Expressions
      expr: $ => choice(
        // a const value
        $.konst,
        // block expression
        seq('(', $.expr, ')'),
        // block expression
        seq('begin', $.expr, 'end'),
        // lookup expression
        $.long_ident_or_op,
        // dot lookup expression
        seq($.expr, '.', $.long_ident_or_op),
        // application expression
        seq($.expr, $.expr),
        // high precedence application
        seq($.expr, '(', $.expr, ')'),
        // type application expression
        seq($.expr, '<', $.type, repeat(seq(',', $.type)), '>'),
        // infix application expression
        seq($.expr, $.infix_op, $.expr),
        // prefix applicaiton expression
        seq($.prefix_op, $.expr),
        // indexed lookup expression
        seq($.expr, '.', '[', $.expr, ']'),
        // slice expression
        seq($.expr, '.', '[', $.slice_ranges, ']'),
        // assignment expression
        seq($.expr, '<-', $.expr),
        // tuple expression
        seq($.expr, repeat1(seq(',', $.expr))),
        // simple object expression
        seq('new', $.type, $.expr),
        // object expression
        seq('{', 'new', $.base_call, $.object_members, $.interface_impls, '}'),
        // record expression
        seq('{', $.field_initializers, '}'),
        // record cloning expression
        seq('{', $.expr, 'with', $.field_initializers, '}'),
        // list expression
        seq('[', optional($._expr_list), ']'),
        // array expression
        seq('[|', optional($._expr_list), '|]'),
        // delayed expression
        seq('lazy', $.expr),
        // the "null" value for a reference type
        'null',
        // type annotation
        seq($.expr, ':', $.type),
        // static upcast coercion
        seq($.expr, ':>', $.type),
        // dynamic type test
        seq($.expr, ':?', $.type),
        // dynamic downcast coercion
        seq($.expr, ':?>', $.type),
        // static upcast expression
        seq('upcast', $.expr),
        // dynamic downcast expression
        seq('downcast', $.expr),
        // function definition expression
        seq('let', $.function_defn, 'in', $.expr),
        // value definition expression
        seq('let', $.value_defn, 'in', $.expr),
        // recursive definition expression
        seq('let', 'rec', $.function_or_value_defns, 'in', $.expr),
        // deterministic disposal expression
        seq('use', $.ident, '=', $.expr, 'in', $.expr),
        // function expression
        seq('fun', $.argument_pats, '->', $.expr),
        // matching function expression
        seq('function', $.rules),
        // sequential execution expression
        seq($.expr, ';', $.expr),
        // matching function expression
        seq('function', $.rules),
        //sequential execution expression
        seq($.expr, ';', $.expr),
        //match expression
        seq('match', $.expr, 'with', $.rules),
        //try/with expression
        seq('try', $.expr, 'with', $.rules),
        //try/finally expression
        seq('try', $.expr, 'finally', $.expr),
        //conditional expression
        seq('if', $.expr, 'then', $.expr, optional($.elif_branches), optional($.else_branch)),
        //while loop 
        seq('while', $.expr, 'do', $.expr, 'done'),
        //simple for loop
        seq('for', $.ident, '=', $.expr, 'to', $.expr, 'do', $.expr, 'done' ),
        //enumerablefor loop
        seq('for', $.pat, 'in', $.expr_or_range_expr, 'do', $.expr, 'done' ),
        //assert expression
        seq('assert', $.expr),
        //quoted expression
        seq('<@', $.expr, '@>'),
        //quoted expression
        seq('<@@', $.expr, '@@>'),
        //expression splice
        seq('%', $.expr),
        //weakly typed expression splice
        seq('%%', $.expr),
        //static member invocation
        seq('(', $.static_typars, ':', '(', $.member_sig, ')', $.expr, ')')),
      _expr_list: $ => seq($.expr, repeat(seq(choice(';', '\n'), $.expr))),
      _exprs: $ => seq($.expr, repeat(seq(',', $.expr))), // XXX not used?
      expr_or_range_expr: $ => choice(
        $.expr,
        $.range_expr),
      elif_branches: $ => repeat1($.elif_branch),
      elif_branch: $ => seq('elif', $.expr, 'then', $.expr),
      else_branch: $ => seq('else', $.expr),
      function_or_value_defn: $ => choice(
        $.function_defn,
        $.value_defn),
      function_defn: $ => seq(
        optional('inline'),
        optional('access'), // TODO
        $.ident_or_op,
        optional($.typar_defns),
        $.argument_pats,
        optional($.return_type),
        '=',
        $.expr),
      value_defn: $ => seq(
        optional('mutable'),
        optional('access'), //TODO
        $.pat,
        optional($.typar_defns),
        optional($.return_type),
        '=',
        $.expr),
      return_type: $ => seq(':', $.type),
      function_or_value_defns: $ => seq(
        $.function_or_value_defn,
        repeat(seq('and', $.function_or_value_defn))),
      argument_pats: $ => repeat1($.atomic_pat),
      field_initializer: $ => seq($.long_ident, '=', $.expr),
      field_initializers: $ => seq(
        $.field_initializer, 
        repeat(seq(';', $.field_initializer))),
      object_construction: $ => choice(
        seq($.type, $.expr),
        $.type),
      base_call: $ => choice(
        $.object_construction,
        seq($.object_construction, 'as', $.ident)),
      interface_impls: $ => repeat1($.interface_impl),
      interface_impl: $ => seq(
        'interface',
        $.type,
        optional($.object_members)),
      object_members: $ => seq(
        'with',
        $.member_defns,
        'end'),
      member_defns: $ => repeat1($.member_defn),
      comp_or_range_expr: $ => choice(
        $.comp_expr,
        $.short_comp_expr,
        $.range_expr
      ),
      comp_expr: $ => choice(
        seq('let!', $.pat, '=', $.expr, 
          'in', $.comp_expr),
        seq('let', $.pat, '=', $.expr, 
          'in', $.comp_expr),
        seq('do!', $.expr, 
          'in', $.comp_expr),
        seq('do', $.expr, 
          'in', $.comp_expr),
        seq('use!', $.pat, '=', $.expr, 
          'in', $.comp_expr),
        seq('use', $.pat, '=', $.expr, 
          'in', $.comp_expr),
        seq('yield!', $.expr),
        seq('yield', $.expr),
        seq('return!', $.expr),
        seq('return', $.expr),
        seq('match', $.expr, 'with', 
          $.pat, '->', $.comp_expr, 
          repeat(seq('|', $.pat, '->', $.comp_expr))),
        seq('try', $.comp_expr, 'with', 
          $.pat, '->', $.comp_expr, 
          repeat(seq('|', $.pat, '->', $.comp_expr))),
        seq('try', $.comp_expr, 
          'finally', $.expr),
        seq('while', $.expr, 
          'do', $.comp_expr, 
          'done'),
        seq('for', $.ident, '=', $.expr, 'to', $.expr, 
          'do', $.comp_expr, 
          'done'),
        seq('for', $.pat, 'in', $.expr_or_range_expr, 
          'do', $.comp_expr, 
          'done'),
        seq($.comp_expr, ';', $.comp_expr),
        $.expr
      ),
      short_comp_expr: $ => seq(
        'for', $.pat, 'in', $.expr_or_range_expr, '->', $.expr),
      range_expr: $ => choice(
        seq($.expr, '..', $.expr),
        seq($.expr, '..', $.expr, '..', $.expr)),
      slice_ranges: $ => seq(
        $.slice_range,
        repeat(seq(',', $.slice_range)),
      ),
      slice_range: $ => choice(
        $.expr,
        seq($.expr, '..'),
        seq('..', $.expr),
        seq($.expr, '..', $.expr),
        '*'
      ),
      // TODO: skipping till chapter 7...
      // 7. Patterns
      rule: $ => seq($.pat, optional($.pattern_guard), '->', $.expr),
      pattern_guard: $ => seq('when', $.expr),
      pat: $ => choice(
        // constant pattern
        $.konst, 
        // named pattern
        seq($.long_ident, optional($.pat_param), optional($.pat)),
        // wildcard pattern
        '_',
        // "as" pattern
        seq($.pat, 'as', $.ident),
        // disjunctive pattern
        seq($.pat, '|', $.pat),
        // conjunctive pattern
        seq($.pat, '&', $.pat),
        // "cons" pattern
        seq($.pat, '::', $.pat),
        // pattern with type constraint
        seq($.pat, ':', $.type),
        // tuple pattern
        seq($.pat, repeat1(seq(',', $.pat))),
        // parenthesized pattern
        seq('(', $.pat, ')'),
        // list pattern
        $.list_pat,
        // array pattern
        $.array_pat,
        // record pattern
        $.record_pat,
        // dynamic type test pattern
        seq(':?', $.atomic_type),
        // dynamic type test pattern
        seq(':?', $.atomic_type, 'as', $.ident),
        // null_test pattern
        'null',
        // pattern with attributes
        seq($.attributes, $.pat)
      ),
      list_pat: $ => choice(
        seq('[', ']'),
        seq('[', $.pat, repeat(seq(';', $.pat)), ']')),
      array_pat: $ => choice(
        seq('[|', '|]'),
        seq('[|', $.pat, repeat(seq(';', $.pat)), '|]')),
      record_pat: $ => seq(
        '{', $.field_pat, repeat(seq(';', $.field_pat))),
      atomic_pat: $ => seq(
        $.pat, ':', choice(
          $.konst, $.long_ident, $.list_pat, $.record_pat, $.array_pat,
          seq('(', $.pat, ')'),
          seq(':?', $.atomic_type), 'null', '_')),
      field_pat: $ => seq($.long_ident, '=', $.pat),
      pat_param: $ => choice(
        $.konst,
        $.long_ident,
        seq('[', $.pat_param, repeat(seq(';', $.pat_param)), ']'),
        seq('(', $.pat_param, repeat(seq(',', $.pat_param)), ')'),
        seq($.long_ident, $.pat_param),
        seq($.pat_param, ':', $.type),
        seq('<@', $.expr, '@>'),
        seq('<@@', $.expr, '@@>'),
        'null'
      ),
      // when the spec writes xxx ... xxx, does it always mean one or more?
      // TODO extend the tree-sitter DSL with 'one_or_more'
      pats: $ => seq($.pat, repeat(seq(',', $.pat))),
      field_pats: $ => seq($.field_pat, repeat(seq(';', $.field_pat))),
      rules: $ => seq(
        optional('|'), $.rule,
        repeat(seq('|', $.rule))),
      // undefined as of yet
      member_defn: $ => "TODO",
      attributes: $ => "TODO",
      member_sig: $ => 'see section 10', // TODO
    }
  });
