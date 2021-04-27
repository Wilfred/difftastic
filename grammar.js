const NL = token.immediate(/[\r\n]+/);
const WS = token.immediate(/[\t ]+/);
const SPLIT = alias(token.immediate(seq('\\', /\r?\n/)), '\\');

const AUTOMATIC_VARS = [ '@', '%', '<', '?', '^', '+', '/', '*' ];

const DEFINE_OPS = ['=', ':=', '::=', '?=', '+='];

module.exports = grammar({
    name: 'make',

    word: $ => $.word,

    inline: $ => [
        $._targets,
        $._target_pattern,
        $._prerequisites_pattern,
        $._prerequisites,
        $._order_only_prerequisites,

        $._automatic_vars,

        $._primary,
    ],

    extras: $ => [ 
        /[\s]/,
        alias(token(seq('\\',/\r?\n/)), '\\'),
        $.comment
    ],

    conflicts: $ => [
        [$.recipe],
    ],

    precedences: $ => [],

    rules: {

        // 3.1
        makefile: $ => optional($._thing),

        _thing: $ => repeat1(choice(
            $.rule,
            $._variable_definition,
            $._directive,
        )),

        // Rules {{{
        // 2.1
        rule: $ => choice(
            $._ordinary_rule,
            $._static_pattern_rule,
        ),

        _ordinary_rule: $ => seq(
            $._targets,
            choice(':', '&:', '::'),
            optional(WS),
            optional($._prerequisites),
            optional($.recipe),
            NL
        ),

        // 4.12.1
        _static_pattern_rule: $ => seq(
            $._targets,
            ':',
            optional(WS),
            $._target_pattern,
            ':',
            optional(WS),
            optional($._prerequisites_pattern),
            optional($.recipe),
            NL
        ),

        _targets: $ => alias($.list, $.targets),

        // LINT: List shall have length one
        _target_pattern: $ => field(
            'target',
            alias($.list, $.pattern_list)
        ),

        // 4.3
        _prerequisites: $ => choice(
            $._normal_prerequisites,
            seq(
                optional($._normal_prerequisites),
                '|',
                $._order_only_prerequisites
            ),
        ),

        _normal_prerequisites: $ => field(
            'normal',
            alias($.list, $.prerequisites),
        ),

        _order_only_prerequisites: $ => field(
            'order_only',
            alias($.list, $.prerequisites)
        ),

        _prerequisites_pattern: $ => field(
            'prerequisite',
            alias($.list, $.pattern_list)
        ),

        recipe: $ => seq(
            // the first recipe line may be attached to the
            // target-and-prerequisites line with a semicolon
            // in between
            choice(';', seq(NL, $._recipeprefix)),
            // empty recipe is allowed
            optional(seq(
                optional($.recipe_line),
                repeat(seq(
                    NL,
                    $._recipeprefix,
                    optional($.recipe_line)
                )),
            ))
        ),

        recipe_line: $ => seq(
            optional(choice(
                ...['@', '-', '+'].map(c => token(prec(1,c)))
            )),
            optional(seq(
                alias($.shell_text_with_split, $.shell_text),
                repeat(seq(
                    // splited recipe lines may start with .RECIPEPREFIX
                    // that shall not be part of the shell_code
                    optional($._recipeprefix),
                    alias($.shell_text_with_split, $.shell_text),
                )),
                optional($._recipeprefix),
            )),
            alias($._shell_text_without_split, $.shell_text),
        ),
        // }}}
        // Variables {{{
        _variable_definition: $ => choice(
            $.VPATH_assignment,
            $.variable_assignment,
            $.shell_assignment,
            $.define_directive
        ),

        // 4.5.1
        VPATH_assignment: $ => seq(
            field('name','VPATH'),
            optional(WS),
            field('operator',choice(...DEFINE_OPS)),
            field('value',$.paths),
            NL
        ),

        // 6.5
        variable_assignment: $ => seq(
            optional(seq(
                alias($.list, $.pattern_list),
                ':'
            )),
            field('name',$.word),
            optional(WS),
            field('operator',choice(...DEFINE_OPS)),
            field('value',alias($.list, $.text)),
            NL
        ),

        shell_assignment: $ => seq(
            field('name',$.word),
            optional(WS),
            field('operator','!='),
            // this whitespace shall not be included in shell text
            optional(WS),
            field('value',alias(
                // matching anything but newline, and
                // backlash followed by newline (split line)
                token(/([^\n]|\\\n)+/),
                $.shell_text
            )),
            NL
        ),

        define_directive: $ => seq(
            'define',
            field('name',$.word),
            optional(WS),
            optional(field('operator',choice(...DEFINE_OPS))),
            optional(WS),
            NL,
            optional(field('value',
                alias(repeat1($._rawline), $.raw_text)
            )),
            token(prec(1,'endef')),
            NL
        ),
        // }}}
        // Directives {{{
        _directive: $ => choice(
            $.include_directive,
            $.vpath_directive,
            $.export_directive,
            $.unexport_directive,
            $.override_directive,
            $.undefine_directive,
            $.private_directive,
        ),

        // 3.3
        include_directive: $ => seq(
            choice(
                'include',
                'sinclude',
                '-include',
            ),
            field('filenames',$.list),
            NL
        ),

        // 4.5.2
        vpath_directive: $ => seq(
            'vpath',
            optional(seq(
                field('pattern', $.word),
                optional(field('directories', ($.paths))),
            )),
            NL
        ),

        // 5.7.2
        export_directive: $ => seq(
            'export',
            optional(choice(
                field('variable', $.list),
                $.variable_assignment
            )),
            NL
        ),

        // 5.7.2
        unexport_directive: $ => seq(
            'unexport',
            optional(field('variable', $.list)),
            NL
        ),

        // 6.7
        override_directive: $ => seq(
            'override',
            choice(
                $.define_directive,
                $.variable_assignment,
                $.undefine_directive
            )
        ),

        // 6.9
        undefine_directive: $ => seq(
            'undefine',
            field('variable', $.word),
            NL
        ),

        // 6.13
        private_directive: $ => seq(
            'private',
            $.variable_assignment
        ),
        // }}}
        // Conditional {{{
        // }}}
        // Functions {{{
        // }}}
        // Automatic variables {{{
        // 10.5.3
        automatic_variable: $ => choice(
            seq(
                choice('$','$$'),
                choice(...AUTOMATIC_VARS
                    .map(c => token.immediate(c)))
            ),
            seq(
                choice('$','$$'),
                token.immediate('('),
                $._automatic_vars,
                ')'
            ),
            seq(
                choice('$','$$'),
                token.immediate('{'),
                $._automatic_vars,
                '}'
            ),
        ),

        _automatic_vars: $ => seq(
            choice(...AUTOMATIC_VARS),
            optional(choice(
                token.immediate('D'),
                token.immediate('F')
            )),
        ),
        // }}}
        // Archive files {{{
        // 11.1
        archive: $ => seq(
            field('archive', $.word),
            token.immediate('('),
            field('members', $.list),
            token.immediate(')'),
        ),
        // }}}
        // List and Literals {{{
        list: $ => seq(
            $._primary,
            repeat(seq(
                choice(WS, SPLIT),
                $._primary
            )),
            optional(WS)
        ),

        paths: $ => seq(
            $._primary,
            repeat(seq(
                choice(
                    token.immediate(':'),
                    token.immediate(';')
                ),
                $._primary
            )),
        ),

        _primary: $ => choice(
            $.word,
            $.archive,
            $.automatic_variable
        ),

        // TODO external parser for .RECIPEPREFIX
        _recipeprefix: $ => '\t',

        _rawline: $ => token(/.*[\r\n]+/), // any line

        word: $ => token(repeat1(choice(
            new RegExp ('[a-zA-Z0-9%\\+\\-\\.@_\\*\\?\\/]'),
            new RegExp ('\\/\\r?\\n]+'), // dont match split
            new RegExp ('\\\\.'),
            new RegExp ('\\\\[0-9]{3}'),
        ))),

        _shell_text_without_split: $ => text($,
            noneOf(...['\\$', '\\n', '\\']),
            choice(
                $.automatic_variable,
                alias('$$',$.escape),
                alias('//',$.escape),
            ),
        ),

        shell_text_with_split: $ => seq(
            $._shell_text_without_split,
            SPLIT,
        ),

        comment: $ => token(prec(-1,/#.*/)),
        // }}}

    }

});

function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('')
  return new RegExp('[^' + negatedString + ']')
}

function text($, text, fenced_vars) {
    const raw_text = token(repeat1(choice(
        text,
        /\\[^\n]/
    )))
    return choice(
        seq(
            raw_text,
            repeat(seq(
                fenced_vars,
                optional(raw_text)
            )),
        ),
        seq(
            fenced_vars,
            repeat(seq(
                optional(raw_text),
                fenced_vars
            )),
            optional(raw_text)
        )
    )
}
