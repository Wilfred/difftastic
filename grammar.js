// for additional details, see notes.txt

// XXX: since now using fields, put ns prefix in one field and name
//      in another field for symbols and keywords?

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

  // XXX: figure out which are really necessary and why
  conflicts: $ => [
    [$.discard_form,
     $.deref_form,
     $.quote_form,
     $.syntax_quote_form,
     $.unquote_form,
     $.unquote_splicing_form,
     $.var_quote_form,
     $.tag,
     $.anonymous_function,
     $.list,
     $.map,
     $.reader_conditional,
     $.set,
     $.symbol,
     $.vector],
    [$.metadata,
     $.map,
     $.reader_conditional,
     $.symbol],
    [$.tagged_literal]
  ],

  inline: $ => [
    $.bare_list,
    $.bare_map,
    $.bare_set,
    $.bare_symbol,
    $.bare_vector,
    $.symbolic_value
  ],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source_file: $ =>
      repeat($._maybe_empty_form),

    // #_ 1
    _maybe_empty_form: $ =>
      prec(15,
           choice(field('value', $._non_discard_form),
                  field('discard_form', $.discard_form))),

    comment: $ =>
      /(;.*|#!.*)/,

    // inspired by Tavistock's grammar, ty!
    discard_form: $ =>
      prec(5,
           seq("#_",
               field('discard_form', repeat($.discard_form)),
               field('value', $._non_discard_form))),

    _non_discard_form: $ =>
      choice($.boolean,
             $.character,
             $.keyword,
             $.nil,
             $.number,
             $.string,
             $.regular_expression,
             $.splicing_reader_conditional,
             //
             $.symbol,
             $.symbolic_value,
             //
             $.deref_form,
             $.quote_form,
             $.syntax_quote_form,
             $.unquote_form,
             $.unquote_splicing_form,
             $.var_quote_form,
             //
             $.tagged_literal,
             //
             $.anonymous_function,
             $.list,
             $.map,
             $.reader_conditional,
             $.set,
             $.vector),

    // simplest things, unadorned with metadata, etc.

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

    keyword: $ =>
      choice(SIMPLE_KEYWORD,
             $._qualified_keyword),

    _qualified_keyword: $ =>
      token(seq(/(:|::)/,
                NON_SLASH_SIMPLE_KEYWORD,
                '/',
                // at repl: :user/8 => Invalid token
                NON_SLASH_SIMPLE_SYMBOL)),

    nil: $ =>
      'nil',

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

    string: $ =>
      token(seq('"',
                STRING_CONTENT,
                '"')),

    // unadorned, but have a 'sigil'
    
    // at repl: #"." != # "."
    regular_expression: $ =>
      token(seq('#"',
                STRING_CONTENT,
                '"')),

    splicing_reader_conditional: $ =>
      seq('#?@',
          $.bare_list),

    // things start to get complicated by metadata and discard...

    bare_symbol: $ =>
      choice(SIMPLE_SYMBOL,
             $._qualified_symbol),

    // XXX: oh, how i wanted to do this...but because it can
    //      match the empty string, it is not allowed apparently...
    //      unfortunately, this means A LOT of repetition :(
    // _meta_my_discard: $ =>
    //   repeat(choice(field('metadata', $.metadata),
    //                 field('discard_form', $.discard_form))),

    symbol: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          field('value', $.bare_symbol)),

    _qualified_symbol: $ =>
      token(seq(NON_SLASH_SIMPLE_SYMBOL,
                '/',
                // cuz things like clojure.core// is allowed
                SIMPLE_SYMBOL)),

    symbolic_symbol: $ =>
      choice('-Inf',
             'Inf',
             'NaN'),

    // at repl: ##Inf == ## Inf
    // ## #_ 1 Inf
    symbolic_value: $ =>
      seq('##',
          repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          field('value', $.symbolic_symbol)),

    // prefixy things
    
    // at repl: @ ^:a a -- where (def a (atom 1))
    // ^:a @b
    // ^:c #_ 1 @hoy    
    deref_form: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          "@",
          field('value', $._non_discard_form)),

    // ' ^:a a
    // ^:a '()
    // ^:a #_ 1 '()
    quote_form: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          "'",
          field('value', $._non_discard_form)),

    // ` ^:a a
    // ^:a `()
    // ^:a #_ 1 `()
    syntax_quote_form: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          "`",
          field('value', $._non_discard_form)),

    // ` ~ ^:a a
    // ` ^:a #_ 1 ~a
    unquote_form: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          "~",
          field('value', $._non_discard_form)),

    // ^ #_ 1 #_ 2 {:a 1} [1 2]
    // (defn ^#?(:clj String :cljs js/String) string-maker [] "hi")
    metadata: $ =>
      seq(choice("^", "#^"),
          repeat(field('discard_form', $.discard_form)),
          field('value', choice($.keyword,
                                $.map,
                                $.reader_conditional,
                                $.string,
                                $.symbol))),

    // ` [~@ ^:a a]
    // ` [^:a ~@a]
    // ` [^:a #_ 1 ~@a]
    unquote_splicing_form: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          "~@",
          field('value', $._non_discard_form)),

    // #' ^:a a
    // #' ^:a b
    // #' ^:a #_ 1 @b
    var_quote_form: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          "#'",
          field('value', $._non_discard_form)),

    // more complicated prefixy thing
    
    // ^:a #_ 1 #my-tag :fun can work depending on #my-tag
    // # #_ 1 #_ 2 uuid "..."
    tag: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          "#",
          // XXX: should repeat be leftmost here?
          field('discard_form_post_hash', repeat($.discard_form)),
          field('value', $.bare_symbol)),

    // XXX: would nesting be better?
    // #my-tag ^:a [1 2]
    tagged_literal: $ =>
      seq(field('tag', repeat1($.tag)),
          field('value', $._non_discard_form)),

    // collection-ish things w/ metadata and discard

    // at repl: #(+) != # (+)
    // (Thread. ^Runnable #(spinner options)
    anonymous_function: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          '#(',
          field('value', repeat($._maybe_empty_form)),
          ')'),

    // shared w/ list and reader conditionals
    bare_list: $ =>
      seq('(',
          field('value', repeat($._maybe_empty_form)),
          ')'),

    list: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          $.bare_list),

    // https://clojure.org/reference/reader#_maps
    bare_map: $ =>
      choice($._simple_map,
             $._namespaced_map),

    map: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          $.bare_map),

    _simple_map: $ =>
      seq('{',
          field('value', repeat($._maybe_empty_form)),
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
    
    // at repl: #?() 1 == #? () 1
    // ^:a #?(:clj []
    reader_conditional: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          '#?',
          $.bare_list),

    // at repl: #{:a} != # {:a}
    bare_set: $ =>
      seq('#{',
          field('value', repeat($._maybe_empty_form)),
          '}'),

    set: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          $.bare_set),

    bare_vector: $ =>
      seq('[',
          field('value', repeat($._maybe_empty_form)),
          ']'),

    vector: $ =>
      seq(repeat(choice(field('metadata', $.metadata),
                        field('discard_form', $.discard_form))),
          $.bare_vector),

  }
});

