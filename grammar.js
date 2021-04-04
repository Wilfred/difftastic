/*
 * grammar.js
 * Copyright (C) 2021 Stephan Seitz <stephan.seitz@fau.de>
 * Adapted from tree-sitter-clojure
 *
 * Distributed under terms of the GPLv3 license.
 */

const clojure = require("tree-sitter-clojure/grammar");

const WHITESPACE_CHAR =
    /[\f\n\r\t \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const WHITESPACE =
    token(repeat1(WHITESPACE_CHAR));

const PREC = {
    NORMAL: 1,
    SPECIAL: 2,
}

const SYMBOL_HEAD =
    /[^\f\n\r\t ()\[\]{}"@~^;`\\,:#'0-9\u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const SYMBOL_BODY =
    choice(SYMBOL_HEAD,
        /[#':0-9]/);
const SYMBOL =
    token(seq(SYMBOL_HEAD,
        repeat(SYMBOL_BODY)));


module.exports = grammar(clojure, {
    name: 'commonlisp',

    extras: ($, original) => [...original, $.block_comment],
    conflicts: ($, original) => [...original, [$.for_clause], [$.accumulation_clause]],

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
                field('value', $.list_lit)),

        defun: $ =>
            seq(field('open', "("),
                optional($._gap),
                $.defun_header,
                repeat(choice(field('value', $._form), $._gap)),
                field('close', ")")),

        for_clause_word: _ => choice('in',
            'across',
            'being',
            'using',
            /being the (hash-key[s]?|hash-value[s]?) in/,
            'below',
            'from',
            'to',
            'upto',
            'downto',
            'downfrom',
            'on',
            'by',
            'then',
            '='),


        _for_part: $ => seq(optional($._gap), $.for_clause_word, optional($._gap), $._form),

        accumulation_verb: _ => /((collect|append|nconc|count|maximize|minimize)(ing)?|sum(ming)?)/,

        for_clause: $ => seq(choice('for', 'and', 'as'), optional($._gap), field('variable', $._form),
            repeat1($._for_part)),

        with_clause: $ => prec.left(seq('with', optional($._gap), $._form, optional($._gap), "=", optional($._gap), $._form)),
        do_clause: $ => prec.left(seq('do', repeat1(prec.left(seq(repeat($._gap), $._form, repeat($._gap)))))),
        while_clause: $ => prec.left(seq('while', optional($._gap), $._form)),
        repeat_clause: $ => prec.left(seq('repeat', optional($._gap), $._form)),
        condition_clause: $ => prec.left(seq(choice('when', 'if', 'unless', 'always', 'thereis', 'never'), optional($._gap), $._form)),
        accumulation_clause: $ => seq($.accumulation_verb, optional($._gap), $._form, optional(seq(optional($._gap), 'into', optional($._gap), $._form))),
        termination_clause: $ => prec.left(seq(choice('finally', 'return', 'initially'), optional($._gap), $._form)),


        loop_clause: $ =>
            seq(choice(
                $.for_clause,
                $.do_clause,
                $.list_lit,
                $.while_clause,
                $.accumulation_clause,
                $.condition_clause,
                $.with_clause,
                $.termination_clause,
                $.while_clause,
            )),

        loop_macro: $ =>
            seq(field('open', "("),
                optional($._gap),
                optional('cl:'),
                'loop',
                repeat(choice($.loop_clause, $._gap)),
                field('close', ")")),

        defun_keyword: _ => choice('defun', 'defmacro', 'defgeneric', 'defmethod'),

        defun_header: $ =>
            choice(
                seq(field('keyword', $.defun_keyword),
                    repeat($._gap),
                    field('function_name', $._form),
                    repeat($._gap),
                    field('lambda_list', $.list_lit)),
                seq(field('keyword', alias('lambda', $.defun_keyword)),
                    repeat($._gap),
                    field('lambda_list', $.list_lit))
            ),

        array_dimension: $ => seq($.num_lit, 'A'),

        _bare_vec_lit: $ =>
            choice(seq(field('open', '#0A'), $.num_lit),
                seq(field('open', '#'), optional(field('dimension_indicator', $.array_dimension)), $.list_lit)),

        _bare_list_lit: $ =>
            choice(prec(PREC.SPECIAL, $.defun),
                prec(PREC.SPECIAL, $.loop_macro),
                seq(field('open', "("),
                    repeat(choice(field('value', $._form), $._gap)),
                    field('close', ")"))),

        _form: $ =>
            choice(// atom-ish
                $.num_lit,
                $.fancy_literal,
                //$.defun_header,
                $.kwd_lit,
                $.str_lit,
                $.char_lit,
                $.nil_lit,
                //$.bool_lit,
                $.sym_lit,
                // basic collection-ish
                $.list_lit,
                //$.map_lit,
                $.vec_lit,
                // dispatch reader macros
                $.set_lit,
                //$.anon_fn_lit,
                //$.regex_lit,
                $.read_cond_lit,
                $.splicing_read_cond_lit,
                //$.ns_map_lit,
                $.var_quoting_lit,
                $.sym_val_lit,
                $.evaling_lit,
                //$.tagged_or_ctor_lit,
                // some other reader macros
                $.derefing_lit,
                $.quoting_lit,
                $.syn_quoting_lit,
                $.unquote_splicing_lit,
                $.unquoting_lit,
                $.include_reader_macro,
                $.complex_num_lit,
                '.',
            ),

        sym_lit: $ =>
            seq(repeat($._metadata_lit),
                SYMBOL),

        include_reader_macro: $ =>
            seq(repeat($._metadata_lit),
                field('marker', choice("#+", "#-")),
                repeat($._gap),
                field('condition', $._form),
                repeat($._gap),
                field('target', $._form)),

        complex_num_lit: $ =>
            seq(repeat($._metadata_lit),
                field('marker', "#C"),
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
