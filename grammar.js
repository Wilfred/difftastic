// for additional details, see notes.txt

// current considerations
//
// - repl accepts some things that are not officially "supported"
// - (e.g. symbols containing #)
//
// - repl does not accept certain things (e.g. symbol with repeated
//   colons in body -- officially stated as not supported)
//
// neither is by itself a sole criteria in determining whether this
// code will parse something or not because there may be trade-offs
// in trying to support certain things.
//
// one aim is to try to parse what is correct (in the sense of
// officially supported), but also be looser in parsing additional
// things.  this is more or less in line with advice from tree-sitter
// folks.
//
// there is the reality of technical feasibility as well as cost of
// implementation and maintenance burden, however :)

// note on use of regular expressions and literal strings for tokens
//
// it turns out that using regexes instead of literal strings seems to
// make predicting and influencing which tokens have precedence more
// difficult.  so some portions are deliberately rewritten using
// literal strings instead of regexes.  there may still be some
// rewriting to do.
//
// the prec stuff for numbers is partly so that numbers are preferred
// to symbols when lexing, for some reason tree-sitter was
// interpreting stuff that looked like numbers as symbols -- they may
// also affect preference among the numbers too

// numbers
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

// symbols (and keywords use some of this)
const SYM_START =
      /[^0-9\/:,'#`@^\\;~"(){}\[\]\s]/; // XXX: lacking \s, nl seen as symbol...
const ALPHA_NUM =
      /[a-zA-Z0-9]/;
const DOT =
      '.';
const COLON =
      ':';
const SYM_OTHER =
      /[*+!\-_'?<>=#]/;
const SYM_MISSING =
      /[&$%]/;

const NON_SLASH_SIMPLE_SYMBOL =
      token(seq(SYM_START,
                optional(seq(repeat(choice(ALPHA_NUM,
                                           SYM_OTHER,
                                           DOT,
                                           COLON, // XXX
                                           SYM_MISSING)),
                             choice(ALPHA_NUM,
                                    SYM_OTHER,
                                    // XXX: test.check / repl allow
                                    //      in namespace part of qualified sym
                                    DOT,
                                    SYM_MISSING)))));

const SIMPLE_SYMBOL =
      token(choice('/',
                   NON_SLASH_SIMPLE_SYMBOL));

// keywords
const KWD_AFTER_COLON_START =
      // starting w/ number ok for simple keyword...
      // but repl says no for qualified keyword (i.e. :my-ns/1)
      /[^\/:\s]/;

const NON_SLASH_SIMPLE_KEYWORD =
      token(seq(KWD_AFTER_COLON_START,
                optional(seq(repeat(choice(ALPHA_NUM,
                                           SYM_OTHER,
                                           DOT,
                                           COLON, // XXX
                                           SYM_MISSING)),
                             choice(ALPHA_NUM,
                                    SYM_OTHER,
                                    DOT,
                                    SYM_MISSING)))));

const SIMPLE_KEYWORD =
      token(choice(':/',
                   seq(/(:|::)/,
                       NON_SLASH_SIMPLE_KEYWORD)));

// shared by strings and regexes
const STRING_CONTENT =
      repeat(choice(/[^\\"]/,
                    /\\(.|\n)/)); // thanks to tree-sitter-haskell

module.exports = grammar({
  name: 'clojure',

  extras: $ =>
    [/\s/, ',', $.comment],

  // XXX: for convenience when tweaking
  // conflicts: $ => [
  // ],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source_file: $ =>
      repeat($._form),

    comment: $ =>
      /;.*/,

    _form: $ =>
      // inspired by oakmac's grammar and mseddon + PEZ calva tokenizer, ty!
      seq(repeat($._sigil),
          choice(// literals-ish, kinda
                 $.boolean,
                 $.character,
                 $.keyword,
                 $.list, // not really a literal
                 $.map,
                 $.nil,
                 $.number,
                 $.string,
                 $.symbol,
                 $.vector,
                 // reader macro-related, kinda
                 $.anonymous_function,
                 $.reader_conditional,
                 $.regular_expression,
                 $.set,
                 $.splicing_reader_conditional,
                 $.symbolic_value)),

    // literals-ish, kinda

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

    // \uD800 through \uDFFF inclusive is not ok
    // however, not worth expressing
    _unicode_char: $ =>
      token(seq('\\u',
                HEX_QUAD)),

    // like with _unicode_char, there are more restrictions
    // however, not worth expressing
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
      choice(SIMPLE_SYMBOL,
             $._qualified_symbol),

    _qualified_symbol: $ =>
      token(seq(NON_SLASH_SIMPLE_SYMBOL,
                '/',
                // cuz things like clojure.core// is allowed
                SIMPLE_SYMBOL)),

    keyword: $ =>
      choice(SIMPLE_KEYWORD,
             $._qualified_keyword),

    _qualified_keyword: $ =>
      token(seq(/(:|::)/,
                NON_SLASH_SIMPLE_KEYWORD,
                '/',
                // at repl: :user/8 => Invalid token
                NON_SLASH_SIMPLE_SYMBOL)),

    number: $ =>
      choice($._int,
             $._hex,
             $._octal,
             $._radix,
             $._float,
             $._ratio),

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

    // shared w/ list and reader conditionals
    _list: $ =>
      seq('(',
          repeat($._form),
          ')'),

    list: $ =>
      $._list,

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
    // at repl: #::{} == #:: {}
    // at repl: #::{} != #: :{}
    // at repl: #:clojure.string{} == #:clojure.string {}
    // at repl: #:clojure.string{} != #: clojure.string{}
    // at repl: #::cs{} == #::cs {}
    // at repl: #::cs{} != #:: cs{}
    _namespaced_map: $ =>
      seq(choice(seq('#:',
                     SIMPLE_SYMBOL), // #:{} invalid, so symbol not optional
                 seq('#::',
                     optional(SIMPLE_SYMBOL))),
          $._simple_map),

    vector: $ =>
      seq('[',
          repeat($._form),
          ']'),

    // reader-conditional-ish things

    // at repl: #(+) != # (+)
    anonymous_function: $ =>
      seq('#(',
          repeat($._form),
          ')'),

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
    //      symbolic values -- verify still true?
    // at repl: ##Inf == ## Inf
    symbolic_value: $ =>
      seq('##',
          choice('-Inf',
                 'Inf',
                 'NaN')),

    // the "potentially multiple sigils in front of nearly everything"
    // approach seems to be a good overall trade-off

    _sigil: $ =>
      choice($.deref,
             $.discard,
             $.metadata,
             $.quote,
             $.syntax_quote,
             $.tag,
             $.unquote,
             $.unquote_splicing,
             $.var_quote),

    // at repl: @a == @ a
    deref: $ =>
      '@',

    metadata: $ =>
      choice('^', '#^'),

    // at repl: 'a == ' a
    quote: $ =>
      "'",

    // at repl: `a == ` a
    syntax_quote: $ =>
      '`',

    // at repl: `~a == `~ a == ` ~ a
    unquote: $ =>
      '~',

    // at repl: `(~@a) != `(~ @a)
    // at repl: `(~@a) == `(~@ a)
    unquote_splicing: $ =>
      '~@',

    // at repl: #' #some-tag [1] can work depending on #some-tag
    // at repl: #'a != # 'a
    // at repl: #'a == #' a
    var_quote: $ =>
      "#'",

    // _discard and tag potentially conflict
    // e.g. #_hello is a tag, not #_ + symbol named hello

    // at repl:
    //   #uuid "40fff7cc-2e57-42dd-b737-533820ed53e9" ==
    //   # uuid "40fff7cc-2e57-42dd-b737-533820ed53e9"
    // XXX: repeating expanded out version of symbol below because
    //      don't know how to reuse certain things within a token
    tag: $ =>
      token(seq('#',
                repeat(choice(/\s/, ',')), // XXX: non-regexp better?
                choice(SIMPLE_SYMBOL,
                       // $._qualified_symbol
                       seq(NON_SLASH_SIMPLE_SYMBOL,
                           '/',
                           // because clojure.core// is allowed
                           SIMPLE_SYMBOL)))),

    // at repl: #_ 1 2 != # _ 1 2
    discard: $ =>
      // this prec used to 'win' over tag
      token(prec(5, '#_')),
  }
});

