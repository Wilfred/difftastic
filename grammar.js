const CHARSET = [ '0-9', '@', 'A-Z', '_', 'a-z' ];

const NL = repeat1(/[\r\n]/);
const WS = repeat(/[\t ]/);

const AUTOMATIC_VARS = [ '@', '%', '<', '?', '^', '+', '/', '*' ];

module.exports = grammar({
    name: 'make',

    inline: $ => [
        $._name,
        $._primary,

        $._targets,
        $._prerequisites,
        $._order_only_prerequisites,
    ],

    extras: $ => [ $._split, $.comment ],

    conflicts: $ => [
        [$.recipe],
        [$._names_and_paths],
        [$._names_and_paths, $.target_pattern],
    ],

    rules: {

        makefile: $ => repeat($._directive),

        _directive: $ => choice(
            $.rule,
            $.static_pattern_rule,
            $._blank_line
        ),

        _blank_line: $ => prec(-1,seq(WS, NL)),

        // Variables
        _variable: $ => choice(
            $.automatic_variable,
        ),

        automatic_variable: $ => choice(
            seq('$', choice(...AUTOMATIC_VARS)),
            seq(
                '$',
                '(',
                WS,
                choice(...AUTOMATIC_VARS),
                choice('D','F'),
                WS,
                ')'
            ),
        ),

        // Rules
        rule: $ => prec.right(seq(
            WS,
            $._targets, WS,
            choice(':', '&:', '::'), WS,
            optional(seq($._prerequisites, WS)),
            optional(seq($._order_only_prerequisites, WS)),
            optional($.recipe),
            NL,
        )),


        static_pattern_rule: $ => prec.right(seq(
            WS,
            $._targets, WS,
            ':', WS,
            $.target_pattern, WS,
            ':', WS,
            $._prerequisites, WS,
            optional($.recipe),
            NL
        )),

        _targets: $ => choice(
            alias($._names_and_paths, $.targets),
            $.builtin_target
        ),

        _order_only_prerequisites: $ => seq(
            '|', WS,
            alias(
                $._names_and_paths,
                $.order_only_prerequisites
            )
        ),

        target_pattern: $ => $._name,

        builtin_target: $ => prec(1,seq(
            '.', alias($.word, $.name)
        )),

        _prerequisites: $ => alias(
            $._names_and_paths,
            $.prerequisites
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

        // Names
        _name: $ => choice(
            alias($._filename,$.name),
            alias($._wildcard,$.name),
            alias($._pattern,$.name),
            alias($._primary,$.name),
        ),

        _primary: $ => choice(
            $.word,
            $._variable
        ),

        _names_and_paths: $ => seq(
            choice($._name, $.path),
            repeat(prec.right(
                seq(WS, choice($._name, $.path))
            ))
        ),

        word: $ => tokenize(...CHARSET),

        path: $ => delimeter(
            ['\/','./','../'],
            $._name
        ),

        _filename: $ => delimeter(
            ['.'], 
            choice(
                $._pattern,
                $._wildcard,
                $._primary
            )
        ),

        _pattern: $ => delimeter(
            ['%'], 
            choice(
                $._wildcard,
                $._primary
            )
        ),

        _wildcard: $ => delimeter(['*','?'], $._primary),

        // Tokens
        _split: $ => '\\\n',

        _recipeprefix: $ => '\t',

        comment: $ => token(prec(-1,/#.*/)),

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

function delimeter(charset, primary) {
    return choice(
                prec.right(seq(
                    repeat1(prec.left(seq(
                        primary,
                        choice(...charset),
                    ))),
                    optional(primary)
                )),
                prec.right(seq(
                    repeat1(prec.right(seq(
                        choice(...charset),
                        primary
                    ))),
                    optional(choice(...charset))
                )),
                prec(-99,choice(...charset))
    )
}

