// NOTES
// - strict grammar (like linting?) and not-as-strict grammar may be useful
// - loosening ideas:
//   - allow metadata in more locations
//   - allow ##Other (not just ##Inf, -##Inf, ##NaN)
//   - allow # in keywords
//   - allow ::/
//   - allow \uD800 through \uDFFF
//   - allow things like seq('#{', ... to be specified as seq('#', '{', ...
// - metadata -- where exactly is this allowed other than in front of symbols,
//   collection literals, and other metadata?
// - prevent repeated colons within symbols
// - review symbol and keyword specs and definitions
// - is there any point in trying to distinguish between symbols and
//   special forms (e.g. new vs +)
// - can strings have unicode escapes in them?
// - "surface" distinctions between things like _simple_symbol and
//   _qualified_symbol?
// - any special support for (comment ) form?
// - consider using fields
// - what exactly is the conflicts stuff doing?
// - someone used ^ as a symbol -- which you can do via the symbol function,
//   but this seems to contradict the reader page

// symbolPat from LispReader.java (for keywords and symbols?)
//   "[:]?([\\D&&[^/]].*/)?(/|[\\D&&[^/]][^/]*)"
//
// https://clojure.org/reference/reader#_symbols
//   1. Symbols begin with a non-numeric char -- XXX: see 2 for limits?
//   2. Can contain alphanumeric chars and *, +, !, -, _, ', ?, <, > and =
//   3. / can be used once in the middle of a symbol (sep the ns from the name)
//   4. / by itself names the division function
//   5. . special meaning can be used >= 1 times in the middle of a symbol
//        to designate a fully-qualified class name, e.g. java.util.BitSet,
//        or in namespace names.
//   6. Symbols beginning or ending with . are reserved by Clojure
//   7. Symbols beginning or ending with : are reserved by Clojure
//   8. A symbol can contain one or more non-repeating ':'s
//
// missing
//   9. $, &, % -- in body and end of symbol
//
// undocumented
//   -1a can be made a symbol, but reader will reject?  repl rejects
//     => number parsing takes priority?
//   'a can be made a symbol, but reader will reject?  repl -> quote
//
// implied?
//   doesn't start with ,
//   doesn't start with '
//   doesn't start with #
//   doesn't start with `
//   doesn't start with @
//   doesn't start with ^
//   doesn't start with \
//   doesn't start with ;
//   doesn't start with ~
//   doesn't start with "
//   doesn't start with ( )
//   doesn't start with { }
//   doesn't start with [ ]
//
// extra:
//
//   is my-ns// valid?
//
//     "Consistency of symbols between different readers/edn"
//
//     foo// should be valid.
//
//     2014-09-16 clojure-dev google group alex miller
//
//     https://groups.google.com/d/msg/clojure-dev/b09WvRR90Zc/c3zzMFqDsRYJ
//
//     "CLJ-1238 Allow EdnReader to read foo// (matches LispReader behavior)"
//
//     changelog for clojure 1.6
//
//   is # allowed as a constituent character in keywords?
//
//     "Bug in reader or repl? reading keyword :#abc"
//
//     Symbols begin with a non-numeric character and can contain
//     alphanumeric characters and . * + ! - _ ? $ % & =. If -, + or
//     . are the first character, the second character must be
//     non-numeric. Additionally, : # are allowed as constituent
//     characters in symbols other than as the first character.
//
//     2013-05-02 clojure google group colin jones (fwd by dave sann)
//
//     https://groups.google.com/d/msg/clojure/lK7juHxsPCc/TeYjxoW_3csJ
//
//     Keywords are identifiers that typically designate
//     themselves. They are semantically akin to enumeration
//     values. Keywords follow the rules of symbols, except they can
//     (and must) begin with :, e.g. :fred or :my/fred. If the target
//     platform does not have a keyword type distinct from a symbol
//     type, the same type can be used without conflict, since the
//     mandatory leading : of keywords is disallowed for symbols.
//
//     https://github.com/edn-format/edn#symbols
//
// repl accepts other things, but that doesn't necssarily mean this code should
const SYM_START =
      /[^0-9\/:,'#`@^\\;~"(){}\[\]\s]/; // 1, 3, 4, 7
const ALPHA_NUM =
      /[a-zA-Z0-9]/;                    // 2
const DOT =
      '.';                              // 5
const COLON =
      ':';                              // partially 8
const SYM_OTHER =
      /[*+!\-_'?<>=#]/;                 // 2
const SYM_MISSING =
      /[&$%]/;                          // 9

// XXX: 8 is not fully supported
//      - may be doable via externals (c++)?
//      - actually, might be doable via regex

// https://clojure.org/reference/reader#_literals
//   0. Keywords are like symbols, except:
//   1. They can and must begin with a colon, e.g. :fred.
//   ~~2. They cannot contain '.' in the name part, or name classes.~~
//   3. They can contain a namespace, :person/name, which may contain '.'s.
//   4. A keyword that begins with two colons is auto-resolved in the current 
//      namespace to a qualified keyword:
//      - If the keyword is unqualified, the namespace will be the current
//        namespace. In user, ::rect is read as :user/rect.
//      - If the keyword is qualified, the namespace will be resolved using 
//        aliases in the current namespace. In a namespace where x is aliased 
//        to example, ::x/foo resolves to :example/foo.

// extra:
//
//   :/ is a legal keyword:
//
//     alexmiller: @gfredericks :/ is "open for the language to start
//     interpreting" and not an invalid keyword so should be ok to generate.
//     and cljs should fix it's weirdness. (#clojure-dev 2019-06-07)
//
//   . CAN be in the name part:
//
//     "[Bug?] Keyword constraints not enforced"
//
//     I think you've both misread "they cannot name classes" to be - "They
//     cannot contain class names".
//
//     The symbol String can name a class but the keyword :String can't,
//     that's all I meant there.
//
//     As far as '.', that restriction has been relaxed. I'll try to touch
//     up the docs for the next release.
//
//     2008-11-25 clojure google group rich hickey
//
//     https://groups.google.com/d/msg/clojure/CCuIp_bZ-ZM/THea7NF91Z4J
//
//   Whether keywords can start with numbers:
//
//     "puzzled by RuntimeException"
//
//     we currently allow keywords starting with numbers and seem to have
//     decided this is ok. I would like to get Rich to approve a change to
//     the page and do so.
//
//     2014-04-25 clojure google group alex miller
//
//     https://groups.google.com/forum/#!msg/clojure/XP1XAaDdKLY/kodfZTk8eeoJ
//
//     From a discussion in #clojure, it emerged that while :foo/1 is
//     currently not allowed, ::1 is.
//
//     2014-12-10 nicola mometto
//
//     https://clojure.atlassian.net/browse/CLJ-1286
//
//     "Clarify and align valid symbol and keyword rules for Clojure (and edn)"
//
//     https://clojure.atlassian.net/browse/CLJ-1527
//
//     consistency of symbols between different readers/edn
//
//     https://groups.google.com/forum/#!topic/clojure-dev/b09WvRR90Zc
//
//   Whether # is allowed in a keyword:
//
//     "Clarification on # as valid symbol character"
//
//     this works now, but is not guaranteed to always be valid
//
//     2016-11-08 clojure google group alex miller
//
//     https://groups.google.com/forum/#!topic/clojure/CwZHu1Eszbk

// XXX: start w/ num ok? repl says yes
const KWD_AFTER_COLON_START =
      /[^\/:\s]/;

// XXX: 8 (from syms) is not fully supported -- see similar remark above

// XXX: w/o the \s at the end of the regexes above, newline seems to be
//      interpreted as a symbol...

// shared by string and regular_expression
// adapted what tree-sitter-haskell did -- thanks!
const STRING_CONTENT =
      repeat(choice(/[^\\"]/,
                    /\\(.|\n)/));

// XXX: consider elimination of regexes?
const SIGN =
      optional(choice('-', '+'));
const DIGIT =
      /[0-9]/;
const POSITIVE_DIGIT =
      /[1-9]/;
const HEX_DIGIT =
      /[0-9a-fA-F]/;
const HEX_QUAD =
      /[0-9a-fA-F]{4}/;
const OCTAL_NUMBER =
      /[0-7]+/;
const RADIX =
      choice('2', '3', '4', '5', '6', '7', '8', '9', '10',
             '11', '12', '13', '14', '15', '16', '17', '18', '19', '20',
             '21', '22', '23', '24', '25', '26', '27', '28', '29', '30',
             '31', '32', '33', '34', '35', '36');

// https://clojure.org/reference/reader#_literals
//   1. Integers can be indefinitely long and will be read as Longs when
//      in range and clojure.lang.BigInts otherwise. 
//   2. Integers with an N suffix are always read as BigInts.
//   3. When possible, they can be specified in any base with radix from 
//      2 to 36 (see Long.parseLong()); for example 2r101010, 8r52, 36r16, 
//      and 42 are all the same Long.
//   4. Floating point numbers are read as Doubles; with M suffix they are 
//      read as BigDecimals.
//   5. Ratios are supported, e.g. 22/7.

// intPat
//   "([-+]?)(?:(0)|([1-9][0-9]*)|0[xX]([0-9A-Fa-f]+)|0([0-7]+)|([1-9][0-9]?)[rR]([0-9A-Za-z]+)|0[0-9]+)(N)?"

// 0[0-9]+ is for better errors -- thanks seancorfield and andyfingerhut

// ratioPat
//   "([-+]?[0-9]+)/([0-9]+)"

// floatPat
//   "([-+]?[0-9]+(\\.[0-9]*)?([eE][-+]?[0-9]+)?)(M)?"

module.exports = grammar({
  name: 'clojure',

  extras: $ =>
    [/[\s,]/, $.comment],

  rules: {
    source_file: $ =>
      repeat($._form),

    comment: $ =>
      /;.*/,

    _form: $ =>
      choice($._non_discard,
             $.discard),

    _non_discard: $ =>
      choice($._literal,
             $._reader_macro),

    // at repl: #_ 1 2 != # _ 1 2
    discard: $ =>
      seq('#_',
          optional($.discard),
          $._non_discard),

    _literal: $ =>
      choice($.boolean,
             $.character,
             $.keyword,
             $.list,
             $.map,
             $.nil,
             $.number,
             $.string,
             $.symbol,
             $.vector),

    boolean: $ =>
      choice('false',
             'true'),

    // see LispReader.java's CharacterReader's invoke method
    character: $ =>
      choice($._any_char,
             $._special_char,
             $._unicode_char,
             $._octal_char),

    // '\ ' is permitted and people seem to use it
    // '\' followed by a newline appears in some source
    _any_char: $ =>
      /\\(.|\n)/,

    _special_char: $ =>
      /\\(backspace|formfeed|newline|return|space|tab)/,

    // everything other than \uD800 through \uDFFF inclusive is ok, but
    // not worth trying to be precise
    _unicode_char: $ =>
      token(seq('\\u',
                HEX_QUAD)),

    _octal_char: $ =>
      token(seq('\\o',
                OCTAL_NUMBER)),
    
    nil: $ =>
      'nil',

    string: $ =>
      token(seq('"',
                STRING_CONTENT,
                '"')),

    symbol: $ =>
      choice($._simple_symbol,
             $._qualified_symbol),
 
    // XXX: might need some work
    _simple_symbol: $ =>
      token(choice('/',
                   seq(SYM_START,
                       optional(seq(repeat(choice(ALPHA_NUM,
                                                  SYM_OTHER,
                                                  DOT,
                                                  COLON, // XXX
                                                  SYM_MISSING)),
                                    choice(ALPHA_NUM,
                                           SYM_OTHER,
                                           DOT,
                                           SYM_MISSING)))))),

    simple_symbol: $ =>
      $._simple_symbol,

    // XXX: might need some work
    _qualified_symbol: $ =>
      token(seq(seq(SYM_START,
                    optional(seq(repeat(choice(ALPHA_NUM,
                                               SYM_OTHER,
                                               DOT,
                                               COLON, // XXX
                                               SYM_MISSING)),
                                 choice(ALPHA_NUM,
                                        SYM_OTHER,
                                        DOT, // XXX: test.check and repl favor
                                        SYM_MISSING)))),
                '/',
                choice('/',
                       seq(SYM_START,
                           optional(seq(repeat(choice(ALPHA_NUM,
                                                      SYM_OTHER,
                                                      DOT,
                                                      COLON, // XXX
                                                      SYM_MISSING)),
                                        choice(ALPHA_NUM,
                                               SYM_OTHER,
                                               DOT,
                                               SYM_MISSING))))))),

    qualified_symbol: $ =>
      $._qualified_symbol,

    keyword: $ =>
      choice($._simple_keyword,
             $._qualified_keyword),

    // XXX: probably needs more work
    _simple_keyword: $ =>
      token(choice(':/',
                   seq(/(:|::)/,
                       seq(KWD_AFTER_COLON_START,
                           optional(seq(repeat(choice(ALPHA_NUM,
                                                      SYM_OTHER,
                                                      DOT,
                                                      COLON, // XXX
                                                      SYM_MISSING)),
                                        choice(ALPHA_NUM,
                                               SYM_OTHER,
                                               DOT,
                                               SYM_MISSING))))))),

    simple_keyword: $ =>
      $._simple_keyword,

    // XXX: probably needs more work
    // XXX: consider separating out auto-resolved stuff?
    _qualified_keyword: $ =>
      token(seq(/(:|::)/,
                seq(KWD_AFTER_COLON_START,
                    optional(seq(repeat(choice(ALPHA_NUM,
                                               SYM_OTHER,
                                               DOT,
                                               COLON, // XXX
                                               SYM_MISSING)),
                                 choice(ALPHA_NUM,
                                        SYM_OTHER,
                                        DOT,
                                        SYM_MISSING)))),
                '/',
                seq(SYM_START,
                    optional(seq(repeat(choice(ALPHA_NUM,
                                               SYM_OTHER,
                                               COLON, // XXX
                                               DOT,
                                               SYM_MISSING)),
                                 choice(ALPHA_NUM,
                                        SYM_OTHER,
                                        DOT,
                                        SYM_MISSING)))))),

    qualified_keyword: $ =>
      $._qualified_keyword,

    number: $ =>
      choice($._int,
             $._hex,
             $._octal,
             $._radix,
             $._float,
             $._ratio),

    // so it turns out that using literal regexes instead of strings
    // seems to make predicting and influencing which tokens have
    // precedence more difficult.  at least that's what it seemed like
    // so the following were rewritten from literal regexes.  there may
    // still be some rewriting to do.
    //
    // the prec stuff below is partly so that numbers are preferred to
    // symbols when lexing, for some reason tree-sitter was
    // interpreting stuff that looked like numbers as symbols -- they may
    // also affect preference among the numbers too
    _int: $ =>
      token(prec(2, seq(SIGN,
                        choice('0',
                               seq(POSITIVE_DIGIT,
                                   repeat(DIGIT))),
                        optional('N')))),

    _hex: $ =>
      token(prec(2, seq(SIGN,
                        seq('0',
                            choice('x', 'X'),
                            repeat1(HEX_DIGIT)),
                        optional('N')))),

    _octal: $ =>
      token(prec(2, seq(SIGN,
                        seq('0',
                            OCTAL_NUMBER,
                            optional('N'))))),

    _radix: $ =>
      token(prec(2, seq(SIGN,
                        seq(RADIX,
                            choice('r', 'R'),
                            repeat1(ALPHA_NUM)),
                        optional('N')))),

    _float: $ =>
      token(prec(2, seq(SIGN,
                        seq(repeat1(DIGIT),
                            optional(seq('.',
                                         repeat(DIGIT))),
                            optional(seq(choice('e', 'E'),
                                         SIGN,
                                         repeat1(DIGIT)))),
                        optional('M')))),

    _ratio: $ =>
      token(prec(2, seq(SIGN,
                        seq(repeat1(DIGIT),
                            '/',
                            repeat1(DIGIT))))),

    _list: $ =>
      seq('(',
          repeat($._form),
          ')'),

    list: $ =>
      $._list,

    vector: $ =>
      seq('[',
          repeat($._form),
          ']'),

    // https://clojure.org/reference/reader#_maps
    map: $ =>
      choice($._simple_map,
             $._namespaced_map),

    _simple_map: $ =>
      seq('{',
          repeat($._form),
          '}'),

    // https://clojure.org/reference/reader#map_namespace_syntax
    // https://cljs.github.io/api/syntax/ns-map-alias
    //
    // XXX: #:{} not valid at repl
    // at repl: #::{} == #:: {}
    // at repl: #::{} != #: :{}
    // at repl: #:clojure.string{} == #:clojure.string {}
    // at repl: #:clojure.string{} != #: clojure.string{}
    // at repl: #::cs{} == #::cs {}
    // at repl: #::cs{} != #:: cs{}
    _namespaced_map: $ =>
      seq(/#(:|::)/, // XXX: #:{} not valid
          optional($._simple_symbol),
          // XXX: reuse _simple_map innards here?
          '{',
          repeat($._form),
          '}'),
    
    _reader_macro: $ =>
      choice($.anonymous_function,
             $.deref,
             $.metadata,
             $.quote,
             $.reader_conditional,
             $.regular_expression,
             $.set,
             $.splicing_reader_conditional,
             $.symbolic_value,
             $.syntax_quote,
             $.tag,
             $.unquote,
             $.unquote_splicing,
             $.var_quote),

    // at repl: #(+) != # (+)
    anonymous_function: $ =>
      seq('#(',
          repeat($._form),
          ')'),
    
    // at repl: @a == @ a
    deref: $ =>
      seq('@',
          $._form),

    // older code uses #^
    metadata: $ =>
      seq(choice('^', '#^'),
          choice($.keyword,
                 $.map,
                 $.symbol,
                 $.string)),

    // at repl: 'a == ' a
    quote: $ =>
      seq("'",
          $._form),

    // at repl: #?() 1 == #? () 1
    reader_conditional: $ =>
      seq('#?',
          $._list),

    // at repl: #"." != # "."
    regular_expression: $ =>
      token(seq('#"',
                STRING_CONTENT,
                '"')),

    // at repl: #{:a} != # {:a}
    set: $ =>
      seq('#{',
          repeat($._form),
          '}'),

    splicing_reader_conditional: $ =>
      seq('#?@',
          $._list),

    // XXX: illegal(?) keywords that end in ## sometimes partially parse as
    //      symbolic values
    // at repl: ##Inf == ## Inf
    symbolic_value: $ =>
      seq('##',
          choice('-Inf',
                 'Inf',
                 'NaN')),

    // at repl: `a == ` a
    syntax_quote: $ =>
      seq('`',
          $._form),

    // at repl:
    //   #uuid "40fff7cc-2e57-42dd-b737-533820ed53e9" ==
    //   # uuid "40fff7cc-2e57-42dd-b737-533820ed53e9"
    tag: $ =>
      seq('#',
          $.symbol),

    // at repl: `~a == `~ a == ` ~ a
    unquote: $ =>
      seq('~',
          $._form),

    // at repl: `(~@a) != `(~ @a)
    unquote_splicing: $ =>
      seq('~@',
          $._form),

    // XXX: #'~a is now handled, but is that enough?
    // at repl: #'a != # 'a
    // at repl: #'a == #' a
    var_quote: $ =>
      seq("#'",
          choice($.symbol,
                 $.unquote)),
  }
});
