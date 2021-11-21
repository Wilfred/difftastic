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
const HTML_OPEN_TAG = /<[a-zA-Z][a-zA-Z0-9\-]*([ \t]+[a-zA-Z_:][a-zA-Z0-9_\.:\-]*[ \t]*=[ \t]*([^ \t\r\n"'=<>`]+|'[^'\r\n]*'|"[^"\r\n]*"))*[ \t]*\/?>/;
const HTML_CLOSING_TAG = /<\/[a-zA-Z][a-zA-Z0-9\-]*[ \t]*>/;

module.exports = grammar({
    name: 'markdown',

    // TODO: Sort these tokens in some more sensible manner
    externals: $ => [
        $._dummy,
        // TOKENS FOR BLOCK STRUCTURE:
        // Currently we parse this with the external scanner since there seems to be a bug in tree-sitter
        // with parsing newlines. Also the external parser needs to know about newlines to start matching.
        $._line_ending,
        $._lazy_continuation,
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
        // We need to differentiate between backtick and tilde code blocks since info strings for backtick
        // code blocks are not allowed to contain backticks.
        $._fenced_code_block_start_backtick,
        // This token does not actually contain the backticks for reasons to do with lexer->mark_end
        $._fenced_code_block_start_tilde,
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
        $._open_block,
        $._close_block,
    ],
    // I'm not sure this declaration does anything. TODO: Ask someone if it does
    word: $ => $._word,
    precedences: $ => [
        [$._inline_element, $.paragraph],
        [$.tight_list, $.loose_list],
        [$.setext_heading, $._block],
        [$.indented_code_block, $._block]
    ],
    conflicts: $ => [
        [$._lazy_newline, $._soft_line_break],
        [$.paragraph, $._soft_line_break],
        // This can probably solved in other ways
        [$.code_span, $._text],
        [$._code_span_no_newline, $._text],
        // This also maybe, idk
        [$.hard_line_break, $._text]
    ],

    rules: {
        document: $ => seq(optional($._ignore_matching_tokens), repeat($._block)),

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
            $.html_block,
        ),

        _blank_line: $ => seq($._blank_line_start, $._newline),
        paragraph: $ => seq($._inline, choice(prec.dynamic(1, $._soft_line_break), $._lazy_newline)),
        indented_code_block: $ => prec.right(seq($._indented_chunk, repeat(choice($._indented_chunk, alias($._blank_line, $.line_break))))),
        _indented_chunk: $ => prec.right(seq($._indented_chunk_start, repeat(choice($._text, alias($._newline, $.line_break))), $._block_close, optional($._ignore_matching_tokens))),
        block_quote: $ => seq($._block_quote_start, optional($._ignore_matching_tokens), repeat($._block), $._block_close, optional($._ignore_matching_tokens)),
        atx_heading: $ => prec(1, seq(
            choice($.atx_h1_marker, $.atx_h2_marker, $.atx_h3_marker, $.atx_h4_marker, $.atx_h5_marker, $.atx_h6_marker),
            optional(alias($._inline_no_newline, $.heading_content)),
            $._newline
        )),
        setext_heading: $ => prec.dynamic(1, seq(
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

        _list_item_plus_tight: $ => seq($.list_marker_plus, optional($._ignore_matching_tokens), repeat($._block), $._block_close, optional($._ignore_matching_tokens)),
        _list_item_minus_tight: $ => seq($.list_marker_minus, optional($._ignore_matching_tokens), repeat($._block), $._block_close, optional($._ignore_matching_tokens)),
        _list_item_star_tight: $ => seq($.list_marker_star, optional($._ignore_matching_tokens), repeat($._block), $._block_close, optional($._ignore_matching_tokens)),
        _list_item_dot_tight: $ => seq($.list_marker_dot, optional($._ignore_matching_tokens), repeat($._block), $._block_close, optional($._ignore_matching_tokens)),
        _list_item_parenthethis_tight: $ => seq($.list_marker_parenthethis, optional($._ignore_matching_tokens), repeat($._block), $._block_close, optional($._ignore_matching_tokens)),

        _list_item_plus_loose: $ => seq($.list_marker_plus, optional($._ignore_matching_tokens), repeat($._block), $._block_close_loose, optional($._ignore_matching_tokens)),
        _list_item_minus_loose: $ => seq($.list_marker_minus, optional($._ignore_matching_tokens), repeat($._block), $._block_close_loose, optional($._ignore_matching_tokens)),
        _list_item_star_loose: $ => seq($.list_marker_star, optional($._ignore_matching_tokens), repeat($._block), $._block_close_loose, optional($._ignore_matching_tokens)),
        _list_item_dot_loose: $ => seq($.list_marker_dot, optional($._ignore_matching_tokens), repeat($._block), $._block_close_loose, optional($._ignore_matching_tokens)),
        _list_item_parenthethis_loose: $ => seq($.list_marker_parenthethis, optional($._ignore_matching_tokens), repeat($._block), $._block_close_loose, optional($._ignore_matching_tokens)),

        fenced_code_block: $ => prec.right(seq(
            choice(
                seq($._fenced_code_block_start_backtick),
                $._fenced_code_block_start_tilde
            ),
            optional($.info_string),
            $._newline,
            optional($.code_fence_content),
            $._block_close,
            optional($._newline)
        )),
        code_fence_content: $ => repeat1(choice(alias($._newline, $.line_break), $._text)),
        info_string: $ => repeat1($._text),

        html_block: $ => seq(optional($._whitespace), choice(
            build_html_block($, new RegExp('<' + regex_case_insensitive_list(['script', 'style', 'pre']) + '([\\r\\n]|[ \\t>][^<\\r\\n]*(\\n|\\r\\n?)?)'), new RegExp('</' + regex_case_insensitive_list(['script', 'style', 'pre']) + '>')),
            build_html_block($, '<!--', '-->'),
            build_html_block($, '<?', '?>'),
            build_html_block($, /<![A-Z]/, '>'),
            build_html_block($, '<![CDATA[', ']]>'),
            build_html_block(
                $,
                new RegExp('</?' + regex_case_insensitive_list(['address', 'article', 'aside', 'base', 'basefont', 'blockquote', 'body', 'caption', 'center', 'col', 'colgroup', 'dd', 'details', 'dialog', 'dir', 'div', 'dl', 'dt', 'fieldset', 'figcaption', 'figure', 'footer', 'form', 'frame', 'frameset', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'head', 'header', 'hr', 'html', 'iframe', 'legend', 'li', 'link', 'main', 'menu', 'menuitem', 'nav', 'noframes', 'ol', 'optgroup', 'option', 'p', 'param', 'section', 'source', 'summary', 'table', 'tbody', 'td', 'tfoot', 'th', 'thead', 'title', 'tr', 'track', 'ul']) + '([ \\t>]|/>)'),
                seq($._newline, $._blank_line)
            ),
            build_html_block(
                $,
                choice($._open_tag_html_block, $._closing_tag_html_block),
                seq($._newline, $._blank_line)
            ),
            build_html_block_after_newline(
                $,
                choice($._open_tag_html_block_newline, $._closing_tag_html_block_newline),
            ),
            build_html_block_after_newline(
                $,
                new RegExp('</?' + regex_case_insensitive_list(['address', 'article', 'aside', 'base', 'basefont', 'blockquote', 'body', 'caption', 'center', 'col', 'colgroup', 'dd', 'details', 'dialog', 'dir', 'div', 'dl', 'dt', 'fieldset', 'figcaption', 'figure', 'footer', 'form', 'frame', 'frameset', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'head', 'header', 'hr', 'html', 'iframe', 'legend', 'li', 'link', 'main', 'menu', 'menuitem', 'nav', 'noframes', 'ol', 'optgroup', 'option', 'p', 'param', 'section', 'source', 'summary', 'table', 'tbody', 'td', 'tfoot', 'th', 'thead', 'title', 'tr', 'track', 'ul']) + '(\\n|\\r\\n?)'),
            ),
        )),
        // tag name not pre script or style
        _open_tag_html_block: $ => new RegExp(HTML_OPEN_TAG.source + '[ \\t]'),
        _open_tag_html_block_newline: $ => new RegExp(HTML_OPEN_TAG.source + '(\n|\r\n?)'),
        _closing_tag_html_block: $ => new RegExp(HTML_CLOSING_TAG.source + '[ \\t]'),
        _closing_tag_html_block_newline: $ => new RegExp(HTML_CLOSING_TAG.source + '(\n|\r\n?)'),

        _inline_element: $ => choice(
            prec.dynamic(2, alias($._lazy_newline, $.soft_line_break)),
            alias($._soft_line_break, $.soft_line_break),
            $.backslash_escape,
            $.hard_line_break,
            $._text,
            $.entity_reference,
            $.numeric_character_reference,
            $.code_span,
            $._unclosed_emphasis_star,
            alias($._emphasis_star, $.emphasis),
            $._unclosed_strong_emphasis_star,
            alias($._strong_emphasis_star, $.strong_emphasis),
            $._unclosed_emphasis_underscore,
            alias($._emphasis_underscore, $.emphasis),
            $._unclosed_strong_emphasis_underscore,
            alias($._strong_emphasis_underscore, $.strong_emphasis),
            $.html_tag,
        ),
        _inline: $ => repeat1(choice(
            $._inline_element,
        )),
        _inline_no_newline: $ => prec.right(repeat1(choice(
            $.backslash_escape,
            $._text,
            $.entity_reference,
            $.numeric_character_reference,
            alias($._code_span_no_newline, $.code_span),
            $._unclosed_emphasis_star_no_newline,
            alias($._emphasis_star_no_newline, $.emphasis),
            $._unclosed_strong_emphasis_star_no_newline,
            alias($._strong_emphasis_star_no_newline, $.strong_emphasis),
            $._unclosed_emphasis_underscore_no_newline,
            alias($._emphasis_underscore_no_newline, $.emphasis),
            $._unclosed_strong_emphasis_underscore_no_newline,
            alias($._strong_emphasis_underscore_no_newline, $.strong_emphasis),
            $.html_tag,
        ))),
        _lazy_newline: $ => seq(
            $._newline,
            repeat(choice($._dummy, $._lazy_continuation)),
            $._lazy_continuation,
        ),
        _soft_line_break: $ => seq($._newline, repeat($._dummy)),

        backslash_escape: $ => new RegExp('\\\\[' + PUNCTUATION_CHARACTERS + ']'),
        hard_line_break: $ => prec.dynamic(1, seq('\\', $._newline)),
        _text: $ => prec.right(repeat1(choice($._word, $._punctuation, $._whitespace, $._code_span_start, '\\'))),
        entity_reference: $ => html_entity_regex(),
        numeric_character_reference: $ => /&#([0-9]{1,7}|[xX][0-9a-fA-F]{1,6});/,
        code_span: $ => prec.dynamic(1, seq($._code_span_start, repeat(choice($._text, $._newline)), $._code_span_close)), // TODO
        _code_span_no_newline: $ => prec.dynamic(1, seq($._code_span_start, repeat($._text), $._code_span_close)),

        _unclosed_emphasis_star: $ => prec.right(seq($._emphasis_open_star, $._inline)),
        _emphasis_star: $ => prec(1, seq($._unclosed_emphasis_star, $._emphasis_close_star)),
        _unclosed_strong_emphasis_star: $ => prec(1, seq($._emphasis_open_star, $._emphasis_star)),
        _strong_emphasis_star: $ => prec(1, seq($._unclosed_strong_emphasis_star, $._emphasis_close_star)),
        _unclosed_emphasis_star_no_newline: $ => seq($._emphasis_open_star, $._inline_no_newline),
        _emphasis_star_no_newline: $ => prec(1, seq($._unclosed_emphasis_star_no_newline, $._emphasis_close_star)),
        _unclosed_strong_emphasis_star_no_newline: $ => prec(1, seq($._emphasis_open_star, $._emphasis_star_no_newline)),
        _strong_emphasis_star_no_newline: $ => prec(1, seq($._unclosed_strong_emphasis_star_no_newline, $._emphasis_close_star)),

        _unclosed_emphasis_underscore: $ => prec.right(seq($._emphasis_open_underscore, $._inline)),
        _emphasis_underscore: $ => prec(1, seq($._unclosed_emphasis_underscore, $._emphasis_close_underscore)),
        _unclosed_strong_emphasis_underscore: $ => prec(1, seq($._emphasis_open_underscore, $._emphasis_underscore)),
        _strong_emphasis_underscore: $ => prec(1, seq($._unclosed_strong_emphasis_underscore, $._emphasis_close_underscore)),
        _unclosed_emphasis_underscore_no_newline: $ => seq($._emphasis_open_underscore, $._inline_no_newline),
        _emphasis_underscore_no_newline: $ => prec(1, seq($._unclosed_emphasis_underscore_no_newline, $._emphasis_close_underscore)),
        _unclosed_strong_emphasis_underscore_no_newline: $ => prec(1, seq($._emphasis_open_underscore, $._emphasis_underscore_no_newline)),
        _strong_emphasis_underscore_no_newline: $ => prec(1, seq($._unclosed_strong_emphasis_underscore_no_newline, $._emphasis_close_underscore)),

        html_tag: $ => choice($._open_tag, $._closing_tag, $._html_comment, $._processing_instruction, $._declaration, $._cdata_section),
        _open_tag: $ => HTML_OPEN_TAG,
        _closing_tag: $ => HTML_CLOSING_TAG,
        _html_comment: $ => /<!--([^\->]|-[^\->])([^\-]|-[^\-])*-->/,
        _processing_instruction: $ => /<\?([^?]|\?[^>])*\?>/,
        _declaration: $ => /<![A-Z]+[ \t][^>]*>/,
        _cdata_section: $ => /<!\[CDATA\[([^\]]|\][^\]]|\]\][^>])*\]\]>/,

        _whitespace: $ => seq(/[ \t]+/, optional($._last_token_whitespace)),
        _word: $ => new RegExp('[^' + PUNCTUATION_CHARACTERS + ' \\t\\n\\r]+'),
        _punctuation: $ => seq(new RegExp('[' + PUNCTUATION_CHARACTERS + ']'), optional($._last_token_punctuation)),
        _newline: $ => prec.right(seq(
            token.immediate(/\n|\r\n?/),
            $._line_ending,
            optional($._ignore_matching_tokens)
        )),
        _ignore_matching_tokens: $ => repeat1(choice($._block_continuation, $._last_token_whitespace)),
    },
});

function html_entity_regex() {
    let s = '&(';
    s += Object.keys(html_entities).map(name => name.substring(1, name.length - 1)).join('|');
    s += ');';
    return new RegExp(s);
}

function build_html_block_after_newline($, open) {
    return seq(
        open,
        $._open_block,
        $._line_ending,
        optional($._ignore_matching_tokens),
        optional(seq($._blank_line, $._close_block)),
        repeat(choice(
            $._whitespace,
            $._word,
            $._punctuation,
            $._newline,
            seq($._newline, $._blank_line, $._close_block),
        )),
        $._block_close,
        optional($._ignore_matching_tokens),
    );
}

function build_html_block($, open, close) {
    return seq(
        open,
        $._open_block,
        repeat(choice(
            $._whitespace,
            $._word,
            $._punctuation,
            $._newline,
            seq(close, $._close_block),
        )),
        $._block_close,
        optional($._ignore_matching_tokens),
    );
}

function regex_case_insensitive_list(ss) {
    return "(" + ss.map(x => regex_case_insensitive(x)).join("|") + ")";
}

function regex_case_insensitive(s) {
    return Array.from(s).map(x => "[" + x + x.toUpperCase() + "]").join("");
}
