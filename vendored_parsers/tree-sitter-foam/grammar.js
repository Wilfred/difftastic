/**
 * @file OpenFOAM grammar for tree-sitter, supports OF9 and FE4
 * @author Mohammed Elwardi Fadeli <elwardifadeli@gmail.com>
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check


module.exports = grammar({
    name: 'foam',

    // Resolve conflicting rules
    conflicts: $ => [
        [$._statement, $._non_uniform_list],
        [$._non_uniform_list],
        [$.dict],
    ],

    // Tell the external scanner to figure out identifiers
    externals: $ => [
        $.identifier,
        $.boolean,
        $._eof,
    ],

    // Our extras are C's extras
    extras: $ => [
        /\s/, // Treating whitespace as white space;
        $.comment, // Treating comments as white space;
        $.pyfoam_template, // PyFoam stuff is whitespace;
    ],

    word: $ => $.identifier,

    rules: {
        foam: $ => seq(repeat($._statement), $._eof),

        // Global statements in a dictionary
        _statement: $ => choice(
            // Canonical statements
            $.preproc_call,
            $.key_value,
            $.dict,

            // Special support for uncommon things which may appear as statements
            $._non_uniform_list,
            $._uniform_list,
            $.number_literal,
            $.pyfoam_variable,
        ),

        // OpenFOAM Dictionaries
        dict: $ => seq(
            field('key', choice($.identifier, $.string_literal, $.list)),
            '{',
            optional($.dict_core),
            alias(token(prec(-1, '}')), '}'),
            optional(';'), // This shouldn't be here; but oh well; FE4 tutorials had some
        ),
        dict_core: $ => prec.left(3, seq(
            field('dict_body', repeat1(choice($._statement, seq($.macro, optional(';'))))),
        )),

        // OpenFOAM Key-Value pairs
        key_value: $ => seq(
            field('keyword', choice($.identifier, $.string_literal)),
            optional(field('value', repeat1($._value))), // Optional values
            ';',
        ),

        // Directives (#include*, #calc and the like, let's call them preprocessor calls)
        preproc_call: $ => choice(
            $._generic_preproc_call,
            $._special_preproc_call,
        ),

        _special_preproc_call: $ => prec(2, choice(
            $._cond_preproc_call,
            field('directive', token(seq('#', 'else'))),
            field('directive', token(seq('#', 'endif'))),
        )),

        // TODO: "diretive" does not show up as a field for "#ifeq" call
        _cond_preproc_call: $ => prec.left(2, seq(
            field('directive', token(seq('#', 'ifeq'))),
            field('argument', seq(choice(
                $.identifier,
                $.macro,
                $.string_literal,
            ), choice(
                $.identifier,
                $.macro,
                $.string_literal,
            ),
            )))),

        _generic_preproc_call: $ => prec.left(2, seq(
            field('directive', seq('#', $.identifier)),
            field('argument', choice(
                $.preproc_call,
                $.string_literal,
                $.identifier,
                $.macro,
                $.dict_headless,
            )),
            optional(';'),
        )),

        // OpenFOAM basic values (What commonly goes into the value part of a key-value pair)
        _value: $ => prec.left(2, choice(
            $.dimensions,
            $.preproc_call,
            $.dict,
            $.list,
            $.code,
            $.macro,
            $.boolean,
            $.string_literal,
            $.number_literal,
            $.pyfoam_expression,
            $.identifier,
        )),

        // OpenFOAM dimensions data
        // TODO: $.identifier is overkill; here to support [m^2 s^-2] kind of dimensions
        dimensions: $ => seq(
            '[',
            repeat(field('dimension', choice($.identifier, $.number_literal))),
            alias(token(prec(1, ']')), ']'),
        ),

        // OpenFOAM list of items
        list: $ => choice($._uniform_list, $._non_uniform_list),

        _uniform_list: $ => seq(
            field('size', $.number_literal),
            '{',
            field('item', $._list_item),
            alias(token(prec(-1, '}')), '}'),
        ),

        _non_uniform_list: $ => seq(
            optional(field('type', $.identifier)),
            optional(field('size', $.number_literal)),
            '(',
            field('item', repeat($._list_item)),
            alias(token(prec(-1, ')')), ')'),
        ),

        _list_item: $ => choice(
            $._value, $.dict_headless,
        ),

        dict_headless: $ => seq(
            '{',
            field('dict_body', repeat(choice($._statement, seq($.macro, optional(';'))))),
            alias(token(prec(-1, '}')), '}'),
        ),

        // C++ code blocks in OpenFOAM dictionaries
        // C++ Comments will be treated as white space even inside the C++ block
        // which is good, protecting against #} appearing a comment and messing things up
        code: $ => seq(
            '#{',
            optional($.code_body),
            '#}',
        ),
        code_body: $ => repeat1(choice(
            token(/([^#\n"]|#[^{}\n]|"([^"\\]|\\.)+")+/),
            $.string_literal,
        )),

        // OpenFOAM macros; currently, also reads file paths
        macro: $ => choice($._macro_braces, $._macro_no_braces),

        _macro_braces: $ => seq(
            '${',
            optional($.prev_scope),
            $.identifier,
            token.immediate('}'),
        ),

        _macro_no_braces: $ => seq(
            '$',
            optional($.prev_scope),
            $.identifier,
        ),

        // Scope indication for the reference entry
        prev_scope: _ => /[:!\.\/]+/,

        // OpenFOAM boolean-like values
        // boolean: _ => choice(
        // 'on',
        // 'off',
        // 'true',
        // 'false',
        // 'yes',
        // 'no',
        // ),

        // Primitive floating number
        number_literal: _ => token(seq(
            /[-+]?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?/, // "0." will not get match
            token.immediate(optional('.')), // hence add a sketchy & optional "."
        )),

        // C-style strings
        string_literal: $ => seq(
            choice('L"', 'u"', 'U"', 'u8"', '"'),
            repeat(choice(
                token.immediate(prec(1, /[^\\"\n]+/)),
                $.escape_sequence,
            )),
            '"',
        ),
        escape_sequence: _ => token(prec(1, seq(
            '\\',
            choice(
                /[^xuU]/,
                /\d{2,3}/,
                /x[0-9a-fA-F]{2,}/,
                /u[0-9a-fA-F]{4}/,
                /U[0-9a-fA-F]{8}/,
            ),
        ))),

        // C-like comments, not as good as using a real preprocessor,
        // but does the job just fine
        comment: _ => prec.left(4, token(choice(
            seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/',
            )))),

        // Basic PyFoam support
        single_python_line: _ => repeat1(token.immediate(/[^\n]/)),
        pyfoam_template: $ => seq('<!--(', field('code_body', $.single_python_line), ')-->'),
        pyfoam_expression: $ => seq('|-', field('code_body', $.single_python_line), '-|'),
        pyfoam_variable: $ => seq('$$', field('code_body', $.single_python_line), '\n'),

        // OpenFOAM identifiers
        // This pretty much matches anything a crazy programmer can thinkup for a keyword name;
        // The only requirement is the 1st character, just to avoid conflicts with other rules
    },
});
