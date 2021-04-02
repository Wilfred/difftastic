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

module.exports = grammar(clojure, {
  name: 'commonlisp',

  extras: ($, original) => [...original, $.block_comment],
  conflicts: (_, original) => [...original],

  rules: {
    block_comment: _ => token(seq('#|', repeat(choice(/[^|]/, /\|[^#]/)) ,'|#')),

    fancy_literal: _ => token(seq('|', repeat(/[^|]/) ,'|')),

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

    //defun_header: $ =>
      //seq(field('keyword', 'defun'),
          //repeat($._gap),
          //field('function_name', $._form),
          //repeat($._gap),
          //field('lambda_list', $.list_lit)),
    //
    array_dimension: $ => seq($.num_lit, 'A'),

    _bare_vec_lit: $ =>
      choice(seq(field('open', '#0A'), $.num_lit),
      seq(field('open', '#'), optional(field('dimension_indicator', $.array_dimension)), $.list_lit)),

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
             $.unquoting_lit),
  }
});
