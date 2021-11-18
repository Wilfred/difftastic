
const html_entities = require("./html_entities.json");
const PUNCTUATION_CHARACTERS = '!-/:-@\\[-`\\{-~';

module.exports = grammar({
    name: 'markdown',

    // all block delimiters (except paragraphs) are handled by external scanner:
    extras: $ => [
        /[ \t]+/,
        $._indentation,
        $._block_continuation,
        $._matching_done,
    ],
    word: $ => $._word,
    externals: $ => [
        $._newline,
        $._indentation,
        $.virtual_space,
        $._matching_done,
        $._block_close,
        $._block_close_loose,
        $._block_continuation,
        $._lazy_continuation,
        $._block_quote_start,
        $._indented_chunk_start,
        $.atx_h1_marker,
        $.atx_h2_marker,
        $.atx_h3_marker,
        $.atx_h4_marker,
        $.atx_h5_marker,
        $.atx_h6_marker,
        $._setext_h1_underline,
        $._setext_h2_underline,
        $._setext_h2_underline_or_thematic_break,
        $._thematic_break,
        $.list_marker_minus,
        $.list_marker_plus,
        $.list_marker_star,
        $.list_marker_parenthethis,
        $.list_marker_dot,
        $._fenced_code_block_start,
        $._blank_line_start,
        $._code_span_start,
        $._code_span_close,
    ],
    precedences: $ => [
        [$.tight_list, $.loose_list],
        [$.setext_heading, $._block],
        [$.indented_code_block, $._block]
    ],
    conflicts: $ => [
        [$.code_span, $.text],
        [$.hard_line_break, $.text]
    ],

    rules: {
        document: $ => repeat($._block),

        _block: $ => choice(
            $.atx_heading,
            $.setext_heading,
            $.paragraph,
            $.block_quote,
            $.indented_code_block,
            $.thematic_break,
            $.tight_list,
            $.loose_list,
            $.fenced_code_block,
            $._blank_line,
        ),

        _blank_line: $ => seq($._blank_line_start, $._newline),
        paragraph: $ => prec.right(seq($._inline, repeat(choice(
            $._lazy_continuation,
            $._inline,
            alias($._newline, $.soft_line_break),
        )))),
        indented_code_block: $ => prec.right(seq($._indented_chunk, repeat(choice($._indented_chunk, alias($._blank_line, $.line_break))))),
        _indented_chunk: $ => prec.right(seq($._indented_chunk_start, repeat(choice($.virtual_space, $.text, alias($._newline, $.line_break))), $._block_close)),
        block_quote: $ => seq($._block_quote_start, repeat($._block), $._block_close),
        atx_heading: $ => prec(1, seq(
            choice($.atx_h1_marker, $.atx_h2_marker, $.atx_h3_marker, $.atx_h4_marker, $.atx_h5_marker, $.atx_h6_marker),
            optional(alias($._inline, $.heading_content)),
            $._newline
        )),
        setext_heading: $ => prec.dynamic(2, seq(
            alias($.paragraph, $.heading_content),
            choice($.setext_h1_underline, $.setext_h2_underline),
            $._newline
        )),
        setext_h1_underline: $ => $._setext_h1_underline,
        setext_h2_underline: $ => choice($._setext_h2_underline, $._setext_h2_underline_or_thematic_break),
        thematic_break: $ => seq(choice($._setext_h2_underline_or_thematic_break, $._thematic_break), $._newline),

        tight_list: $ => prec.right(choice(
            repeat1(prec(1, alias($._list_item_plus_tight, $.list_item))),
            repeat1(prec(1, alias($._list_item_minus_tight, $.list_item))),
            repeat1(prec(1, alias($._list_item_star_tight, $.list_item))),
            repeat1(prec(1, alias($._list_item_dot_tight, $.list_item))),
            repeat1(prec(1, alias($._list_item_parenthethis_tight, $.list_item))),
        )),
        loose_list: $ => prec.right(choice(
            repeat1(alias(choice($._list_item_plus_tight, $._list_item_plus_loose), $.list_item)),
            repeat1(alias(choice($._list_item_minus_tight, $._list_item_minus_loose), $.list_item)),
            repeat1(alias(choice($._list_item_star_tight, $._list_item_star_loose), $.list_item)),
            repeat1(alias(choice($._list_item_dot_tight, $._list_item_dot_loose), $.list_item)),
            repeat1(alias(choice($._list_item_parenthethis_tight, $._list_item_parenthethis_loose), $.list_item)),
        )),

        _list_item_plus_tight: $ => seq($.list_marker_plus, repeat($._block), $._block_close),
        _list_item_minus_tight: $ => seq($.list_marker_minus, repeat($._block), $._block_close),
        _list_item_star_tight: $ => seq($.list_marker_star, repeat($._block), $._block_close),
        _list_item_dot_tight: $ => seq($.list_marker_dot, repeat($._block), $._block_close),
        _list_item_parenthethis_tight: $ => seq($.list_marker_parenthethis, repeat($._block), $._block_close),

        _list_item_plus_loose: $ => seq($.list_marker_plus, repeat($._block), $._block_close_loose),
        _list_item_minus_loose: $ => seq($.list_marker_minus, repeat($._block), $._block_close_loose),
        _list_item_star_loose: $ => seq($.list_marker_star, repeat($._block), $._block_close_loose),
        _list_item_dot_loose: $ => seq($.list_marker_dot, repeat($._block), $._block_close_loose),
        _list_item_parenthethis_loose: $ => seq($.list_marker_parenthethis, repeat($._block), $._block_close_loose),

        fenced_code_block: $ => seq(
            $._fenced_code_block_start,
            optional($.info_string),
            $._newline,
            optional($.code_fence_content),
            $._block_close,
            $._newline
        ),
        code_fence_content: $ => repeat1(choice(alias($._newline, $.line_break), $.text)),
        info_string: $ => seq(repeat1($._word), $._newline),

        _inline: $ => prec.right(repeat1(choice(
            $.backslash_escape,
            $.hard_line_break,
            $.text,
            $.entity_reference,
            $.numeric_character_reference,
            $.code_span,
            // $.inline_link,
            // $.reference_link,
            // $.image,
            // $.autolink,
        ))),
        backslash_escape: $ => new RegExp('\\\\[' + PUNCTUATION_CHARACTERS + ']'),
        hard_line_break: $ => prec.dynamic(1, seq('\\', $._newline, $._matching_done)),
        text: $ => prec.right(repeat1(choice($._word, $._code_span_start, '\\'))),
        entity_reference: $ => html_entity_regex(),
        numeric_character_reference: $ => /&#([0-9]{1,7}|[xX][0-9a-fA-F]{1,6});/,
        code_span: $ => prec.dynamic(1, seq($._code_span_start, repeat($._word), $._code_span_close)), // TODO

        inline_link: $ => seq($.link_text, '(', optional(seq($.link_destination, optional(seq($._whitespace, $.link_title))))),
        reference_link: $ => prec.right(seq($.link_text, optional(alias($.link_text, $.link_label)))),
        image: $ => seq('!', choice($.inline_link, $.reference_link)),
        link_text: $ => seq('[', repeat($._inline), ']'),
        link_destination: $ => choice(
            /<[^\r\n<>]*>/,
            /[^ \t\r\n]+/,
        ),
        link_title: $ => choice(
            /"[^"]*"/,
            /'[^']*'/,
            /\([^\(\)]*\)/,
        ),

        autolink: $ => seq(/<[a-zA-Z][a-zA-Z0-9+\.\-]{1,31}:[^ \t\r\n<>]+>/),

        _whitespace: $ => /[ \t]+/,
        _word: $ => new RegExp('[^' + PUNCTUATION_CHARACTERS + ' \\t\\n\\r]+|[' + PUNCTUATION_CHARACTERS + ']'),
    },
});

function html_entity_regex() {
    let s = '&(';
    s += Object.keys(html_entities).map(name => name.substring(1, name.length - 1)).join('|');
    s += ');';
    return new RegExp(s);
}
