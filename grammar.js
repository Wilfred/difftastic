const CHARSET = [ '0-9', '@', 'A-Z', '_', 'a-z' ];

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

    inline: $ => [
        $._target_pattern,
        $._order_only_prerequisites,
    ],

    extras: $ => [ /[\t\r\n ]+/, $._split, $.comment ],

    conflicts: $ => [
        [$.recipe]
    ],

    rules: {

        makefile: $ => repeat($._directive),

        _directive: $ => choice(
            $.rule
        ),

        // Variables
        _variable: $ => choice(
            $.automatic_variable,
        ),

        automatic_variable: $ => choice(
            seq(
                '$',
                choice(
                    ...[
                        '@', '%', '<', '?', '^',
                        '?', '^', '+', '|', '*'
                    ].map(c => token.immediate(c))
                ),
            ),
            seq(
                '$',
                token.immediate('('),
                choice(
                    ...[
                        '@D', '@F',
                        '*D', '*F',
                        '%D', '%F',
                        '<D', '<F',
                        '^D', '^F',
                        '+D', '+F',
                        '?D', '?F',
                    ].map(c => token(c))
                ),
                ')'
            ),
        ),

        // Rules
        rule: $ => seq(
            $.targets,
            choice(':', '&:', '::'),
            optional($._target_pattern),
            optional($.prerequisites),
            optional($._order_only_prerequisites),
            optional($.recipe),
            $._terminator,
        ),

        _target_pattern: $ => seq(
            field('target_pattern', $.pattern),
            ':',
        ),

        _order_only_prerequisites: $ => seq(
            '|',
            alias($.prerequisites,$.order_only_prerequisites)
        ),

        targets: $ => choice(
            $.builtin_target,
            repeat1($._name),
        ),

        builtin_target: $ => choice(...BUILTIN_TARGETS),

        prerequisites: $ => repeat1($._name),

        recipe: $ => seq(
            // the first recipe line may be attached to the
            // target-and-prerequisites line with a semicolon
            // in between
            choice(';', seq($._terminator, $._recipeprefix)),
            // empty recipe is allowed
            optional(seq(
                $.recipe_line,
                repeat(seq(
                    $._terminator,
                    $._recipeprefix,
                    $.recipe_line
                )),
            ))
        ),

        recipe_line: $ => seq(
            optional(choice('@','-')),
            $.shell_text,
            // splited recipe lines may start with .RECIPEPREFIX
            // that shall not be part of the shell_code
            repeat(seq(
                $._split,
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

        // Tokens
        _terminator: $ => '\n',

        _split: $ => '\\\n',

        _recipeprefix: $ => '\t',

        comment: $ => token(prec(-1,/#.*/)),

        _name: $ => choice(
            $.name,
            $.filename,
            $.pattern
        ),

        name: $ => tokenize(...CHARSET),

        filename: $ => tokenize(
            ...CHARSET.concat(['\\.', '\\*', '\\?', '/'])
        ),

        pattern: $ => tokenize(
            ...CHARSET.concat(['\\.', '\\*', '\\?', '%', '/'])
        ),

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

function sepBy1(sep, rule) {
    return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
    return optional(sepBy1(sep, rule))
}


