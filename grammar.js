// Parsing markdown is hard, here's how this parser works:
// (This is meant to implement the Github flavored markdown spec https://github.github.com/gfm/)
//
// A markdown has a double tree structure. On the top level there are blocks, like
// lists, block quotes, paragraphs, ..., then some of these blocks can contain inline
// elements like emphasis, links, backslash escapes, ...
//
// Markdown can not be parsed by a traditional tree-sitter parser, but tree-sitter
// offers to use an external "scanner" (or lexer, see src/scanner.cc) to inject some
// hand-written C code into the parser. This parser tries to use this as little as
// possible, in practice this means using the external scanner to parse:
//
// * All blocks besides paragraphs and lists
//   (list items DO get parsed by the external scanner)
//   For container blocks this is needed because at the start of each line we need
//   to match all open blocks so we need to be able to look back on the parse stack
//   arbitrarily far. Traditional tree-sitter parsers are not able to do this.
//
//   Non container blocks are also parsed in the external scanner since for lazy
//   continuations (which influence block structure) the parser needs to check if
//   the a new block begins on the given line.
//
// * Code spans
//   Code span delimiters have an arbitrary ammount of backticks ('`'), which must
//   match between opening and closing delimiters. Maybe this would be possible to
//   do as an traditional tree-sitter rule, but it would be VERY ugly.
//
// * Emphasis delimiters
//   Parsing of emphasis delimiters depends on the character before and after a run
//   of '*'s or '_'s, so we need more context than tree-sitter rules offer.
//
// I'm also considering just parsing any token with the external scanner since it so
// happens that external parse needs to know about most of them (at least but not
// limited to any newlines, spaces and punctuation). This would not mean using it for
// all parsing, but it would mean not using tree-sitters lexer.
// Als maybe this is just not possible as having 2 lexers gives us some extra
// lookahead :)
//
// Matching is done in 2 stages: First we try to match all open blocks, if we don't
// manage to do so and cannot emit a lazy continuation open all unmatched blocks.
// After that parse the openings of any new blocks. For more information look at the
// external scanner.
//
// TODOs (critical):
// * Implement: html blocks, link reference definitions, emphasis, links, images,
//   autolinks and raw html
//
// TODOs (non critical):
// * Unicode support for whitespace and punctuation characters

// A file with all html entities, should be kept up to date with
// https://html.spec.whatwg.org/multipage/entities.json
const html_entities = require("./html_entities.json");

// Punctuation characters as specified in
// https://github.github.com/gfm/#ascii-punctuation-character
const PUNCTUATION_CHARACTERS = '!-/:-@\\[-`\\{-~';

module.exports = grammar({
    name: 'markdown',

    // TODO: Sort these tokens in some more sensible manner
    externals: $ => [
        // TOKENS FOR BLOCK STRUCTURE:
        // Currently we parse this with the external scanner since there seems to be a bug in tree-sitter
        // with parsing newlines. Also the external parser needs to know about newlines to start matching.
        $._line_ending,
        // Whitespace encountered during matching. TODO: we should be able to do parsing without
        // this which should be nicer.
        $._indentation,
        // Sometimes a indented code block can contain for example 3/4 of a tab. In this case the
        // tab gets consumed by by the continuation of the parent block and we emit one "virtual_space"
        // for every space that should be added to the indented code block.
        // TODO: at the moment indentation just consumes all of the whitespace. Maybe remove indentation
        // and use some other tactic for this. But tabs that are not at the beginning of a line in an
        // indented code block might not behave like you would expect them to at all so maybe we should
        // just give up here
        $.virtual_space,
        // Emited once the external scanner is done with block structure for this line. Needed as
        // tree-sitter expects the parser state to not change if we do not emit a token.
        // TODO: I'm not 100% sure this get's emitted every line, but we should ensure it does at least
        // get emitted if the outer most block can contain inline content.
        $._matching_done,
        // Every block that is not a paragraph and can have multiple lines will start with an opening token
        // like `$._block_quote_start` and close with `$._block_close`
        $._block_close,
        // The exception to this are list items since we need to differentiate between tight and loose
        // lists (see https://github.github.com/gfm/#lists) which we can only do at the END of a list
        // item. If the list item contains empty lines we emit `$._block_close_loose` when it closes
        // else `$._block_close`
        $._block_close_loose,
        // Token encountered if we match an open block. For example a '>' at the beginning of a line
        // if we are in an (already open) block quote.
        $._block_continuation,
        // Lazy continuations can happen if some open blocks did not get matched, but the current leaf
        // block is a paragraph that continues in the next line.
        $._lazy_continuation,
        // Start token for a block quote (https://github.github.com/gfm/#block-quotes)
        $._block_quote_start,
        // Start token for an indented chunk which is part of an indented code block
        // (https://github.github.com/gfm/#indented-chunk)
        $._indented_chunk_start,
        // Markers for the different levels of an ATX heading (https://github.github.com/gfm/#atx-headings)
        // This block does not need a `$._block_close`.
        $.atx_h1_marker,
        $.atx_h2_marker,
        $.atx_h3_marker,
        $.atx_h4_marker,
        $.atx_h5_marker,
        $.atx_h6_marker,
        // Underlines for the 2 different levels of setext headings (https://github.github.com/gfm/#setext-headings)
        // This block does not need a `$._block_close`.
        $._setext_h1_underline,
        $._setext_h2_underline,
        $._setext_h2_underline_or_thematic_break, // TODO: Remove this. We probably don't need it
        // Just a thematic break (https://github.github.com/gfm/#thematic-breaks)
        // This block does not need a `$._block_close`.
        $._thematic_break,
        // The different possiblities for a list marker (https://github.github.com/gfm/#list-marker).
        // Marks the beginning of a list item (https://github.github.com/gfm/#list-items).
        // We need to differentiate between the different markers as lists can only
        // contain list items with the same marker.
        $.list_marker_minus,
        $.list_marker_plus,
        $.list_marker_star,
        $.list_marker_parenthethis,
        $.list_marker_dot,
        // Marks the beginning of a fenced code block (https://github.github.com/gfm/#fenced-code-blocks)
        // TODO: differentiate between code blocks delimited by backticks and tildas so
        // we can impose the right restrictions on info strings. This could get a bit ugly since
        // if the info string is not proper we need to tell the scanner that it should remove the
        // fenced code block from its stack of open blocks
        $._fenced_code_block_start,
        // Bad name. Just a whole blank line without the newline. TODO: rename this
        $._blank_line_start,

        // TOKENS FOR INLINE PARSING
        // Opening and closing delimiters
        // A openging token does not mean the text after has to be a
        // code span if there is no closing token
        $._code_span_start,
        $._code_span_close,

        // Tactic for parsing emphasis:
        // (See https://github.github.com/gfm/#emphasis-and-strong-emphasis)
        // Most of this can actually be done by traditional tree-sitter rules, but we need
        // the help of the external scanner to determine if a marker ('*' or '_')
        // can open / close emphasis.
        // Also I don't yet know about the weird "mod 3" stuff in rule 9

        // We need to tell the parse if the last character was a whitespace (or the
        // beginning of a line) or a punctuation. These tokens never actually get emitted.
        $._last_token_whitespace,
        $._last_token_punctuation,

        // The external parser can then decide if any '*' or '_' can open / close emphasis
        // Open should always be valid, but the external scanner will emit a close if it
        // can to be in line with the spec.
        $._emphasis_open_star,
        $._emphasis_open_underscore,
        $._emphasis_close_star,
        $._emphasis_close_underscore,
    ],
    // I'm not sure this declaration does anything. TODO: Ask someone if it does
    word: $ => $._word,
    precedences: $ => [
        [$.tight_list, $.loose_list],
        [$.setext_heading, $._block],
        [$.indented_code_block, $._block]
    ],
    conflicts: $ => [
        // This can probably solved in other ways
        [$.code_span, $.text],
        [$._code_span_no_newline, $.text],
        // This also maybe, idk
        [$.hard_line_break, $.text]
    ],

    rules: {
        document: $ => seq(repeat(choice($._block_continuation, $._indentation)), optional($._matching_done), optional($._last_token_whitespace), repeat($._block)),

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
        paragraph: $ => prec.right(seq($._inline_no_lazy_continuation, repeat($._inline))),
        indented_code_block: $ => prec.right(seq($._indented_chunk, repeat(choice($._indented_chunk, alias($._blank_line, $.line_break))))),
        _indented_chunk: $ => prec.right(seq($._indented_chunk_start, repeat(choice($.virtual_space, $.text, alias($._newline, $.line_break))), $._block_close)),
        block_quote: $ => seq($._block_quote_start, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close),
        atx_heading: $ => prec(1, seq(
            choice($.atx_h1_marker, $.atx_h2_marker, $.atx_h3_marker, $.atx_h4_marker, $.atx_h5_marker, $.atx_h6_marker),
            optional(alias($._inline_no_newline, $.heading_content)),
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

        _list_item_plus_tight: $ => seq($.list_marker_plus, optional($._indentation), ($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close),
        _list_item_minus_tight: $ => seq($.list_marker_minus, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close),
        _list_item_star_tight: $ => seq($.list_marker_star, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close),
        _list_item_dot_tight: $ => seq($.list_marker_dot, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close),
        _list_item_parenthethis_tight: $ => seq($.list_marker_parenthethis, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close),

        _list_item_plus_loose: $ => seq($.list_marker_plus, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close_loose),
        _list_item_minus_loose: $ => seq($.list_marker_minus, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close_loose),
        _list_item_star_loose: $ => seq($.list_marker_star, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close_loose),
        _list_item_dot_loose: $ => seq($.list_marker_dot, optional($._indentation), optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close_loose),
        _list_item_parenthethis_loose: $ => seq($.list_marker_parenthethis, optional($._matching_done), optional($._last_token_whitespace), repeat($._block), $._block_close_loose),

        fenced_code_block: $ => seq(
            $._fenced_code_block_start,
            optional($.info_string),
            $._newline,
            optional($.code_fence_content),
            $._block_close,
            $._newline
        ),
        code_fence_content: $ => repeat1(choice(alias($._newline, $.line_break), $.text)),
        info_string: $ => seq(repeat1(choice($._word, $._punctuation, $._whitespace)), $._newline),

        _inline_no_lazy_continuation: $ => choice(
            alias($._newline, $.soft_line_break),
            $.backslash_escape,
            $.hard_line_break,
            $.text,
            $.entity_reference,
            $.numeric_character_reference,
            $.code_span,
            $._unclosed_emphasis,
            $.emphasis,
            // $.inline_link,
            // $.reference_link,
            // $.image,
            // $.autolink,
        ),
        _inline: $ => prec.right(repeat1(choice(
            $._lazy_continuation,
            alias($._newline, $.soft_line_break),
            $.backslash_escape,
            $.hard_line_break,
            $.text,
            $.entity_reference,
            $.numeric_character_reference,
            $.code_span,
            $._unclosed_emphasis,
            $.emphasis,
            // $.inline_link,
            // $.reference_link,
            // $.image,
            // $.autolink,
        ))),
        _inline_no_newline: $ => prec.right(repeat1(choice(
            $.backslash_escape,
            $.text,
            $.entity_reference,
            $.numeric_character_reference,
            alias($._code_span_no_newline, $.code_span),
            $._unclosed_emphasis_no_newline,
            alias($._emphasis_no_newline, $.emphasis),
            // $.inline_link,
            // $.reference_link,
            // $.image,
            // $.autolink,
        ))),
        backslash_escape: $ => new RegExp('\\\\[' + PUNCTUATION_CHARACTERS + ']'),
        hard_line_break: $ => prec.dynamic(1, seq('\\', $._newline, $._matching_done)),
        text: $ => prec.right(repeat1(choice($._word, $._punctuation, $._whitespace, $._code_span_start, '\\'))),
        entity_reference: $ => html_entity_regex(),
        numeric_character_reference: $ => /&#([0-9]{1,7}|[xX][0-9a-fA-F]{1,6});/,
        code_span: $ => prec.dynamic(1, seq($._code_span_start, repeat(choice($._word, alias($._newline, $.line_break), $._punctuation, $._whitespace)), $._code_span_close)), // TODO
        _code_span_no_newline: $ => prec.dynamic(1, seq($._code_span_start, repeat(choice($._word, $._punctuation, $._whitespace)), $._code_span_close)),

        _unclosed_emphasis: $ => seq($._emphasis_open_star, $._inline),
        emphasis: $ => prec(1, seq($._unclosed_emphasis, $._emphasis_close_star)),
        _unclosed_emphasis_no_newline: $ => seq($._emphasis_open_star, $._inline_no_newline),
        _emphasis_no_newline: $ => prec(1, seq($._unclosed_emphasis_no_newline, $._emphasis_close_star)),

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

        _whitespace: $ => seq(/[ \t]+/, optional($._last_token_whitespace)),
        _word: $ => new RegExp('[^' + PUNCTUATION_CHARACTERS + ' \\t\\n\\r]+'),
        _punctuation: $ => seq(new RegExp('[' + PUNCTUATION_CHARACTERS + ']'), optional($._last_token_punctuation)),
        _newline: $ => prec.right(seq(
            $._line_ending,
            repeat(choice($._block_continuation, $._indentation)),
            optional($._matching_done),
            optional($._last_token_whitespace)
        )),
    },
});

function html_entity_regex() {
    let s = '&(';
    s += Object.keys(html_entities).map(name => name.substring(1, name.length - 1)).join('|');
    s += ');';
    return new RegExp(s);
}
