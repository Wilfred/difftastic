const CHARSET = 'a-zA-Z0-9%\\+\\-\\.@_\\*\\?\\/';
const ESCAPE_SET = 'abtnvfrE!"#\\$&\'\\(\\)\\*,;<>\\?\\[\\\\\\]^`{\\|}~'

const NL = token.immediate(/[\r\n]+/);
const WS = token.immediate(/[\t ]+/);
const SPLIT = alias(token.immediate(seq('\\', /\r?\n|\r/)), '\\');

const AUTOMATIC_VARS = [ '@', '%', '<', '?', '^', '+', '/', '*' ];

const DEFINE_OPS = ['=', ':=', '::=', '?=', '+='];

const FUNCTIONS = [
    'subst',
    'patsubst',
    'strip',
    'findstring',
    'filter',
    'filter-out',
    'sort',
    'word',
    'words',
    'wordlist',
    'firstword',
    'lastword',
    'dir',
    'notdir',
    'suffix',
    'basename',
    'addsuffix',
    'addprefix',
    'join',
    'wildcard',
    'realpath',
    'abspath',
    'error',
    'warning',
    'info',
    'origin',
    'flavor',
    'foreach',
    'if',
    'or',
    'and',
    'call',
    'eval',
    'file',
    'value',
];

module.exports = grammar({
    name: 'make',

    word: $ => $.word,

    inline: $ => [
        $._targets,
        $._target_pattern,
        $._prerequisites_pattern,
        $._prerequisites,
        $._order_only_prerequisites,
        $._target_or_pattern_assignment,

        $._primary,
        $._name,
        $._string,
    ],

    extras: $ => [
        /[\s]/,
        alias(token(seq('\\',/\r?\n|\r/)), '\\'),
        $.comment
    ],

    conflicts: $ => [],

    precedences: $ => [],

    rules: {

        // 3.1
        makefile: $ => repeat($._thing),

        _thing: $ => choice(
            $.rule,
            $._variable_definition,
            $._directive,
            seq($._function, NL)
        ),

        // Rules {{{
        // 2.1
        rule: $ => choice(
            $._ordinary_rule,
            $._static_pattern_rule,
        ),

        _ordinary_rule: $ => prec.right(seq(
            $._targets,
            choice(':', '&:', '::'),
            optional(WS),
            optional($._prerequisites),
            choice(
                $.recipe,
                NL
            )
        )),

        // 4.12.1
        _static_pattern_rule: $ => prec.right(seq(
            $._targets,
            ':',
            optional(WS),
            $._target_pattern,
            ':',
            optional(WS),
            optional($._prerequisites_pattern),
            choice(
                $.recipe,
                NL
            )
        )),

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

        recipe: $ => prec.right(choice(
            // the first recipe line may be attached to the
            // target-and-prerequisites line with a semicolon
            // in between
            seq(
                $._attached_recipe_line,
                NL,
                repeat(choice(
                    $.conditional,
                    $._prefixed_recipe_line,
                ))
            ),
            seq(
                NL,
                repeat1(choice(
                    $.conditional,
                    $._prefixed_recipe_line
                ))
            ),
        )),

        _attached_recipe_line: $ => seq(
            ';',
            optional($.recipe_line)
        ),

        _prefixed_recipe_line: $ => seq(
            $._recipeprefix,
            optional($.recipe_line),
            NL
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
            $.RECIPEPREFIX_assignment,
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

        RECIPEPREFIX_assignment: $ => seq(
            field('name','.RECIPEPREFIX'),
            optional(WS),
            field('operator',choice(...DEFINE_OPS)),
            field('value', $.text),
            NL
        ),

        // 6.5
        variable_assignment: $ => seq(
            optional($._target_or_pattern_assignment),
            $._name,
            optional(WS),
            field('operator',choice(...DEFINE_OPS)),
            optional(WS),
            optional(field('value', $.text)),
            NL
        ),

        _target_or_pattern_assignment: $ => seq(
            field('target_or_pattern', $.list),
            ':',
            optional(WS),
        ),

        shell_assignment: $ => seq(
            field('name',$.word),
            optional(WS),
            field('operator','!='),
            optional(WS),
            field('value',$._shell_command),
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
            $.conditional
        ),

        // 3.3
        include_directive: $ => choice(
            seq( 'include', field('filenames',$.list), NL),
            seq('sinclude', field('filenames',$.list), NL),
            seq('-include', field('filenames',$.list), NL),
        ),

        // 4.5.2
        vpath_directive: $ => choice(
            seq('vpath', NL),
            seq('vpath', field('pattern', $.word), NL),
            seq('vpath', field('pattern', $.word), field('directories', $.paths), NL)
        ),

        // 5.7.2
        export_directive: $ => choice(
            seq('export', NL),
            seq('export', field('variables', $.list), NL),
            seq('export', $.variable_assignment)
        ),

        // 5.7.2
        unexport_directive: $ => choice(
            seq('unexport', NL),
            seq('unexport', field('variables', $.list), NL),
        ),

        // 6.7
        override_directive: $ => choice(
            seq('override', $.define_directive),
            seq('override', $.variable_assignment),
            seq('override', $.undefine_directive),
        ),

        // 6.9
        undefine_directive: $ => seq(
            'undefine', field('variable', $.word), NL
        ),

        // 6.13
        private_directive: $ => seq(
            'private', $.variable_assignment
        ),
        // }}}
        // Conditionals {{{
        // 7
        conditional: $ => seq(
            field('condition', $._conditional_directives),
            optional(field('consequence', $._conditional_consequence)),
            repeat($.elsif_directive),
            optional($.else_directive),
            'endif',
            NL
        ),

        elsif_directive: $ => seq(
            'else',
            field('condition', $._conditional_directives),
            optional(field('consequence', $._conditional_consequence)),
        ),

        else_directive: $ => seq(
            'else',
            NL,
            optional(field('consequence', $._conditional_consequence)),
        ),

        _conditional_directives: $ => choice(
            $.ifeq_directive,
            $.ifneq_directive,
            $.ifdef_directive,
            $.ifndef_directive
        ),

        _conditional_consequence: $ => repeat1(choice(
            $._thing,
            $._prefixed_recipe_line
        )),

        ifeq_directive: $ => seq(
            'ifeq', $._conditional_args_cmp, NL
        ),

        ifneq_directive: $ => seq(
            'ifneq', $._conditional_args_cmp, NL
        ),

        ifdef_directive: $ => seq(
            'ifdef', field('variable', $._primary), NL
        ),

        ifndef_directive: $ => seq(
            'ifndef', field('variable', $._primary), NL
        ),

        _conditional_args_cmp: $ => choice(
            seq(
                '(',
                optional(field('arg0', $._primary)),
                ',',
                optional(field('arg1', $._primary)),
                ')'
            ),
            seq(
                field('arg0', $._primary),
                field('arg1', $._primary),
            ),
        ),

        // }}}
        // Variables {{{
        _variable: $ => choice(
            $.variable_reference,
            $.substitution_reference,
            $.automatic_variable,
        ),

        variable_reference: $ => seq(
            choice('$','$$'),
            choice(
                delimitedVariable($._primary),
                // TODO are those legal? $) $$$
                alias(token.immediate(/./), $.word), // match any single digit
                //alias(token.immediate('\\\n'), $.word)
            )
        ),

        // 6.3.1
        substitution_reference: $ => seq(
            choice('$','$$'),
            delimitedVariable(seq(
                field('text',$._primary),
                ':',
                field('pattern',$._primary),
                '=',
                field('replacement',$._primary),
            )),
        ),

        // 10.5.3
        automatic_variable: $ => seq(
            choice('$','$$'),
            choice(
                choice(
                    ...AUTOMATIC_VARS
                        .map(c => token.immediate(prec(1,c)))
                ),
                delimitedVariable(seq(
                    choice(
                        ...AUTOMATIC_VARS
                            .map(c => token(prec(1,c)))
                    ),
                    optional(choice(
                        token.immediate('D'),
                        token.immediate('F')
                    )),
                ))
            )
        ),
        // }}}
        // Functions {{{
        _function: $ => choice(
            $.function_call,
            $.shell_function,
        ),

        function_call: $ => seq(
            choice('$','$$'),
            token.immediate('('),
            field('function', choice(
                ...FUNCTIONS.map(f => token.immediate(f))
            )),
            optional(WS),
            $.arguments,
            ')'
        ),

        arguments: $ => seq(
            field('argument',$.text),
            repeat(seq(
                ',',
                field('argument',$.text),
            ))
        ),

        // 8.13
        shell_function: $ => seq(
            choice('$','$$'),
            token.immediate('('),
            field('function', 'shell'),
            optional(WS),
            $._shell_command,
            ')'
        ),
        // }}}
        // Primary and lists {{{
        list: $ => prec(1,seq(
            $._primary,
            repeat(seq(
                choice(WS, SPLIT),
                $._primary
            )),
            optional(WS)
        )),

        paths: $ => seq(
            $._primary,
            repeat(seq(
                choice(...[':',';'].map(c=>token.immediate(c))),
                $._primary
            )),
        ),

        _primary: $ => choice(
            $.word,
            $.archive,
            $._variable,
            $._function,
            $.concatenation,
            $.string,
        ),

        concatenation: $ => prec.right(seq(
            $._primary,
            repeat1(prec.left($._primary))
        )),
        // }}}
        // Names {{{
        _name: $ => field('name',$.word),

        string: $ => field('string',choice(
            seq('"', optional($._string), '"'),
            seq("'", optional($._string), "'"),
        )),

        _string: $ => repeat1(choice(
            $._variable,
            $._function,
            token(prec(-1,/([^'"$\r\n\\]|\\\\|\\[^\r\n])+/)),
        )),

        word: $ => token(repeat1(choice(
            new RegExp ('['+CHARSET+']'),
            new RegExp ('\\\\['+ESCAPE_SET+']'),
            new RegExp ('\\\\[0-9]{3}'),
        ))),

        // 11.1
        archive: $ => seq(
            field('archive', $.word),
            token.immediate('('),
            field('members', $.list),
            token.immediate(')'),
        ),
        // }}}
        // Tokens {{{
        // TODO external parser for .RECIPEPREFIX
        _recipeprefix: $ => '\t',

        // TODO prefixed line in define is recipe
        _rawline: $ => token(/.*[\r\n]+/), // any line

        _shell_text_without_split: $ => text($,
            noneOf(...['\\$', '\\r', '\\n', '\\']),
            choice(
                $._variable,
                $._function,
                alias('$$',$.escape),
                alias('//',$.escape),
            ),
        ),

        // The SPLIT chars shall be included the injected code
        shell_text_with_split: $ => seq(
            $._shell_text_without_split,
            SPLIT,
        ),

        _shell_command: $ => alias(
            $.text,
            $.shell_command
        ),

        text: $ => text($,
            choice(
                noneOf(...['\\$', '\\(', '\\)', '\\n', '\\r', '\\']),
                SPLIT
            ),
            choice(
                $._variable,
                $._function,
                alias('$$',$.escape),
                alias('//',$.escape),
            ),
        ),
        // }}}

        comment: $ => token(prec(-1,/#.*/)),

    }

});

function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('')
  return new RegExp('[^' + negatedString + ']')
}

function delimitedVariable(rule) {
    return choice(
        seq(token.immediate('('), rule, ')'),
        seq(token.immediate('{'), rule, '}')
    )
}

function text($, text, fenced_vars) {
    const raw_text = token(repeat1(choice(
        text,
        new RegExp ('\\\\['+ESCAPE_SET+']'),
        new RegExp ('\\\\[0-9]{3}'),
        new RegExp ('\\\\[^\n\r]'), // used in cmd like sed \1
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
