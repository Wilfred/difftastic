/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Higher value == higher precedence
const PREC = {
    CATCH: 0,
    DCOLON: 1, // `::`
    PIPE: 2, // `|`
    PREFIX_OP: 3, // prefix op binds directly to its argument
    MULT_OP: 4, // mult_op is left-associative
    ADD_OP: 4, // add_op is left-associative
    DOTDOT: 6, // `..` in Type
    DARROW: 7, // `=>` in Type, Expr
    CEQ: 8, // `:=` in Type, Expr
    EQ: 12, // `:=` in Expr
    BANG: 13, // `:=` in Expr
    ORELSE: 14, // `:=` in Expr
    ANDALSO: 15, // `:=` in Expr
    LIST_OP: 16, // `:=` in Expr
    COMP_OP: 17, // `:=` in Expr

    // For remote vs binary :
    CALL: 80,
    REMOTE: 1,
    BIT_EXPR: 2,

    COND_MATCH: 81, // `?=` in maybe expr. Should has lowest priority https://www.erlang.org/eeps/eep-0049#operator-priority

    // In macro def, prefer expressions, if type and expr would parse
    DYN_CR_CLAUSES: 1,
    DYN_FUNCTION_CLAUSES: 2,
    DYN_GUARD_OR: 3,
    DYN_GUARD_AND: 4,
    DYN_EXPR: 5,
};

///////////////////////////////////////////////////////////////////////////////
//
// Combinators
//
///////////////////////////////////////////////////////////////////////////////
const sepBy1 = (sep, x) => seq(x, repeat(seq(sep, x)));
const sepBy = (sep, x) => optional(sepBy1(sep, x));

const atom_const = (x) => choice(x, alias('\'' + x + '\'', x));

///////////////////////////////////////////////////////////////////////////////
//
// Grammar
//
///////////////////////////////////////////////////////////////////////////////
// Experimenting with converting the erlfmt grammar

module.exports = grammar({
    name: 'erlang',

    word: $ => $.atom,

    extras: $ => [
        // $.whitespace causes issues with error recovery,
        // emulate it manually when traversing the tree
        /[\x01-\x20\x80-\xA0]/,
        $.comment,
    ],

    inline: $ => [
        $._fun_expr,
        $._map_expr,
        $._record_expr,
        $._exprs,
        $._catch_clauses,
    ],

    supertypes: $ => [
        $._form,
        $._preprocessor_directive,
        $._include_detail,
        $._function_or_macro_clause,
        $._macro_def_replacement,
        $._arity_value,
        $._concatable,
        $._name,
        $._macro_name,
        $._lc_expr,
        $._cr_clause_or_macro,
        $._bit_type,
        $._bit_expr,
        $._map_expr_base,
        $._record_expr_base,
        $._expr,
        $._expr_max,
        $._catch_pat,
        $._deprecated_details,
        $._deprecated_fun_arity,
        $._desc,
        $._string_like
    ],


    // The erlfmt grammar tries to parse a complete `define` attribute
    // for an expression, if that fails it tries for a type, if that
    // fails for a clause.
    // Instead, we allow conflicts between _expr and type, and clause.
    conflicts: $ => [
        // `Base#record{...}` vs `Base#{...}`
        [$._record_expr_base, $._map_expr_base],
        // In some places we don't accept args for a macro, it would create even more conflicts
        [$.macro_call_expr, $.macro_call_none],
        // Concatables are ambiguous
        [$._expr_max, $._concatable],
        [$._expr_max, $._name],
        // All can be just a macro and can apprear in the macro definition
        [$._function_or_macro_clause, $._cr_clause_or_macro, $._macro_body_expr],
        // This is intentionally ambiguous to simplify the produced tree
        [$._macro_def_replacement, $.replacement_guard_and],
        [$._macro_def_replacement, $.replacement_guard_or],
        // Fun type vs regular function `fun()` vs `fun() -> ...`
        [$.fun_type, $.expr_args],
    ],

    rules: {

        source_file: $ => field('forms', repeat($._form)),

        // -------------------------------------------------------------

        _form: $ => choice(
            $.module_attribute,
            $.behaviour_attribute,
            $.export_attribute,
            $.import_attribute,
            $.export_type_attribute,
            $.optional_callbacks_attribute,
            $.compile_options_attribute,
            $.file_attribute,
            $.deprecated_attribute,
            $.record_decl,
            $.type_alias,
            $.opaque,
            $.spec,
            $.callback,
            $.wild_attribute,
            $.fun_decl,
            // preprocessor, not an OTP abstract form
            $._preprocessor_directive,
        ),

        _preprocessor_directive: $ => choice(
            $.pp_include,
            $.pp_include_lib,
            // https://www.erlang.org/doc/reference_manual/macros.html#flow-control-in-macros
            $.pp_undef,
            $.pp_ifdef,
            $.pp_ifndef,
            $.pp_else,
            $.pp_endif,
            $.pp_if,
            $.pp_elif,

            $.pp_define,
        ),
        pp_include: $ => seq(
            '-', atom_const('include'), '(',
            field("file", repeat1($._include_detail)),
            ')', '.'
        ),
        pp_include_lib: $ => seq(
            '-', atom_const('include_lib'), '(',
            field("file", repeat1($._include_detail)),
            ')', '.'
        ),
        pp_undef: $ => seq('-', atom_const('undef'), '(', field("name", $._macro_name), ')', '.'),
        pp_ifdef: $ => seq('-', atom_const('ifdef'), '(', field("name", $._macro_name), ')', '.'),
        pp_ifndef: $ => seq('-', atom_const('ifndef'), '(', field("name", $._macro_name), ')', '.'),
        pp_else: $ => seq('-', atom_const('else'), '.'),
        pp_endif: $ => seq('-', atom_const('endif'), '.'),
        pp_if: $ => seq('-', atom_const('if'), field("cond", $._expr), '.'),
        pp_elif: $ => seq('-', atom_const('elif'), field("cond", $._expr), '.'),

        pp_define: $ => seq(
            '-',
            atom_const('define'),
            '(',
            field("lhs", $.macro_lhs),
            ',',
            field("replacement", optional($._macro_def_replacement)),
            ')',
            '.',
        ),

        _include_detail: $ => choice(
            $.string,
            $.macro_call_expr
        ),

        module_attribute: $ => seq('-', atom_const('module'), '(', field("name", $._name), ')', '.'),

        behaviour_attribute: $ => seq(
            '-',
            choice(atom_const('behaviour'), atom_const('behavior')),
            '(',
            field("name", $._name),
            ')',
            '.'
        ),

        export_attribute: $ => seq(
            '-',
            atom_const('export'),
            '(',
            '[',
            sepBy(optional(','), field("funs", $.fa)),
            ']',
            ')',
            '.'
        ),

        import_attribute: $ => seq(
            '-', atom_const('import'), '(',
            field("module", $._name), ',',
            '[', sepBy(optional(','), field("funs", $.fa)), ']', ')', '.'),

        optional_callbacks_attribute: $ => seq(
            '-', atom_const('optional_callbacks'), '(', '[',
            sepBy(optional(','), field("callbacks", $.fa)),
            ']', ')', '.',
        ),

        // Used in imports and exports only, make it concrete.
        fa: $ => seq(field("fun", $._name), field("arity", $.arity)),

        export_type_attribute: $ => seq(
            '-',
            atom_const('export_type'),
            '(',
            '[',
            sepBy(optional(','), field("types", $.fa)),
            ']',
            ')',
            '.'
        ),

        compile_options_attribute: $ => seq(
            '-',
            atom_const('compile'),
            '(',
            field("options", $._expr),
            ')',
            '.'
        ),

        file_attribute: $ => seq(
            '-',
            atom_const('file'),
            '(',
            field("original_file", $.string), ',',
            field("original_line", $.integer),
            ')', '.'),

        deprecated_attribute: $ => seq(
            '-',
            atom_const('deprecated'),
            '(',
            field("attr", $._deprecated_details),
            ')',
            '.'
        ),

        _deprecated_details: $ => choice(
            $.deprecated_module,
            $.deprecated_fa,
            $.deprecated_fas,
        ),

        deprecated_module: $ => field("module", $.atom),

        deprecated_fas: $ => seq(
            '[',
            sepBy1(',', field("fa", $.deprecated_fa)),
            ']',
        ),
        deprecated_fa: $ => seq(
            '{',
            field("fun", $.atom),
            ',',
            field("arity", $._deprecated_fun_arity),
            field("desc", optional($.deprecation_desc)),
            '}',
        ),

        deprecation_desc: $ => seq(',', field("desc", $._desc)),

        _desc: $ => choice(
            field("atom", $.atom),
            field("comment", $.multi_string),
        ),

        multi_string: $ => prec.right(field("elems", repeat1($._string_like))),

        _string_like: $ => choice(
            $.string,
            $._macro_body_expr
        ),

        _deprecated_fun_arity: $ => choice(
            $.integer,
            $.deprecated_wildcard,
        ),

        deprecated_wildcard: $ => "'_'",

        type_alias: $ => seq('-', atom_const('type'), $._type_def, '.'),

        opaque: $ => seq('-', atom_const('opaque'), $._type_def, '.'),

        _type_def: $ => choice(
            seq(field("name", $.type_name), '::', field("ty", $._expr)),
            seq('(', field("name", $.type_name), '::', field("ty", $._expr), ')')
        ),
        type_name: $ => seq(field("name", $._name), field("args", $.var_args)),

        record_decl: $ => seq(
            '-',
            atom_const('record'),
            '(',
            field("name", $._name),
            optional(','),
            $._record_tuple,
            ')',
            '.',
        ),

        spec: $ => seq('-', atom_const('spec'), $._spec_def, '.'),

        callback: $ => seq('-', atom_const('callback'), $._spec_def, '.'),

        _spec_def: $ => choice(
            seq($._spec_fun, sepBy1(';', field("sigs", $.type_sig))),
            seq('(', $._spec_fun, sepBy1(';', field("sigs", $.type_sig)), ')'),
        ),

        _spec_fun: $ => seq(field("module", optional($.module)), field("fun", $._name)),
        module: $ => seq(field("name", $._name), ':'),

        wild_attribute: $ => seq(field("name", $.attr_name), field("value", $._expr), '.'),

        attr_name: $ => seq('-', field("name", $._name)),

        fun_decl: $ => seq(
            sepBy1(optional(';'), field("clauses", $._function_or_macro_clause)),
            '.'
        ),

        type_sig: $ => seq(
            field("args", $.expr_args),
            '->',
            field("ty", $._expr),
            optional(field("guard", $.type_guards)),
        ),

        type_guards: $ => seq('when', sepBy1(',', field("guards", $.ann_type))),

        ann_type: $ => prec(PREC.DCOLON, seq(field("var", $.ann_var), field("ty", $._expr))),

        ann_var: $ => prec(PREC.DCOLON, seq(field("var", $.var), '::')),

        // Both union type and list tail
        pipe: $ => prec.right(PREC.PIPE, seq(field("lhs", $._expr), '|', field("rhs", $._expr))),

        fun_type: $ => seq('fun', '(', field("sig", optional($.fun_type_sig)), ')'),

        fun_type_sig: $ => seq(
            field("args", $.expr_args),
            '->',
            field("ty", $._expr)
        ),

        range_type: $ => prec.left(PREC.DOTDOT, seq(
            field("lhs", $._expr),
            '..',
            field("rhs", $._expr)
        )),

        _function_or_macro_clause: $ => choice(
            $.function_clause,
            $.macro_call_expr,
        ),

        function_clause: $ => seq(
            field("name", $._name),
            field("args", $.expr_args),
            optional($._clause_guard),
            field("body", $.clause_body)
        ),

        // This is optional, but tree-sitter complains if we put
        // 'optional' here, must put it at each usage site.
        _clause_guard: $ => seq('when', field("guard", $.guard)),

        clause_body: $ => prec.right(seq('->', sepBy1(',', field("exprs", $._expr)))),

        _expr: $ => choice(
            $.ann_type,
            $.pipe,
            $.dotdotdot,
            $.range_type,
            $.catch_expr,
            $.binary_op_expr,
            $.match_expr,
            $.unary_op_expr,
            $._map_expr,
            $.call,
            $._record_expr,
            $.remote,
            $._expr_max,
            $.cond_match_expr,
        ),

        dotdotdot: $ => '...',

        catch_expr: $ => prec(PREC.CATCH, seq('catch', field("expr", $._expr))),

        match_expr: $ =>
            prec.right(PREC.EQ, seq(
                field("lhs", $._expr),
                '=',
                field("rhs", prec.right($._expr)),
            )),
        cond_match_expr: $ =>
            prec.right(PREC.COND_MATCH, seq(
                field("lhs", $._expr),
                '?=',
                field("rhs", prec.right($._expr)),
            )),
        binary_op_expr: $ => choice(
            prec.right(PREC.BANG, seq(
                field("lhs", $._expr),
                '!',
                field("rhs", $._expr),
            )),
            prec.right(PREC.ORELSE, seq(
                field("lhs", $._expr),
                'orelse',
                field("rhs", $._expr),
            )),
            prec.right(PREC.ANDALSO, seq(
                field("lhs", $._expr),
                'andalso',
                field("rhs", $._expr),
            )),
            prec.left(PREC.COMP_OP, seq(
                field("lhs", $._expr),
                $._comp_op,
                field("rhs", $._expr),
            )),
            prec.right(PREC.LIST_OP, seq(
                field("lhs", $._expr),
                $._list_op,
                field("rhs", $._expr),
            )),
            prec.left(PREC.ADD_OP, seq(
                field("lhs", $._expr),
                $._add_op,
                field("rhs", $._expr),
            )),
            prec.left(PREC.MULT_OP, seq(
                field("lhs", $._expr),
                $._mult_op,
                field("rhs", $._expr),
            )),
        ),

        unary_op_expr: $ => prec(PREC.PREFIX_OP, seq(
            $._prefix_op,
            field("operand", $._expr),
        )),

        _expr_max: $ => choice(
            $.char,
            $.integer,
            $.atom,
            $.float,
            $.string,
            $.concatables,
            $._macro_body_expr,
            $.var,
            $.list,
            $.binary,
            $.list_comprehension,
            $.binary_comprehension,
            $.map_comprehension,
            $.tuple,
            $.paren_expr,
            $.block_expr,
            $.if_expr,
            $.case_expr,
            $.receive_expr,
            $._fun_expr,
            $.try_expr,
            $.maybe_expr,
        ),

        remote: $ => prec.right(PREC.REMOTE, seq(field("module", $.remote_module), field("fun", $._expr_max))),
        remote_module: $ => prec(PREC.REMOTE, seq(field("module", $._expr_max), ':')),

        paren_expr: $ => seq('(', field("expr", $._expr), ')'),
        block_expr: $ => seq('begin', sepBy1(',', field("exprs", $._expr)), 'end'),

        list: $ => seq(
            '[',
            sepBy(',', field("exprs", $._expr)),
            ']',
        ),

        binary: $ => seq(
            '<<',
            sepBy(',', field("elements", $.bin_element)),
            '>>',
        ),

        bin_element: $ => seq(
            field("element", $._bit_expr),
            field("size", optional($.bit_size_expr)),
            field("types", optional($.bit_type_list)),
        ),
        bit_size_expr: $ => seq(
            ':',
            field("size", $._bit_expr),
        ),
        bit_type_list: $ => seq(
            '/',
            sepBy1('-', field("types", $._bit_type)),
        ),

        _bit_expr: $ => prec(PREC.BIT_EXPR, choice(
            alias($.unary_op_expr_max, $.unary_op_expr),
            alias($.binary_op_expr_max, $.binary_op_expr),
            $._expr_max,
        )),

        unary_op_expr_max: $ => prec(PREC.PREFIX_OP, seq(
            $._prefix_op,
            field("operand", $._expr_max),
        )),

        binary_op_expr_max: $ => prec(PREC.MULT_OP, seq(
            field("lhs", $._expr_max),
            '*',
            field("rhs", $._expr_max),
        )),

        _bit_type: $ => choice(
            $._name,
            $.bit_type_unit,
        ),
        bit_type_unit: $ => seq('unit', ':', field("size", $._arity_value)),

        list_comprehension: $ => seq(
            '[',
            field("expr", $._expr),
            field("lc_exprs", $.lc_exprs),
            ']'
        ),
        binary_comprehension: $ => seq(
            '<<',
            field("expr", $._expr_max),
            field("lc_exprs", $.lc_exprs),
            '>>'
        ),
        map_comprehension: $ => seq(
            '#',
            '{',
            field("expr", $.map_field),
            field("lc_exprs", $.lc_exprs),
            '}',
        ),

        lc_exprs: $ => seq('||', sepBy1(',', field("exprs", $._lc_expr))),

        _lc_expr: $ => choice(
            $._expr,
            $.generator,
            $.b_generator,
            $.map_generator,
        ),

        generator: $ => seq(
            field("lhs", $._expr),
            '<-',
            field("rhs", $._expr),
        ),
        b_generator: $ => seq(
            field("lhs", $._expr),
            '<=',
            field("rhs", $._expr),
        ),
        map_generator: $ => seq(
            field("lhs", $.map_field),
            '<-',
            field("rhs", $._expr),
        ),

        tuple: $ => seq(
            '{',
            sepBy(',', field("expr", $._expr)),
            '}'
        ),

        _map_expr: $ => choice(
            $.map_expr,
            $.map_expr_update,
        ),

        map_expr_update: $ => prec.right(seq(
            field("expr", $._map_expr_base),
            '#',
            '{',
            sepBy(',', field("fields", $.map_field)),
            '}',
        )),

        map_expr: $ => seq(
            '#',
            '{',
            sepBy(',', field("fields", $.map_field)),
            '}',
        ),

        _map_expr_base: $ => choice(
            $._expr_max,
            $._map_expr,
        ),

        map_field: $ => prec.left(PREC.DARROW, seq(
            field("key", $._expr),
            $._map_field_op,
            field("value", $._expr),
        )),
        _map_field_op: $ => choice('=>', ':='),

        _record_expr: $ => choice(
            $.record_index_expr,
            $.record_field_expr,
            $.record_update_expr,
            $.record_expr,
        ),

        record_index_expr: $ => seq(
            field("name", $.record_name),
            field("field", $.record_field_name),
        ),

        record_field_expr: $ => prec.right(seq(
            field("expr", $._record_expr_base),
            field("name", $.record_name),
            field("field", $.record_field_name),
        )),

        record_update_expr: $ => prec.right(seq(
            field("expr", $._record_expr_base),
            field("name", $.record_name),
            $._record_tuple,
        )),

        record_expr: $ => seq(
            field("name", $.record_name),
            $._record_tuple,
        ),

        record_name: $ => seq('#', field("name", $._name)),

        record_field_name: $ => seq('.', field("name", $._name)),

        _record_expr_base: $ => choice(
            $._expr_max,
            $._record_expr,
        ),

        _record_tuple: $ => seq(
            '{',
            optional(sepBy1(',', field("fields", $.record_field))),
            '}'
        ),

        record_field: $ => seq(
            field("name", $._name),
            optional(field("expr", $.field_expr)),
            optional(field("ty", $.field_type)),
        ),

        field_expr: $ => seq('=', field("expr", $._expr)),

        field_type: $ => seq('::', field("expr", $._expr)),

        call: $ => prec(PREC.CALL, seq(
            field("expr", $._expr),
            field("args", $.expr_args),
        )),

        if_expr: $ => seq(
            'if',
            optional(sepBy1(';', field("clauses", $.if_clause))),
            'end',
        ),

        if_clause: $ => seq(
            field("guard", $.guard),
            field("body", $.clause_body),
        ),

        case_expr: $ => seq(
            'case',
            field("expr", $._expr),
            'of',
            optional($._cr_clauses),
            'end',
        ),

        _cr_clauses: $ => sepBy1(';', field("clauses", $._cr_clause_or_macro)),

        _cr_clause_or_macro: $ => choice(
            $.cr_clause,
            $.macro_call_expr,
        ),

        cr_clause: $ => seq(
            field("pat", $._expr),
            optional($._clause_guard),
            field("body", $.clause_body),
        ),

        receive_expr: $ => seq(
            'receive',
            optional($._cr_clauses),
            optional(field("after", $.receive_after)),
            'end'
        ),

        receive_after: $ => seq(
            'after',
            field("expr", $._expr),
            field("body", $.clause_body),
        ),

        _fun_expr: $ => choice(
            $.internal_fun,
            $.external_fun,
            $.anonymous_fun,
            $.fun_type,
        ),
        internal_fun: $ => seq(
            'fun',
            field("fun", $._name),
            field("arity", $.arity),
        ),
        external_fun: $ => seq(
            'fun',
            field("module", $.module),
            field("fun", $._name),
            field("arity", $.arity),
        ),
        anonymous_fun: $ => seq(
            'fun',
            sepBy1(';', field("clauses", $.fun_clause)),
            'end'
        ),

        _macro_name: $ => choice(
            $.atom,
            $.var,
        ),

        _name: $ => choice(
            $.atom,
            $.var,
            alias($.macro_call_none, $.macro_call_expr),
        ),

        arity: $ => seq('/', field("value", $._arity_value)),

        _arity_value: $ => choice(
            $.integer,
            $.var,
            $.macro_call_expr,
        ),

        fun_clauses: $ => sepBy1(';', $.fun_clause),

        fun_clause: $ => seq(
            field("name", optional($.var)),
            field("args", $.expr_args),
            optional($._clause_guard),
            field("body", $.clause_body),
        ),

        try_expr: $ => choice(
            seq('try', $._exprs, 'of', $._cr_clauses, $._try_catch),
            seq('try', $._exprs, $._try_catch),
        ),

        _try_catch: $ => choice(
            seq('catch', optional($._catch_clauses), 'end'),
            seq('catch', optional($._catch_clauses), field("after", $.try_after), 'end'),
            seq(field("after", $.try_after), 'end'),
        ),

        try_after: $ => seq('after', $._exprs),

        _catch_clauses: $ => sepBy1(';', field("catch", $.catch_clause)),

        catch_clause: $ => seq(
            choice(
                field("pat", $._catch_pat),
                seq(field("class", $.try_class), field("pat", $._catch_pat)),
                seq(field("class", $.try_class), field("pat", $._catch_pat), field("stack", $.try_stack)),
            ),
            optional($._clause_guard),
            field("body", $.clause_body)
        ),

        try_class: $ => seq(field("class", $._name), ':'),

        try_stack: $ => seq(':', field("class", $.var)),

        _catch_pat: $ => choice(
            alias($.binary_op_catch_pat, $.binary_op_expr),
            alias($.match_catch_pat, $.binary_op_expr),
            $.unary_op_expr,
            $.map_expr,
            $.record_index_expr,
            $.record_expr,
            $._expr_max,
        ),

        match_catch_pat: $ =>
            prec.right(PREC.EQ, seq(
                field("lhs", $._catch_pat),
                '=',
                field("rhs", $._catch_pat),
            )),
        binary_op_catch_pat: $ => choice(
            prec.left(PREC.COMP_OP, seq(
                field("lhs", $._catch_pat),
                $._comp_op,
                field("rhs", $._catch_pat),
            )),
            prec.right(PREC.LIST_OP, seq(
                field("lhs", $._catch_pat),
                $._list_op,
                field("rhs", $._catch_pat),
            )),
            prec.left(PREC.ADD_OP, seq(
                field("lhs", $._catch_pat),
                $._add_op,
                field("rhs", $._catch_pat),
            )),
            prec.left(PREC.MULT_OP, seq(
                field("lhs", $._catch_pat),
                $._mult_op,
                field("rhs", $._catch_pat),
            )),
        ),

        maybe_expr: $ => choice(
                    seq('maybe', sepBy1(',', field("exprs", $._expr)), 'end'),
                    seq('maybe', sepBy1(',', field("exprs", $._expr)), $._maybe_else_clause),
        ),

        _maybe_else_clause: $ => seq('else', optional($._cr_clauses), 'end'),

        _macro_def_replacement: $ => choice(
            prec.dynamic(PREC.DYN_EXPR, $._expr),
            prec.dynamic(PREC.DYN_FUNCTION_CLAUSES, $.replacement_function_clauses),
            prec.dynamic(PREC.DYN_CR_CLAUSES, $.replacement_cr_clauses),
            prec.dynamic(PREC.DYN_GUARD_OR, $.replacement_guard_or),
            prec.dynamic(PREC.DYN_GUARD_AND, $.replacement_guard_and),
            $.replacement_parens,
        ),

        replacement_function_clauses: $ => sepBy1(';', field("clauses", $._function_or_macro_clause)),

        replacement_cr_clauses: $ => sepBy1(';', field("clauses", $._cr_clause_or_macro)),

        replacement_guard_or: $ => sepBy1(';', field("guard", $.replacement_guard_and)),

        replacement_guard_and: $ => sepBy1(',', field("guard", $._expr)),

        replacement_parens: $ => seq('(', ')'),

        macro_lhs: $ => seq(
            field("name", $._macro_name),
            field("args", optional($.var_args)),
        ),

        _macro_body_expr: $ => choice(
            $.macro_string,
            $.macro_call_expr,
        ),

        macro_call_expr: $ => prec.right(seq(
            '?',
            field("name", $._macro_name),
            field("args", optional($.macro_call_args)),
        )),

        macro_call_args: $ => seq(
            '(',
            sepBy(',', field("args", $.macro_expr)),
            ')'
        ),

        macro_call_none: $ => seq(
            '?',
            field("name", $._macro_name),
        ),

        macro_string: $ => seq(
            '?', '?',
            field("name", $._macro_name),
        ),

        macro_expr: $ => choice(
            field("expr", $._expr),
            seq(field("expr", $._expr), 'when', field("guard", $._expr)),
        ),

        _exprs: $ => sepBy1(',', field("exprs", $._expr)),

        expr_args: $ => seq(
            '(',
            sepBy(',', field("args", $._expr)),
            ')',
        ),

        var_args: $ => seq(
            '(',
            sepBy(optional(','), field("args", $.var)),
            ')'
        ),

        guard: $ => prec.right(sepBy1(';', field("clauses", $.guard_clause))),
        guard_clause: $ => prec.right(sepBy1(',', field("exprs", $._expr))),

        concatables: $ => prec.right(field("elems", seq($._concatable, repeat1($._concatable)))),

        _concatable: $ => choice(
            $.string,
            $.var,
            $._macro_body_expr
        ),

        // -------------------------------------------------------------
        // Operators

        _prefix_op: $ => choice(
            '+',
            '-',
            'bnot',
            'not',
        ),

        _mult_op: $ => choice(
            '/',
            '*',
            'div',
            'rem',
            'band',
            'and',
        ),

        _add_op: $ => choice(
            '+',
            '-',
            'bor',
            'bxor',
            'bsl',
            'bsr',
            'or',
            'xor',
        ),

        _list_op: $ => choice('++', '--'),

        _comp_op: $ => choice(
            '==',
            '/=',
            '=<',
            '<',
            '>=',
            '>',
            '=:=',
            '=/=',
        ),

        // -------------------------------------------------------------
        // Tokens

        var: $ => token(/[_A-Z\xC0-\xD6\xD8-\xDE][_@a-zA-Z0-9\xC0-\xD6\xD8-\xDE\xDF-\xF6\xF8-\xFF]*/),

        integer: $ => token(
            /\d{1,2}#[0-9a-zA-Z](_?[0-9a-zA-Z])*|\d(_?\d)*/,
        ),

        float: $ => token(
            /\d(_?\d)*\.\d(_?\d)*([eE][+-]?\d(_?\d)*)?/,
        ),

        string: $ => /"([^"\\]|\\([^x\^]|[0-7]{1,3}|x[0-9a-fA-F]{2}|x\{[0-9a-fA-F]+\}|\^.))*"/,

        // Check via https://regexr.com/
        // Should match https://www.erlang.org/doc/reference_manual/data_types.html#escape-sequences
        // Regex is based on https://github.com/erlang/otp/blob/30e0b342a50ce70b204a47e1e442e3dc33f9a41b/lib/stdlib/src/erl_scan.erl#L874-L922
        char: $ => token(
            /\$([^\\]|\\([0-7]{1,3}|x[0-9a-fA-F]{2}|x{[0-9a-fA-F]+}|\^.|\\n|\\\\|.))/,
        ),

        atom: $ => token(
            /([a-z\xDF-\xF6\xF8-\xFF][_@a-zA-Z0-9\xC0-\xD6\xD8-\xDE\xDF-\xF6\xF8-\xFF]*)|('([^'\\]|\\([^x\^]|[0-7]{1,3}|x[0-9a-fA-F]{2}|x\{[0-9a-fA-F]+\}|\^.))*')/,
        ),

        comment: $ => token(/%[^\n]*/),
    }
});
