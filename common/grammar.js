exports.EXTENSION_DEFAULT = !process.env.NO_DEFAULT_EXTENSIONS;
exports.EXTENSION_GFM = process.env.EXTENSION_GFM || exports.EXTENSION_DEFAULT;
exports.EXTENSION_TASK_LIST = process.env.EXTENSION_TASK_LIST || exports.EXTENSION_GFM;
exports.EXTENSION_MINUS_METADATA = process.env.EXTENSION_MINUS_METADATA || exports.EXTENSION_DEFAULT;
exports.EXTENSION_PLUS_METADATA = process.env.EXTENSION_PLUS_METADATA || exports.EXTENSION_DEFAULT;

const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~';
const PUNCTUATION_CHARACTERS_ARRAY = [
    '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
    '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

const PRECEDENCE_LEVEL_LINK = 10;

exports.PRECEDENCE_LEVEL_LINK = PRECEDENCE_LEVEL_LINK;

exports.PUNCTUATION_CHARACTERS_REGEX = PUNCTUATION_CHARACTERS_REGEX;

exports.rules = {

    // A backslash escape. This can often be part of different nodes like link labels
    //
    // https://github.github.com/gfm/#backslash-escapes
    backslash_escape: $ => new RegExp('\\\\[' + PUNCTUATION_CHARACTERS_REGEX + ']'),

    // HTML entity and numeric character references.
    //
    // The regex for entity references are build from the html_entities.json file.
    //
    // https://github.github.com/gfm/#entity-and-numeric-character-references
    entity_reference: $ => html_entity_regex(),
    numeric_character_reference: $ => /&#([0-9]{1,7}|[xX][0-9a-fA-F]{1,6});/,

    link_label: $ => seq('[', repeat1(choice(
        $._text_inline_no_link,
        $.backslash_escape,
        $.entity_reference,
        $.numeric_character_reference,
        $._soft_line_break
    )), ']'),

    link_destination: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, choice(
        seq('<', repeat(choice($._text_no_angle, $.backslash_escape, $.entity_reference, $.numeric_character_reference)), '>'),
        seq(
            choice( // first character is not a '<'
                $._word,
                punctuation_without($, ['<', '(', ')']),
                $.backslash_escape,
                $.entity_reference,
                $.numeric_character_reference,
                $._link_destination_parenthesis
            ),
            repeat(choice(
                $._word,
                punctuation_without($, ['(', ')']),
                $.backslash_escape,
                $.entity_reference,
                $.numeric_character_reference,
                $._link_destination_parenthesis
            )),
        )
    )),
    _link_destination_parenthesis: $ => seq('(', repeat(choice($._word, $.backslash_escape, $.entity_reference, $.numeric_character_reference, $._link_destination_parenthesis)), ')'),
    _text_no_angle: $ => choice($._word, punctuation_without($, ['<', '>']), $._whitespace),
    link_title: $ => choice(
        seq('"', repeat(choice(
            $._word,
            punctuation_without($, ['"']),
            $._whitespace,
            $.backslash_escape,
            $.entity_reference,
            $.numeric_character_reference,
            seq($._soft_line_break, optional(seq($._soft_line_break, $._trigger_error)))
        )), '"'),
        seq("'", repeat(choice(
            $._word,
            punctuation_without($, ["'"]),
            $._whitespace,
            $.backslash_escape,
            $.entity_reference,
            $.numeric_character_reference,
            seq($._soft_line_break, optional(seq($._soft_line_break, $._trigger_error)))
        )), "'"),
        seq('(', repeat(choice(
            $._word,
            punctuation_without($, ['(', ')']),
            $._whitespace,
            $.backslash_escape,
            $.entity_reference,
            $.numeric_character_reference,
            seq($._soft_line_break, optional(seq($._soft_line_break, $._trigger_error)))
        )), ')'),
    ),

    _newline_token: $ => /\n|\r\n?/,
};

// Returns a rule that matches all characters that count as punctuation inside markdown, besides
// a list of excluded punctuation characters. Calling this function with a empty list as the second
// argument returns a rule that matches all punctuation.
function punctuation_without($, chars) {
    return seq(choice(...PUNCTUATION_CHARACTERS_ARRAY.filter(c => !chars.includes(c))), optional($._last_token_punctuation));
}

exports.punctuation_without = punctuation_without;

// Constructs a regex that matches all html entity references.
function html_entity_regex() {
    // A file with all html entities, should be kept up to date with
    // https://html.spec.whatwg.org/multipage/entities.json
    let html_entities = require("./html_entities.json");
    let s = '&(';
    s += Object.keys(html_entities).map(name => name.substring(1, name.length - 1)).join('|');
    s += ');';
    return new RegExp(s);
}
