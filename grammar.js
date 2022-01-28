/*
 * grammar.js
 * Copyright (C) 2021 Stephan Seitz <stephan.seitz@fau.de>
 * Adapted from tree-sitter-clojure
 *
 * Distributed under terms of the MIT license.
 */

const clojure = require("tree-sitter-clojure/grammar");

const WHITESPACE_CHAR =
    /[\f\n\r\t \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const WHITESPACE =
    token(repeat1(WHITESPACE_CHAR));

const PREC = {
    NUM_LIT: 0,
    NORMAL: 1,
    PACKAGE_LIT: 2,
    DOTTET_LIT: 3,
    KWD_LIT: 4,
    SPECIAL: 5,
    META_LIT: 6,
}

const SYMBOL_HEAD =
    /[^:\f\n\r\t ()\[\]{}"^;`\\,#'\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const SYMBOL_WITHOUT_SLASH =
    /[^:\f\n\r\t ()\[\]{}"^;/`\\,#'\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const SYMBOL_BODY =
    choice(SYMBOL_HEAD,
        /[#']/);

const SYMBOL =
    token(seq(SYMBOL_HEAD,
        repeat(SYMBOL_BODY)));

const STRING =
    token(seq('"',
        repeat(/[^"\\]/),
        repeat(seq("\\",
            /./,
            repeat(/[^"\\]/))),
        '"'));

const DIGIT =
    /[0-9]/;

const ALPHANUMERIC =
    /[0-9a-zA-Z]/;

const HEX_DIGIT =
    /[0-9a-fA-F]/;

const OCTAL_DIGIT =
    /[0-7]/;

const BINARY_DIGIT =
    /[0-1]/;

const HEX_NUMBER =
    seq(choice('#x', '#X'), optional(/[+-]/),
        repeat1(HEX_DIGIT));

const OCTAL_NUMBER =
    seq(choice('#o', '#O'), optional(/[+-]/),
        repeat1(OCTAL_DIGIT));

const BINARY_NUMBER =
    seq(choice('#b', '#B'), optional(/[+-]/),
        repeat1(BINARY_DIGIT));

const RADIX_NUMBER =
    seq('#',
        repeat1(DIGIT),
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
        optional(seq(/[eEsSfFdDlL]/,
            optional(/[+-]/),
            repeat1(DIGIT))),
    );

const INTEGER =
    seq(repeat1(DIGIT),
        optional(/[MN]/));

const NUMBER =
    token(seq(optional(/[+-]/),
        choice(
            HEX_NUMBER,
            OCTAL_NUMBER,
            RADIX_NUMBER,
            BINARY_NUMBER,
            RATIO,
            DOUBLE,
            INTEGER)));


function clSymbol(symbol) {
    return seq(optional(seq('cl', ':')), symbol)
}

function loopSymbol(symbol) {
    return seq(optional(seq(optional('cl'), ':')), symbol)
}

function optSeq(...args) {
    return optional(seq(...args))
}


module.exports = grammar(clojure, {
    name: 'commonlisp',

    extras: ($, original) => [...original, $.block_comment],
    conflicts: ($,
        original) => [...original,
        [$.for_clause_word, $.package_lit],
        [$.with_clause, $.package_lit],
        [$.with_clause],
        [$.for_clause],
        [$.accumulation_clause],
        [$.loop_macro, $.defun_keyword, $.package_lit]],


    rules: {
        block_comment: _ => token(seq('#|', repeat(choice(/[^|]/, /\|[^#]/)), '|#')),

        fancy_literal: _ => token(seq('|', repeat(/[^|]/), '|')),

        _ws: _ =>
            WHITESPACE,

        unquoting_lit: $ =>
            seq(field('marker', ","),
                repeat($._gap),
                field('value', $._form)),

        unquote_splicing_lit: $ =>
            seq(repeat($._metadata_lit),
                field('marker', ",@"),
                repeat($._gap),
                field('value', $._form)),

        syn_quoting_lit: $ =>
            seq(field('marker', "`"),
                repeat($._gap),
                field('value', ($._form))),

        defun: $ =>
            prec(PREC.SPECIAL, seq(field('open', "("),
                optional($._gap),
                $.defun_header,
                optional($._gap),
                repeat(choice(field('value', $._form), $._gap)),
                field('close', ")"))),

        _format_token: $ => choice(alias(NUMBER, $.num_lit), seq("'", alias(/./, $.char_lit))),
        // https://en.wikipedia.org/wiki/Format_Common_Lisp)
        format_prefix_parameters: _ => choice('v', 'V', '#'),
        format_modifiers: $ => seq(repeat(choice($._format_token, ',')), choice('@', '@:', ':', ':@')),
        //format_modifiers: _ => choice('@', '@:', ':', ':@'),
        format_directive_type: $ => choice(
            seq(optional(field('repetitions', $._format_token)), choice('~', '%', '&', '|')),
            /[cC]/,
            /\^/,
            '\n',
            '\r',
            /[pP]/,
            /[iI]/,
            /[wW]/,
            /[aA]/,
            '_',
            /[()]/,
            /[{}]/,
            /[\[\]]/,
            /[<>]/,
            ';',
            seq(field('numberOfArgs', $._format_token), '*'),
            seq('/', choice(alias($._package_lit_without_slash, $.package_lit), $._sym_lit_without_slash), '/'),
            '?',
            "Newline",
            seq(repeat(choice($._format_token, ',')), /[$rRbBdDgGxXeEoOsStTfF]/),
        ),
        format_specifier: $ =>
            prec.left(seq(
                '~',
                optional($.format_prefix_parameters),
                optional($.format_modifiers),
                prec(5, $.format_directive_type),
            )),

        str_lit: $ =>
            seq(
                '"',
                repeat(choice(
                    token.immediate(prec(1, /[^\\~"]+/)),
                    token.immediate(seq(/\\./)),
                    $.format_specifier,
                )),
                optional('~'),
                '"',
            ),

        for_clause_word: _ => loopSymbol(choice(
            'in',
            'across',
            'being',
            'using',
            /being (the|each) (hash-key[s]?|hash-value[s]?|present-symbol[s]?) (in|of)/,
            'below',
            'above',
            'from',
            'to',
            'upto',
            'upfrom',
            'downto',
            'downfrom',
            'on',
            'by',
            'then',
            '=')),


        _for_part: $ => seq(repeat($._gap), $.for_clause_word, repeat($._gap), $._form),

        accumulation_verb: _ => loopSymbol(/(maximize|minimize|(collect|append|nconc|count)(ing)?|sum(ming)?|maximizing|minimizing)/),
        for_clause: $ => choice(seq(choice(loopSymbol('for'), loopSymbol('and'), loopSymbol('as')), repeat($._gap), field('variable', $._form), optional(field('type', seq(repeat($._gap), $._form))),
            repeat1($._for_part)), loopSymbol('and')),
        with_clause: $ => seq(loopSymbol('with'), repeat($._gap), choice($._form, seq($._form, repeat($._gap), field('type', $._form))), repeat($._gap), optSeq(loopSymbol("="), repeat($._gap)), optSeq($._form, repeat($._gap))),
        do_clause: $ => prec.left(seq(loopSymbol('do'), repeat1(prec.left(seq(repeat($._gap), $._form, repeat($._gap)))))),
        while_clause: $ => prec.left(seq(choice(loopSymbol('while'), loopSymbol('until')), repeat($._gap), $._form)),
        repeat_clause: $ => prec.left(seq(loopSymbol('repeat'), repeat($._gap), $._form)),
        condition_clause: $ => prec.left(choice(seq(choice(loopSymbol('when'), loopSymbol('if'), loopSymbol('unless'), loopSymbol('always'), loopSymbol('thereis'), loopSymbol('never')), repeat($._gap), $._form), loopSymbol("else"))),
        accumulation_clause: $ => seq($.accumulation_verb, repeat($._gap), $._form, optional(seq(repeat($._gap), loopSymbol('into'), repeat($._gap), $._form))),
        termination_clause: $ => prec.left(seq(choice(loopSymbol('finally'), loopSymbol('return'), loopSymbol('initially')), repeat($._gap), $._form)),


        loop_clause: $ =>
            seq(choice(
                $.for_clause,
                $.do_clause,
                $.list_lit,
                $.while_clause,
                $.repeat_clause,
                $.accumulation_clause,
                $.condition_clause,
                $.with_clause,
                $.termination_clause,
                $.while_clause,
            )),

        loop_macro: $ =>
            prec(PREC.SPECIAL,
                seq(field('open', "("),
                    optional($._gap),
                    clSymbol('loop'),
                    repeat(choice($.loop_clause, $._gap)),
                    field('close', ")"))),

        defun_keyword: _ => prec(10, clSymbol(choice('defun', 'defmacro', 'defgeneric', 'defmethod'))),

        defun_header: $ =>
            prec(PREC.SPECIAL, choice(
                seq(field('keyword', $.defun_keyword),
                    repeat($._gap),
                    choice($.unquoting_lit, $.unquote_splicing_lit)
                ),
                seq(field('keyword', $.defun_keyword),
                    repeat($._gap),
                    field('function_name', $._form),
                    optional(field('specifier', seq(repeat($._gap), choice($.kwd_lit, $.sym_lit)))),
                    repeat($._gap),
                    field('lambda_list', choice($.list_lit, $.unquoting_lit))),
                seq(field('keyword', alias('lambda', $.defun_keyword)),
                    repeat($._gap),
                    field('lambda_list', choice($.list_lit, $.unquoting_lit)))
            )),

        array_dimension: _ => prec(100, /\d+[aA]/),

        char_lit: _ =>
            seq('#', /\\([^\f\n\r\t ()]+|[()])/),

        vec_lit: $ =>
            prec(PREC.SPECIAL,
                choice(
                    seq(field('open', choice('#0A', '#0a')), choice($.num_lit, $.complex_num_lit)),
                    seq(field('open', '#'), optional($.array_dimension), $.list_lit))),

        path_lit: $ =>
            prec(PREC.SPECIAL,
                seq(field('open', choice('#P', '#p')), alias(STRING, $.str_lit))),

        _bare_list_lit: $ =>
            choice(prec(PREC.SPECIAL, $.defun),
                prec(PREC.SPECIAL, $.loop_macro),
                seq(field('open', "("),
                    repeat(choice(field('value', $._form), $._gap)),
                    field('close', ")"))),

        package_lit: $ => prec(PREC.PACKAGE_LIT, choice(seq(
            field('package', choice($.sym_lit, 'cl')), // Make optional, instead of keywords?
            choice(':', '::'),
            field('symbol', $.sym_lit)
        ), prec(1, 'cl'))),

        _package_lit_without_slash: $ => seq(
            field('package', choice($._sym_lit_without_slash, 'cl')), // Make optional, instead of keywords?
            choice(':', '::'),
            field('symbol', $._sym_lit_without_slash)
        ),

        kwd_lit: $ => prec(PREC.KWD_LIT, seq(
            choice(':', '::'),
            $.kwd_symbol,
        )),

        sym_lit: _ =>
            seq(SYMBOL),

        _sym_lit_without_slash: $ =>
            alias(repeat1(SYMBOL_WITHOUT_SLASH), $.sym_lit),

        kwd_symbol: _ =>
            seq(SYMBOL),

        self_referential_reader_macro: _ => /#\d+[=#]/,

        _form: $ =>
            seq(optional('#'),
                choice(
                    $.num_lit,
                    $.fancy_literal,
                    $.vec_lit,
                    $.kwd_lit,
                    // No idea why this is necessary...It is never used but triggers some background magic
                    alias(seq(field('open', '#'), optional(/\d+[aA]/), $.list_lit), $.vec_lit),
                    $.str_lit,
                    $.self_referential_reader_macro,
                    $.char_lit,
                    $.nil_lit,
                    $.path_lit,
                    $.sym_lit,
                    $.package_lit,
                    $.list_lit,
                    $.set_lit,
                    $.read_cond_lit,
                    $.splicing_read_cond_lit,
                    $.var_quoting_lit,
                    $.quoting_lit,
                    $.syn_quoting_lit,
                    $.unquote_splicing_lit,
                    $.unquoting_lit,
                    $.include_reader_macro,
                    $.complex_num_lit,
                    ".",
                )),

        num_lit: _ =>
            seq(NUMBER, optional(/[sSfFdDlL]/)),

        include_reader_macro: $ =>
            seq(repeat($._metadata_lit),
                field('marker', choice("#+", "#-")),
                repeat($._gap),
                field('condition', $._form),
                repeat($._gap),
                field('target', $._form)),

        complex_num_lit: $ =>
            seq(repeat($._metadata_lit),
                field('marker', choice("#C", "#c")),
                repeat($._gap),
                '(',
                repeat($._gap),
                field('real', $.num_lit), // only numbers allowed here
                repeat($._gap),
                field('imaginary', $.num_lit),
                repeat($._gap),
                ')'
            ),
    }
});
