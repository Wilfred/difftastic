const CHARSET = [ '0-9', '@', 'A-Z', '_', 'a-z' ];

const NL = repeat1(token.immediate(/[\r\n]/));
const WS = repeat1(token.immediate(/[\t ]/));

const SPLIT = token(seq('\\', /[\r\n]+/));

const AUTOMATIC_VARS = [ '@', '%', '<', '?', '^', '+', '/', '*' ];

const BUILTIN_TARGETS = [
    '.PHONY',
    '.SUFFIXES',
    '.DEFAULT',
    '.PRECIOUS',
    '.INTERMEDIATE',
    '.SECONDARY',
    '.SECONDEXPANSION',
    '.DELETE_ON_ERROR',
    '.IGNORE',
    '.LOW_RESOLUTION_TIME',
    '.SILENT',
    '.EXPORT_ALL_VARIABLES',
    '.NOTPARALLEL',
    '.ONESHELL',
    '.POSIX',
];


module.exports = grammar({
    name: 'make',

    word: $ => $._word,

    inline: $ => [
        $._targets,
        $._prerequisites,
        $._order_only_prerequisites,

        $._conditional_args_cmp,
        $._conditional_arg_cmp,

        $._name,
        $._filename_path
    ],

    extras: $ => [ WS, NL, SPLIT, $.comment ],

    conflicts: $ => [
        [$.recipe],
    ],

    precedences: () => [
        [
            'primary',
            'wildcard',
            'pattern',
            'filename',
            'directory',
        ],
    ],

    rules: {

        makefile: $ => optional($._text),

        _text: $ => repeat1(choice(
            $.rule,
            $._directive,
        )),

        // Rules {{{
        rule: $ => seq(
            $._targets,
            choice(':', '&:', '::'),
            optional(seq($.target_pattern, ':')),
            optional($._prerequisites),
            optional(seq('|', $._order_only_prerequisites)),
            optional($.recipe),
            NL
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
            optional(choice('@','-')),
            $.shell_text,
            // splited recipe lines may start with .RECIPEPREFIX
            // that shall not be part of the shell_code
            repeat(seq(
                SPLIT,
                optional($._recipeprefix),
                $.shell_text
            )),
        ),

        shell_text: $ => choice(
            seq(
                $._shell_text,
                repeat(seq(
                    $._variable,
                    optional($._shell_text)
                ))
            ),
            seq(
                $._variable,
                repeat(seq(
                    optional($._shell_text),
                    $._variable
                )),
            )
        ),

        _targets: $ => choice(
            $.builtin_target,
            alias(
                $.paths,
                $.targets
            ),
        ),

        builtin_target: $ => choice(...BUILTIN_TARGETS),

        _prerequisites: $ => alias(
            $.paths,
            $.prerequisites
        ),

        target_pattern: $ => $._path_expr,

        _order_only_prerequisites: $ => field('order_only',alias(
            $.paths,
            $.prerequisites
        )),
        // }}}
        // Directives {{{
        _directive: $ => choice(
            $.vpath_directive,
            $.include_directive, // 3.3
            $.conditional // 7
        ),

        vpath_directive: $ => seq(
            'vpath',
            optional(seq(
                $._path_expr,
                optional(seq(
                    WS,
                    $.directories
                ))
            )),
            NL
        ),

        include_directive: $ => seq(
            'include',
            alias($.paths, $.filenames),
            NL
        ),
        // }}}
        // Conditionals {{{
        conditional: $ => seq(
            field('condition', $._conditional_directives),
            optional(field('consequence', $._text)),
            optional(seq(
                'else',
                optional(field('alternative', $._text))
            )),
            'endif'
        ),

        _conditional_directives: $ => choice(
            $.ifeq_directive,
            $.ifneq_directive,
            $.ifdef_directive,
            $.ifndef_directive
        ),

        ifeq_directive: $ => seq(
            'ifeq', $._conditional_args_cmp
        ),

        ifneq_directive: $ => seq(
            'ifneq', $._conditional_args_cmp
        ),

        ifdef_directive: $ => seq(
            'ifdef', field('variable', $._variable),
        ),

        ifndef_directive: $ => seq(
            'ifndef', field('variable', $._variable),
        ),

        _conditional_args_cmp: $ => choice(
            // (arg0,arg1)
            seq(
                '(',
                field('arg0', $._path_expr),
                ',',
                field('arg1', $._path_expr),
                ')'
            ),
            // 'arg0' 'arg1'
            // "arg0" "arg1"
            // 'arg0' 'arg1'
            // 'arg0' "arg1"
            seq(
                field('arg0', $._conditional_arg_cmp),
                field('arg1', $._conditional_arg_cmp),
            ),
        ),

        _conditional_arg_cmp: $ => choice(
            seq( '"', $._path_expr, '"', ),
            seq( "'", $._path_expr, "'", ),
        ),
        // }}}
        // Variables {{{
        _variable: $ => choice(
            $.variable_reference,
            $.automatic_variable,
            prec(-1, $._name)
        ),

        variable_reference: $ => seq(
            choice('$','$$'),
            token.immediate('('),
            alias($._word ,$.variable),
            ')'
        ),

        automatic_variable: $ => choice(
            seq(
                choice('$','$$'),
                choice(...AUTOMATIC_VARS.map(c => token.immediate(c)))
            ),
            seq(
                choice('$','$$'),
                token.immediate('('),
                choice(...AUTOMATIC_VARS),
                choice(
                    token.immediate('D'),
                    token.immediate('F')
                ),
                ')'
            ),
        ),
        // }}}
        // Paths and filenames {{{
        paths: $ => seq(
            $._path_expr,
            repeat(seq(
                choice(WS,SPLIT),
                $._path_expr
            )),
            optional(WS)
        ),

        directories: $ => seq(
            $._path_expr,
            repeat(seq(
                // directories on vpath shall be separated with ":"
                choice(':',alias(WS,$.ILLEGAL),SPLIT),
                $._path_expr
            )),
            optional(WS)
        ),

        _path_expr: $ => choice(
            $.pattern,
            $.directory,
            $.filename,
            $.wildcard,
            $.root,
            $.home,
            $.dot,

            $._name,
            $._variable
        ),

        root: $ => prec('primary','/'),

        home: $ => seq(
            '~',
            optional(field('user', $._name))
        ),

        dot: $ => prec('primary', choice('.', '..')),

        pattern: $ => prec.left('pattern',seq(
            field('left', optional($._path_expr)),
            '%',
            field('right', optional($._path_expr)),
        )),

        directory: $ => prec.left('directory',seq(
            field('left', optional($._path_expr)),
            '/',
            field('right', optional($._path_expr)),
        )),

        filename: $ => prec.left('filename',seq(
            field('left', optional($._path_expr)),
            '.',
            field('right', optional($._path_expr)),
        )),

        wildcard: $ => prec.left('wildcard',seq(
            field('left', optional($._path_expr)),
            choice('*','?'),
            field('right', optional($._path_expr)),
        )),
        // }}}
        // Tokens {{{
        _word: $ => tokenize(...CHARSET),

        _name: $ => alias($._word, $.name),

        comment: $ => token(prec(-1,/#.*/)),

        _recipeprefix: $ => '\t',

        _shell_text: $ => token(repeat1(choice(
            noneOf(...['\\$', '\\n','\\']),
            /\\[^\n]/
        ))),
        // }}}

    }

});

function tokenize(...extra) {
    return token(repeat1(choice(
        anyOf(extra),
        seq('\\',/[^\n]/)
    )))
}

function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('')
  return new RegExp('[^' + negatedString + ']')
}

function anyOf(...characters) {
  const string = characters.map(c => c == '\\' ? '\\\\' : c).join('')
  return new RegExp('[' + string + ']')
}
