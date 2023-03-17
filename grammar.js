// one aim is to try to parse what is correct (in the sense of
// officially supported), but also be looser in parsing additional
// things.  this is more or less in line with advice from tree-sitter
// folks.

function regex(...patts) {
  return RegExp(patts.join(""));
}

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
const WHITESPACE_CHAR =
      regex("[",
            "\\f\\n\\r\\t, ",
            "\\u000B\\u001C\\u001D\\u001E\\u001F",
            "\\u2028\\u2029\\u1680",
            "\\u2000\\u2001\\u2002\\u2003\\u2004\\u2005\\u2006\\u2008",
            "\\u2009\\u200a\\u205f\\u3000",
            "]");

const WHITESPACE =
      token(repeat1(WHITESPACE_CHAR));

const COMMENT =
      token(regex('(;|#!).*\n?'));

const DIGIT =
      regex('[0-9]');

const ALPHANUMERIC =
      regex('[0-9a-zA-Z]');

const HEX_DIGIT =
      regex('[0-9a-fA-F]');

const OCTAL_DIGIT =
      regex('[0-7]');

const HEX_NUMBER =
      seq("0",
          regex('[xX]'),
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
          regex('[rR]'),
          repeat1(ALPHANUMERIC));

const RATIO =
      seq(repeat1(DIGIT),
          "/",
          repeat1(DIGIT));

const DOUBLE =
      seq(repeat1(DIGIT),
          optional(seq(".",
                       repeat(DIGIT))),
          optional(seq(regex('[eE]'),
                       optional(regex('[+-]')),
                       repeat1(DIGIT))),
          optional("M"));

const INTEGER =
      seq(repeat1(DIGIT),
          optional(regex('[MN]')));

const NUMBER =
      token(prec(10, seq(optional(regex('[+-]')),
                         choice(HEX_NUMBER,
                                OCTAL_NUMBER,
                                RADIX_NUMBER,
                                RATIO,
                                DOUBLE,
                                INTEGER))));

const NIL =
      token('nil');

const BOOLEAN =
      token(choice('false',
                   'true'));

const KEYWORD_HEAD =
      regex("[^",
            "\\f\\n\\r\\t ",
            "()",
            "\\[\\]",
            "{}",
            '"',
            "@~^;`",
            "\\\\",
            ",:/",
            "\\u000B\\u001C\\u001D\\u001E\\u001F",
            "\\u2028\\u2029\\u1680",
            "\\u2000\\u2001\\u2002\\u2003\\u2004\\u2005\\u2006\\u2008",
            "\\u2009\\u200a\\u205f\\u3000",
            "]");

const KEYWORD_BODY =
      choice(regex("[:']"), KEYWORD_HEAD);

const KEYWORD_NAMESPACED_BODY =
      token(repeat1(choice(regex("[:'/]"), KEYWORD_HEAD)));

const KEYWORD_NO_SIGIL =
      token(seq(KEYWORD_HEAD,
                repeat(KEYWORD_BODY)));

const KEYWORD_MARK =
      token(":");

const AUTO_RESOLVE_MARK =
      token("::");

const STRING =
      token(seq('"',
                repeat(regex('[^"\\\\]')),
                repeat(seq("\\",
                           regex("."),
                           repeat(regex('[^"\\\\]')))),
                '"'));

// XXX: better to match \o378 as a single item
const OCTAL_CHAR =
      seq("o",
          choice(seq(DIGIT, DIGIT, DIGIT),
                 seq(DIGIT, DIGIT),
                 seq(DIGIT)));

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
//
// XXX: null is supposed to be usable but putting \x00 below
//      does not seem to work
const ANY_CHAR =
      regex('.|\n');

const CHARACTER =
      token(seq("\\",
                choice(OCTAL_CHAR,
                       NAMED_CHAR,
                       UNICODE,
                       ANY_CHAR)));

const SYMBOL_HEAD =
      regex("[^",
            "\\f\\n\\r\\t ",
            "/",
            "()\\[\\]{}",
            '"',
            "@~^;`",
            "\\\\",
            ",:#'0-9",
            "\\u000B\\u001C\\u001D\\u001E\\u001F",
            "\\u2028\\u2029\\u1680",
            "\\u2000\\u2001\\u2002\\u2003\\u2004\\u2005\\u2006\\u2008",
            "\\u2009\\u200a\\u205f\\u3000",
            "]");

const NS_DELIMITER =
      token("/");

const SYMBOL_BODY =
      choice(SYMBOL_HEAD,
             regex("[:#'0-9]"));

const SYMBOL_NAMESPACED_NAME =
      token(repeat1(choice(SYMBOL_HEAD,
                           regex("[/:#'0-9]"))));

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

  inline: $ =>
  [$._kwd_leading_slash,
   $._kwd_just_slash,
   $._kwd_qualified,
   $._kwd_unqualified,
   $._kwd_marker,
   $._sym_qualified,
   $._sym_unqualified],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source: $ =>
    repeat(choice($._form,
                  $._gap)),

    _gap: $ =>
    choice($._ws,
           $.comment,
           $.dis_expr),

    _ws: $ =>
    WHITESPACE,

    comment: $ =>
    COMMENT,

    dis_expr: $ =>
    seq(field('marker', "#_"),
        repeat($._gap),
        field('value', $._form)),

    _form: $ =>
    choice($.num_lit, // atom-ish
           $.kwd_lit,
           $.str_lit,
           $.char_lit,
           $.nil_lit,
           $.bool_lit,
           $.sym_lit,
           // basic collection-ish
           $.list_lit,
           $.map_lit,
           $.vec_lit,
           // dispatch reader macros
           $.set_lit,
           $.anon_fn_lit,
           $.regex_lit,
           $.read_cond_lit,
           $.splicing_read_cond_lit,
           $.ns_map_lit,
           $.var_quoting_lit,
           $.sym_val_lit,
           $.evaling_lit,
           $.tagged_or_ctor_lit,
           // some other reader macros
           $.derefing_lit,
           $.quoting_lit,
           $.syn_quoting_lit,
           $.unquote_splicing_lit,
           $.unquoting_lit),

    num_lit: $ =>
    NUMBER,

    kwd_lit: $ =>
    choice($._kwd_leading_slash,
           $._kwd_just_slash,
           $._kwd_qualified,
           $._kwd_unqualified),

    // (namespace :/usr/bin/env) ; => ""
    // (name :/usr/bin/env) ; => "usr/bin/env"
    _kwd_leading_slash: $ =>
    seq(field('marker', $._kwd_marker),
        field('delimiter', NS_DELIMITER),
        field('name', alias(KEYWORD_NAMESPACED_BODY, $.kwd_name))),

    // (namespace :/) ;=> nil
    // (name :/) ;=> "/"
    _kwd_just_slash: $ =>
    seq(field('marker', $._kwd_marker),
        field('name', alias(NS_DELIMITER, $.kwd_name))),

    _kwd_qualified: $ =>
    prec(2, seq(field('marker', $._kwd_marker),
                field('namespace', alias(KEYWORD_NO_SIGIL, $.kwd_ns)),
                field('delimiter', NS_DELIMITER),
                field('name', alias(KEYWORD_NAMESPACED_BODY, $.kwd_name)))),

    _kwd_unqualified: $ =>
    prec(1, seq(field('marker', $._kwd_marker),
                field('name', alias(KEYWORD_NO_SIGIL, $.kwd_name)))),

    _kwd_marker: $ =>
    choice(KEYWORD_MARK, AUTO_RESOLVE_MARK),

    str_lit: $ =>
    STRING,

    char_lit: $ =>
    CHARACTER,

    nil_lit: $ =>
    NIL,

    bool_lit: $ =>
    BOOLEAN,

    sym_lit: $ =>
    seq(repeat($._metadata_lit),
        choice($._sym_qualified, $._sym_unqualified)),

    _sym_qualified: $ =>
    prec(1, seq(field("namespace", alias(SYMBOL, $.sym_ns)),
                field("delimiter", NS_DELIMITER),
                field("name", alias(SYMBOL_NAMESPACED_NAME, $.sym_name)))),

    _sym_unqualified: $ =>
    field('name', alias(choice(NS_DELIMITER, // division symbol
                               SYMBOL),
                        $.sym_name)),

    _metadata_lit: $ =>
    seq(choice(field("meta", $.meta_lit),
               field("old_meta", $.old_meta_lit)),
        optional(repeat($._gap))),

    meta_lit: $ =>
    seq(field('marker', "^"),
        repeat($._gap),
        field('value', $._form)),

    old_meta_lit: $ =>
    seq(field('marker', "#^"),
        repeat($._gap),
        field('value', $._form)),

    list_lit: $ =>
    seq(repeat($._metadata_lit),
        $._bare_list_lit),

    _bare_list_lit: $ =>
    seq(field('open', "("),
        repeat(choice(field('value', $._form),
                      $._gap)),
        field('close', ")")),

    map_lit: $ =>
    seq(repeat($._metadata_lit),
        $._bare_map_lit),

    _bare_map_lit: $ =>
    seq(field('open', "{"),
        repeat(choice(field('value', $._form),
                      $._gap)),
        field('close', "}")),

    vec_lit: $ =>
    seq(repeat($._metadata_lit),
        $._bare_vec_lit),

    _bare_vec_lit: $ =>
    seq(field('open', "["),
        repeat(choice(field('value', $._form),
                      $._gap)),
        field('close', "]")),

    set_lit: $ =>
    seq(repeat($._metadata_lit),
        $._bare_set_lit),

    _bare_set_lit: $ =>
    seq(field('marker', "#"),
        field('open', "{"),
        repeat(choice(field('value', $._form),
                      $._gap)),
        field('close', "}")),

    anon_fn_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "#"),
        $._bare_list_lit),

    regex_lit: $ =>
    seq(field('marker', "#"),
        STRING),

    read_cond_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "#?"),
        // whitespace possible, but neither comment nor discard
        repeat($._ws),
        $._bare_list_lit),

    splicing_read_cond_lit: $ =>
    // XXX: metadata here doesn't seem to make sense, but the repl
    //      will accept: [^:x #?@(:clj [[:a]] :cljr [[:b]])]
    seq(repeat($._metadata_lit),
        field('marker', "#?@"),
        // whitespace possible, but neither comment nor discard
        repeat($._ws),
        $._bare_list_lit),

    auto_res_mark: $ =>
    AUTO_RESOLVE_MARK,

    ns_map_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "#"),
        field('prefix', choice($.auto_res_mark,
                               $.kwd_lit)),
        repeat($._gap),
        $._bare_map_lit),

    var_quoting_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "#'"),
        repeat($._gap),
        // XXX: symbol, reader conditional, and tagged literal can work
        //      any other things?
        field('value', $._form)),

    sym_val_lit: $ =>
    seq(field('marker', "##"),
        repeat($._gap),
        field('value', $._form)),

    evaling_lit: $ =>
    seq(repeat($._metadata_lit), // ^:x #=(vector 1)
        field('marker', "#="),
        repeat($._gap),
        field('value', choice($.list_lit,
                              $.read_cond_lit,
                              // #= ^:a java.lang.String
                              $.sym_lit))),

    // #uuid "00000000-0000-0000-0000-000000000000"
    // #user.Fun[1 2]
    // #user.Fun{:a 1 :b 2}
    tagged_or_ctor_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "#"),
        // # uuid "00000000-0000-0000-0000-000000000000"
        // # #_ 1 uuid "00000000-0000-0000-0000-000000000000"
        // etc.
        repeat($._gap),
        // # ^:a uuid "00000000-0000-0000-0000-000000000000"
        field('tag', $.sym_lit),
        repeat($._gap),
        field('value', $._form)),

    derefing_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "@"),
        repeat($._gap),
        field('value', $._form)),

    quoting_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "'"),
        repeat($._gap),
        field('value', $._form)),

    syn_quoting_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "`"),
        repeat($._gap),
        field('value', $._form)),

    unquote_splicing_lit: $ =>
    // XXX: metadata here doesn't seem to make sense, but the repl
    //      will accept: `(^:x ~@[:a :b :c])
    seq(repeat($._metadata_lit),
        field('marker', "~@"),
        repeat($._gap),
        field('value', $._form)),

    unquoting_lit: $ =>
    seq(repeat($._metadata_lit),
        field('marker', "~"),
        repeat($._gap),
        field('value', $._form)),
  }
});

// Local Variables:
// mode: js-mode
// js-indent-align-list-continuation: t
// js-indent-level: 2
// End:
