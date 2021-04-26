const NL = repeat1(token.immediate(/[\r\n]/));
const WS = repeat1(token.immediate(/[\t ]/));
const SPLIT = alias(token(seq('\\', /\r?\n/)), '\\');

const AUTOMATIC_VARS = [ '@', '%', '<', '?', '^', '+', '/', '*' ];

const DEFINE_OPS = ['=', ':=', '::=', '?=', '+='];

module.exports = grammar({
    name: 'make',

    word: $ => $.word,

    inline: $ => [
        $._targets,
        $._target_pattern,
        $._prerequisites,
        $._prerequisites_pattern,

        $._primary,
        $._text,
    ],

    extras: $ => [ WS, NL, SPLIT, $.comment ],

    conflicts: $ => [
        [$.recipe]
    ],

    rules: {

        // 3.1
        makefile: $ => optional($._thing),

        _thing: $ => repeat1(choice(
            $.rule,
            $._variable_definition
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
            optional($._prerequisites),
            optional($.recipe),
            NL
        ),

        // 4.12.1
        _static_pattern_rule: $ => seq(
            $._targets,
            ':',
            $._target_pattern,
            ':',
            optional($._prerequisites_pattern),
            optional($.recipe),
            NL
        ),

        _targets: $ => field( 'targets',
            $.list
        ),

        _target_pattern: $ => field(
            'target_pattern',
            $._primary
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
            'normal_prerequisites',
            $.list
        ),

        _order_only_prerequisites: $ => field(
            'order_only_prerequisites',
            $.list
        ),

        _prerequisites_pattern: $ => field(
            'prerequisite_pattern', 
            $.list
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
                ...['@', '-', '+'].map(c => token(prec(2, c)))
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
            $.variable_assignment,
            $.shell_assignment,
        ),

        // 6.5
        variable_assignment: $ => seq(
            field('name',$.word),
            optional(WS), // avoid conflict with $.list
            field('operator',choice(...DEFINE_OPS)),
            //optional(WS), // avoid conflict with $.list
            field('value',$._text),
            NL
        ),

        shell_assignment: $ => seq(
            field('name',$.word),
            optional(WS), // avoid conflict with $.list
            field('operator','!='),
            // this whitespace shall not be included in shell text
            optional(token(prec(1,WS))),
            field('value',alias(
                // matching anything but newline, and
                // backlash followed by newline (split line)
                token(/([^\n]|\\\n)+/),
                $.shell_text
            )),
            NL
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
                choice(...AUTOMATIC_VARS),
                optional(choice(
                    token.immediate('D'),
                    token.immediate('F')
                )),
                ')'
            ),
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

        _primary: $ => choice(
            $.word,
            $.automatic_variable
        ),

        _text: $ => alias($.list, $.text),

        _recipeprefix: $ => token(prec(2,'\t')),

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
            token(prec(3,SPLIT)),
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
    const raw_text = token(prec(1,repeat1(choice(
        text,
        /\\[^\n]/
    ))))
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
