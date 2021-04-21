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

        $._name
    ],

    extras: $ => [ WS, NL, SPLIT, $.comment ],

    conflicts: $ => [
        [$.recipe],
    ],

    rules: {

        makefile: $ => repeat($._thing),

        _thing: $ => choice(
            $.rule,
            //$._directive,
        ),

        // Rules
        rule: $ => seq(
            $._targets,
            choice(':', '&:', '::'),
            // TODO
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
                $.list,
                $.targets
            ),
        ),

        builtin_target: $ => choice(...BUILTIN_TARGETS),

        _prerequisites: $ => alias(
            $.list,
            $.prerequisites
        ),

        target_pattern: $ => $.filename,

        _order_only_prerequisites: $ => field('order_only',alias(
            $.list,
            $.prerequisites
        )),

        list: $ => seq(
            $._filename,
            repeat(seq(
                choice(WS,SPLIT),
                $._filename
            )),
            optional(WS)
        ),

        _filename: $ => prec(1,choice(
            $.filename,
            alias(choice('*','%'),$.filename),
            $._name
        )),

        // Variables
        _variable: $ => choice(
            $.variable_reference,
            $.automatic_variable,
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
                choice(...AUTOMATIC_VARS.map(c => token.immediate(c))),
                choice(
                    token.immediate('D'),
                    token.immediate('F')
                ),
                ')'
            ),
        ),
        // }}}

        // Names
        _primary: $ => choice(
            $._variable,
            $._word
        ),

        filename: $ => seq(
            repeat(choice('*','?','.','%','/','./','../','~')),
            $._primary,
            repeat(seq(
                repeat1(choice('*','?','.','%','/','./','../')),
                $._primary,
            )),
            repeat(choice('*','?','.','%','/','./','../')),
        ),

        // Tokens
        _word: $ => tokenize(...CHARSET),

        _name: $ => alias($._word, $.name),

        comment: $ => token(prec(-1,/#.*/)),

        _recipeprefix: $ => '\t',

        _shell_text: $ => token(repeat1(choice(
            noneOf(...['\\$', '\\n','\\']),
            /\\[^\n]/
        ))),

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
