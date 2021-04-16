const CHARSET = [ '0-9', '@', 'A-Z', '_', 'a-z' ];

module.exports = grammar({
    name: 'make',

    inline: $ => [],

    extras: $ => [ /[\t\r\n ]+/, $._split, $.comment ],

    conflicts: $ => [
        [$.recipe]
    ],

    rules: {

        makefile: $ => repeat($._directive),

        _directive: $ => choice(
            $.rule
        ),

        // Rules
        rule: $ => seq(
            $.targets,
            choice(':', '&:', '::'),
            optional($.prerequisites),
            optional($.recipe),
            $._terminator,
        ),

        targets: $ => repeat1($._name),

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

        // Tokens
        _terminator: $ => '\n',

        _split: $ => token(seq('\\','\n')),

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

        shell_text: $ => token(repeat1(choice(
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


