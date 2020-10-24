// one aim is to try to parse what is correct (in the sense of
// officially supported), but also be looser in parsing additional
// things.  this is more or less in line with advice from tree-sitter
// folks.

// java.lang.Character.isWhitespace AND comma
//
// Space Separator (Zs) but NOT including (U+00A0, U+2007, U+202F)
//   U+0020, U+1680, U+2000, U+2001, U+2002, U+2003, U+2004, U+2005,
//   U+2006, U+2008, U+2009, U+200A, U+205F, U+3000
// Line Separator (Zl)
//   U+2028
// Paragraph Separator (Zp)
//   U+2029
// Horizontal Tabulation
//   \t
// Line Feed
//   \n
// Vertical Tabulation
//   U+000B
// Form Feed
//   \f
// Carriage Return
//   \r
// File Separator
//   U+001C
// Group Separator
//   U+001D
// Record Separator
//   U+001E
// Unit Separator
//   U+001F
const WHITESPACE =
      /[\f\n\r\t, \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const DIGIT =
      /[0-9]/;

const ALPHANUMERIC =
      /[0-9a-zA-Z]/;

const HEX_DIGIT =
      /[0-9a-fA-F]/;

const OCTAL_DIGIT =
      /[0-7]/;

const HEX_NUMBER =
      seq("0",
          /[xX]/,
          repeat1(HEX_DIGIT),
          optional("N"));

const OCTAL_NUMBER =
      seq("0",
          repeat1(OCTAL_DIGIT),
          optional("N"));

// XXX: not constraining number before r/R
// XXX: not constraining portion after r/R
const RADIX_NUMBER =
      seq(repeat1(DIGIT),
          /[rR]/,
          repeat1(ALPHANUMERIC));

// XXX: not accounting for division by zero
const RATIO =
      seq(repeat1(DIGIT),
          "/",
          repeat1(DIGIT));

const DOUBLE =
      seq(repeat1(DIGIT),
          optional(seq(".",
                       repeat(DIGIT))),
          optional(seq(/[eE]/,
                       optional(/[+-]/),
                       repeat1(DIGIT))),
          optional("M"));

const INTEGER =
      seq(repeat1(DIGIT),
          optional(/[MN]/));

const NUMBER =
      token(prec(10, seq(optional(/[+-]/),
                choice(HEX_NUMBER,
                       OCTAL_NUMBER,
                       RADIX_NUMBER,
                       RATIO,
                       DOUBLE,
                       INTEGER))));

const KEYWORD_HEAD =
      /[^\f\n\r\t ()\[\]{}"@~^;`\\,:/\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const KEYWORD_BODY =
      choice(/[:'/]/,
             KEYWORD_HEAD);

const KEYWORD_NO_SIGIL =
      seq(KEYWORD_HEAD,
          repeat(KEYWORD_BODY));

const AUTO_RESOLVE_MARKER =
      token("::");

const KEYWORD =
      token(choice(// :my-ns/hi
                   // :a
                   // :/ is neither invalid nor valid, but repl accepts
                   seq(":",
                       choice("/",
                             KEYWORD_NO_SIGIL)),
                   // ::my-alias/hi
                   // ::a
                   // ::/ is invalid
                   seq(AUTO_RESOLVE_MARKER,
                       KEYWORD_NO_SIGIL)));

const STRING =
      token(seq('"',
                repeat(/[^"\\]/),
                repeat(seq("\\",
                           /./,
                           repeat(/[^"\\]/))),
                '"'));

// XXX: better to match \o378 as a single item
const OCTAL_CHAR =
      seq("o",
          choice(seq(DIGIT, DIGIT, DIGIT),
                 seq(DIGIT, DIGIT),
                 seq(DIGIT)));
          // choice(seq(/[0-3]/, OCTAL_DIGIT, OCTAL_DIGIT),
          //        seq(OCTAL_DIGIT, OCTAL_DIGIT),
          //        seq(OCTAL_DIGIT)));

const NAMED_CHAR =
      choice("backspace",
             "formfeed",
             "newline",
             "return",
             "space",
             "tab");

// XXX: outside of: (c >= '\uD800' && c <= '\uDFFF') - LispReader.java
//      but not doing this
const UNICODE =
      seq("u",
          HEX_DIGIT,
          HEX_DIGIT,
          HEX_DIGIT,
          HEX_DIGIT);

// XXX: not quite sure what this is supposed to be...
//      return Character.valueOf(token.charAt(0)); -- LispReader.java
//      java char is 16 bits...what can tree-sitter manage?
const ANY_CHAR =
      /.|\n/;

const CHARACTER =
      token(seq("\\",
                choice(OCTAL_CHAR,
                       NAMED_CHAR,
                       UNICODE,
                       ANY_CHAR)));

const SYMBOL_HEAD =
      /[^\f\n\r\t ()\[\]{}"@~^;`\\,:#'0-9\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const SYMBOL_BODY =
      choice(SYMBOL_HEAD,
             /[:#'0-9]/);

// XXX: no attempt is made to enforce certain complex things, e.g.
//
//        Symbols beginning or ending with ':' are reserved by Clojure.
//        A symbol can contain one or more non-repeating ':'s
const SYMBOL =
      token(seq(SYMBOL_HEAD,
                repeat(SYMBOL_BODY)));

module.exports = grammar({
  name: 'clojure',

  extras: $ =>
    [],

  conflicts: $ =>
    [],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source: $ =>
      repeat(choice($._form,
                    $._non_form)),

    _non_form: $ =>
      choice($._whitespace,
             $.comment,
             $.discard_expr),

    _whitespace: $ =>
      token(repeat1(WHITESPACE)),

    comment: $ =>
      token(/(;|#!).*\n?/),

    discard_expr: $ =>
      seq(field('marker', "#_"),
          repeat($._non_form),
          field('value', $._form)),

    _form: $ =>
      choice($.list,
             $.map,
             $.vector,
             // literals
             $.number,
             $.keyword,
             $.string,
             $.character,
             $.nil,
             $.boolean,
             $.symbol,
             // dispatch reader macros
             $.set,
             $.anon_func,
             $.regex,
             $.read_cond,
             $.read_cond_splicing,
             $.namespaced_map,
             $.var_quote_form,
             $.symbolic_value,
             $.eval_form,
             $.tagged_literal,
             // other reader macros
             $.syntax_quote_form,
             $.quote_form,
             $.unquote_splicing_form,
             $.unquote_form,
             $.deref_form),

    metadata: $ =>
      seq(field('marker', "^"),
          repeat($._non_form),
          field('value', choice($.read_cond,
                                $.map,
                                $.string,
                                $.keyword,
                                $.symbol))),

    old_metadata: $ =>
      seq(field('marker', "#^"),
          repeat($._non_form),
          field('value', choice($.read_cond,
                                $.map,
                                $.string,
                                $.keyword,
                                $.symbol))),

    _metadata: $ =>
      seq(choice(field('metadata', $.metadata),
                 field('old_metadata', $.old_metadata)),
          optional(repeat($._non_form))),

    list: $ =>
      seq(repeat($._metadata),
          $._bare_list),

    _bare_list: $ =>
      seq(field('open', "("),
          repeat(choice(field('value', $._form),
                        $._non_form)),
          field('close', ")")),

    map: $ =>
      seq(repeat($._metadata),
          $._bare_map),

    _bare_map: $ =>
      seq(field('open', "{"),
          repeat(choice(field('value', $._form),
                        $._non_form)),
          field('close', "}")),

    vector: $ =>
      seq(repeat($._metadata),
          $._bare_vector),

    _bare_vector: $ =>
      seq(field('open', "["),
          repeat(choice(field('value', $._form),
                        $._non_form)),
          field('close', "]")),

    number: $ =>
      NUMBER,

    keyword: $ =>
      KEYWORD,

    string: $ =>
      STRING,

    character: $ =>
      CHARACTER,

    nil: $ =>
      'nil',

    boolean: $ =>
      choice('false',
             'true'),

    symbol: $ =>
      seq(repeat($._metadata),
          SYMBOL),

    set: $ =>
      seq(repeat($._metadata),
          $._bare_set),

    _bare_set: $ =>
      seq(field('marker', "#"),
          field('open', "{"),
          repeat(choice(field('value', $._form),
                        $._non_form)),
          field('close', "}")),

    anon_func: $ =>
      seq(repeat($._metadata),
          field('marker', "#"),
          $._bare_list),

    regex: $ =>
      seq(field('marker', "#"),
          STRING),

    read_cond: $ =>
      seq(repeat($._metadata),
          field('marker', "#?"),
          repeat($._whitespace),
          $._bare_list),

    read_cond_splicing: $ =>
      // XXX: metadata here doesn't seem to make sense, but the repl
      //      will accept: [^:x #?@(:clj [[:a]] :cljr [[:b]])]
      seq(repeat($._metadata),
          field('marker', "#?@"),
          repeat($._whitespace),
          $._bare_list),

    auto_res_marker: $ =>
      AUTO_RESOLVE_MARKER,

    namespaced_map: $ =>
      seq(repeat($._metadata),
          field('marker', "#"),
          field('prefix', choice($.auto_res_marker,
                                 $.keyword)),
          repeat($._non_form),
          $._bare_map),

    var_quote_form: $ =>
      seq(repeat($._metadata),
          field('marker', "#'"),
          repeat($._non_form),
          // XXX: symbol, reader conditional, and tagged literal can work
          //      any other things?
          field('value', $._form)),

    symbolic_value: $ =>
      seq(field('marker', "##"),
          repeat($._non_form),
          field('value', $.symbol)),

    eval_form: $ =>
      seq(repeat($._metadata), // ^:x #=(vector 1)
          field('marker', "#="),
          repeat($._non_form),
          field('value', choice($.list,
                                $.read_cond,
                                // #= ^:a java.lang.String
                                $.symbol))),

    // XXX: deftype, defrecod, and constructor calls end up as this
    //      alternate name ideas:
    //      - ctor_literal
    //      - ctor_reader_literal
    //      - tag_or_ctor_literal
    //      - ctor_literal (because CtorReader)
    //      - ctor_or_tagged_literal
    //      - ctor_tagged_literal
    //      - ctor_tag_literal
    tagged_literal: $ =>
      seq(repeat($._metadata),
          field('marker', "#"),
          // # uuid "00000000-0000-0000-0000-000000000000"
          // # #_ 1 uuid "00000000-0000-0000-0000-000000000000"
          // etc.
          repeat($._non_form),
          // # ^:a uuid "00000000-0000-0000-0000-000000000000"
          field('tag', $.symbol),
          repeat($._non_form),
          field('value', $._form)),

    syntax_quote_form: $ =>
      seq(repeat($._metadata),
          field('marker', "`"),
          repeat($._non_form),
          field('value', $._form)),

    quote_form: $ =>
      seq(repeat($._metadata),
          field('marker', "'"),
          repeat($._non_form),
          field('value', $._form)),

    unquote_splicing_form: $ =>
      // XXX: metadata here doesn't seem to make sense, but the repl
      //      will accept: `(^:x ~@[:a :b :c])
      seq(repeat($._metadata),
          field('marker', "~@"),
          repeat($._non_form),
          field('value', $._form)),

    unquote_form: $ =>
      seq(repeat($._metadata),
          field('marker', "~"),
          repeat($._non_form),
          field('value', $._form)),

    deref_form: $ =>
      seq(repeat($._metadata),
          field('marker', "@"),
          repeat($._non_form),
          field('value', $._form)),
  }
});
