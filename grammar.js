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
// * All container blocks (besides list because they are just multiple list items)
//   This is needed because at the start of each line we need to match all open blocks
//   so we need to be able to look back on the parse stack arbitrarily far. Traditional
//   tree-sitter parsers are not able to do this.
//
// * Some leaf blocks
//   The design of this parser has actually changed so that most leaf blocks _could_
//   be parsed by traditional rules, but in the initial version they were not and it
//   would take a lot of time to implement this
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
// Matching is done in 2 stages: First we try to match all open blocks, if we don't
// manage to do so and cannot emit a lazy continuation (since we are not in a paragraph)
// we close all unmatched blocks.
// If we can emit a lazy continuation we still need to split the parser state to check
// that the line does not start with a new block.
//
// A lot of inlines work like this: If we match an opening token, like a '`' or '<!--'
// this could either be text or the start of a new inline. Because of this we have to 
// split the parser state (meaning we purposefully introduce a conflict between
// $._text_inline and the inline).
// This could be error prone as new blocks that start in a potential inline might not
// get matched so we have to be very carefull with dynamic precedence.
//
// Emphasis is not yet implemented but it will be a bit more complicated.
// For example in '*foo *bar*' only 'bar' should be emphasized (see the spec for more info).
// (Links could also have the same problem but I have not yet thought about that)
//
// I implemented the following tactic: Whenever we encounter a delimiter - lets say a '*' -
// and it is possible that this is a closing delimiter, it has to be a closing delimiter.
// If it can only be a opening delimiter we split the parser state as before, but as soon
// as we hit a second opening delimiter (and the previous one has not been closed). We know
// that this second delimiter MUST be part of a complete emphasis, if the first delimiter
// is part of a complete emphasis.

// A file with all html entities, should be kept up to date with
// https://html.spec.whatwg.org/multipage/entities.json
const html_entities = require("./html_entities.json");

// Punctuation characters as specified in
// https://github.github.com/gfm/#ascii-punctuation-character
const PUNCTUATION_CHARACTERS = '!-/:-@\\[-`\\{-~';
const PUNCTUATION_CHARACTERS_ARRAY = ['!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'];


// Regexes for html tags. A html tag for a html block may not be a '<pre', '<script' or
// '<style' tag, so we need to deny these names by making a cracy complex regex. 
// TODO: Inline html should probably not be parsed by a single regex.
const HTML_OPEN_TAG = /<[a-zA-Z][a-zA-Z0-9\-]*([ \t]+[a-zA-Z_:][a-zA-Z0-9_\.:\-]*[ \t]*=[ \t]*([^ \t\r\n"'=<>`]+|'[^'\r\n]*'|"[^"\r\n]*"))*[ \t]*\/?>/;
const HTML_CLOSING_TAG = /<\/[a-zA-Z][a-zA-Z0-9\-]*[ \t]*>/;
const EXCULUSION_ARRAY = ['pre', 'script', 'style', 'address', 'article', 'aside', 'base', 'basefont', 'blockquote', 'body', 'caption', 'center', 'col', 'colgroup', 'dd', 'details', 'dialog', 'dir', 'div', 'dl', 'dt', 'fieldset', 'figcaption', 'figure', 'footer', 'form', 'frame', 'frameset', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'head', 'header', 'hr', 'html', 'iframe', 'legend', 'li', 'link', 'main', 'menu', 'menuitem', 'nav', 'noframes', 'ol', 'optgroup', 'option', 'p', 'param', 'section', 'source', 'summary', 'table', 'tbody', 'td', 'tfoot', 'th', 'thead', 'title', 'tr', 'track', 'ul'];
const HTML_OPEN_TAG_EXCLUDE = '<' + negative_regex(EXCULUSION_ARRAY, '0-9\\-', true) + '([ \\t]+[a-zA-Z_:][a-zA-Z0-9_\\.:\\-]*[ \\t]*=[ \\t]*([^ \\t\\r\\n"\'=<>`]+|\'[^\'\\r\\n]*\'|"[^"\\r\\n]*"))*[ \\t]*/?>';
const HTML_CLOSING_TAG_EXCLUDE = '</' + negative_regex(EXCULUSION_ARRAY, '0-9\\-', true) + '[ \\t]*>';

// !!!
// Notice the call to `add_inline_rules` which generates some additional rules related to parsing
// inline contents in different contexts.
// !!!
module.exports = grammar(add_inline_rules({
    name: 'markdown',

    // TODO: Sort these tokens in some more sensible manner
    externals: $ => [
        // This gets emmited to kill invalid parse branches. Concretely this is used to decide the ending
        // of a paragraph and together with `$._trigger_error` in `$.link_title`.
        $._error,
        // This token is used for handling of newlines in paragraphs to manually trigger a conflict.
        $._split_token,
        // This token does not actually contain the newline, but it will always get emitted by the external
        // scanner if it is valid. Usualy this is the case in `$._newline` after parsing the actual newline
        // characters.
        $._line_ending,
        // This token is used for handling paragraph newlines to signify that this is the parse branch in
        // which we try to continue the paragraph.
        $._soft_line_break_marker,
        // Most blocks that are not paragraphs and can have multiple lines will start with an opening token
        // like `$._block_quote_start` and close with `$._block_close`
        $._block_close,
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
        $.list_marker_parenthesis,
        $.list_marker_dot,
        // Marks the beginning of a fenced code block (https://github.github.com/gfm/#fenced-code-blocks)
        // We need to differentiate between backtick and tilde code blocks since they have different closing
        // tokens.
        $._fenced_code_block_start_backtick,
        $._fenced_code_block_start_tilde,
        // Closing backticks or tildas for a fenced code block. They are used to trigger a `$._close_block`
        // which in turn will trigger a `$._block_close` at the beginning the following line.
        $._fenced_code_block_end_backtick,
        $._fenced_code_block_end_tilde,
        // Bad name. Just a whole blank line without the newline. TODO: rename this
        $._blank_line_start,

        // TOKENS FOR INLINE PARSING
        // Opening and closing delimiters
        // A openging token does not mean the text after has to be a
        // code span if there is no closing token
        $._code_span_start,
        $._code_span_close,

        // For emphasis we need to tell the parse if the last character was a whitespace (or the
        // beginning of a line) or a punctuation. These tokens never actually get emitted.
        $._last_token_whitespace,
        $._last_token_punctuation,

        // The external parser can then decide if any '*' or '_' can open / close emphasis.
        // Open should always be valid, but the external scanner will emit a close if it
        // can to be in line with the spec.
        $._emphasis_open_star,
        $._emphasis_open_underscore,
        $._emphasis_close_star,
        $._emphasis_close_underscore,

        // This is used in the case that a start token for a block is not parsed by the external
        // parser to properly update the currently open blocks in the external parser.
        $._open_block,
        // This is the same as `$._open_block`, but for blocks that cannot interrupt paragraphs
        $._open_block_dont_interrupt_paragraph,
        // Similarly this is used if the closing of a block is not decided by the external parser.
        // A `$._block_close` will be emitted at the beginning of the next line. Notice that a
        // `$._block_close` can also get emitted if the parent block closes.
        $._close_block,
        // This is a workaround so the external parser does not try to open indented blocks when
        // parsing a link reference definition.
        // TODO There is probably a better way to do this. Also think about a better way to not open
        // some blocks directly after paragraphs.
        $._no_indented_chunk,
        // If this token is valid the external scanner will cause a error to occur to kill the current
        // parse branch.
        $._trigger_error,
    ],
    precedences: $ => [
        [$._inline_element, $.paragraph],
        [$.tight_list, $.loose_list],
        [$.setext_heading, $._block],
        [$.setext_heading, $._block_no_blank_line],
        [$.setext_h2_underline, $.thematic_break],
        [$.indented_code_block, $._block],
    ],
    // More conflicts are defined in `add_inline_rules`
    conflicts: $ => [
        [$.link_reference_definition, $._shortcut_link],
        [$._soft_line_break, $._paragraph_end_newline],
        [$.link_reference_definition],
    ],

    rules: {
        document: $ => seq(optional($._ignore_matching_tokens), repeat($._block)),

        // BLOCK STRUCTURE

        // All blocks. It is important that every block ends with a newline.
        _block: $ => choice(
            $.paragraph,
            $.setext_heading,
            $.indented_code_block,
            $.atx_heading,
            $.block_quote,
            $.thematic_break,
            $.tight_list,
            $.loose_list,
            $.fenced_code_block,
            $._blank_line,
            $.html_block,
            $.link_reference_definition,
        ),
        // just the blocks that are able to interrupt a paragraph
        _block_interrupt_paragraph: $ => choice(
            $.atx_heading,
            $.block_quote,
            $.thematic_break,
            $.tight_list,
            $.loose_list,
            $.fenced_code_block,
            $._blank_line,
            choice( // _html_block_7 cannot interrupt a paragraph
                $._html_block_1,
                $._html_block_2,
                $._html_block_3,
                $._html_block_4,
                $._html_block_5,
                $._html_block_6,
            ),
            $.setext_h1_underline,
            $.setext_h2_underline,
        ),
        // All blocks besides blank lines. This is used to decide if a list is tight
        // or loose
        _block_no_blank_line: $ => choice(
            $.paragraph,
            $.setext_heading,
            $.indented_code_block,
            $.atx_heading,
            $.block_quote,
            $.thematic_break,
            $.tight_list,
            $.loose_list,
            $.fenced_code_block,
            $.html_block,
            $.link_reference_definition,
        ),

        // A blank line including the following newline
        _blank_line: $ => seq($._blank_line_start, $._newline),

        // A paragraph. The parsing tactic for deciding when a paragraph ends is as follows:
        // on every newline inside a paragraph a conflict is triggered manually using
        // `$._split_token` to split the parse state into two branches.
        //
        // One of them - the one that also contains a `$._soft_line_break_marker` will try to
        // continue the paragraph, but we make sure that the beginning of a new block that can
        // interrupt a paragraph can also be parsed. If this is the case we know that the paragraph
        // should have been closed and the external parser will emit an `$._error` to kill the parse
        // branch.
        //
        // The other parse branch consideres the paragraph to be over. It will be killed if no valid new
        // block is detected before the next newline. (For example it will also be killed if a indented
        // code block is detected, which cannot interrupt paragraphs).
        //
        // Either way, after the next newline only one branch will exist, so the ammount of branches
        // related to paragraphs ending does not grow.
        paragraph: $ => seq($._inline, $._paragraph_end_newline),
        indented_code_block: $ => prec.right(seq($._indented_chunk, repeat(choice($._indented_chunk, $._blank_line)))),
        _indented_chunk: $ => seq($._indented_chunk_start, repeat(choice($._text, $._newline)), $._block_close, optional($._ignore_matching_tokens)),
        block_quote: $ => seq($._block_quote_start, optional($._ignore_matching_tokens), repeat($._block), $._block_close, optional($._ignore_matching_tokens)),
        atx_heading: $ => prec(1, seq(
            choice($.atx_h1_marker, $.atx_h2_marker, $.atx_h3_marker, $.atx_h4_marker, $.atx_h5_marker, $.atx_h6_marker),
            optional(alias($._inline_no_newline, $.heading_content)),
            $._newline
        )),
        setext_heading: $ => seq(
            alias($.paragraph, $.heading_content),
            choice($.setext_h1_underline, $.setext_h2_underline),
            $._newline
        ),
        setext_h1_underline: $ => $._setext_h1_underline,
        setext_h2_underline: $ => choice($._setext_h2_underline, $._setext_h2_underline_or_thematic_break),
        thematic_break: $ => seq(choice($._setext_h2_underline_or_thematic_break, $._thematic_break), $._newline),

        tight_list: $ => prec.right(choice($._tight_list_plus, $._tight_list_minus, $._tight_list_star, $._tight_list_dot, $._tight_list_parenthesis)),
        loose_list: $ => prec.right(choice($._loose_list_plus, $._loose_list_minus, $._loose_list_star, $._loose_list_dot, $._loose_list_parenthesis)),

        _tight_list_plus: $ => prec.right(choice(seq(repeat1(alias($._list_item_plus_tight, $.list_item)), optional(alias($._list_item_plus_half_loose, $.list_item))), alias($._list_item_plus_half_loose, $.list_item))),
        _tight_list_minus: $ => prec.right(choice(seq(repeat1(alias($._list_item_minus_tight, $.list_item)), optional(alias($._list_item_minus_half_loose, $.list_item))), alias($._list_item_minus_half_loose, $.list_item))),
        _tight_list_star: $ => prec.right(choice(seq(repeat1(alias($._list_item_star_tight, $.list_item)), optional(alias($._list_item_star_half_loose, $.list_item))), alias($._list_item_star_half_loose, $.list_item))),
        _tight_list_dot: $ => prec.right(choice(seq(repeat1(alias($._list_item_dot_tight, $.list_item)), optional(alias($._list_item_dot_half_loose, $.list_item))), alias($._list_item_dot_half_loose, $.list_item))),
        _tight_list_parenthesis: $ => prec.right(choice(seq(repeat1(alias($._list_item_parenthesis_tight, $.list_item)), optional(alias($._list_item_parenthesis_half_loose, $.list_item))), alias($._list_item_parenthesis_half_loose, $.list_item))),

        _loose_list_plus: $ => prec.right(seq(
            choice(
                seq(optional($._tight_list_plus), alias($._list_item_plus_loose, $.list_item)),
                seq($._tight_list_plus, alias($._list_item_plus_half_loose, $.list_item)),
            ),
            repeat(choice(alias($._list_item_plus_loose, $.list_item), alias($._list_item_plus_half_loose, $.list_item), alias($._list_item_plus_tight, $.list_item)))),
        ),
        _loose_list_minus: $ => prec.right(seq(
            choice(
                seq(optional($._tight_list_minus), alias($._list_item_minus_loose, $.list_item)),
                seq($._tight_list_minus, alias($._list_item_minus_half_loose, $.list_item)),
            ),
            repeat(choice(alias($._list_item_minus_loose, $.list_item), alias($._list_item_minus_half_loose, $.list_item), alias($._list_item_minus_tight, $.list_item)))),
        ),
        _loose_list_star: $ => prec.right(seq(
            choice(
                seq(optional($._tight_list_star), alias($._list_item_star_loose, $.list_item)),
                seq($._tight_list_star, alias($._list_item_star_half_loose, $.list_item)),
            ),
            repeat(choice(alias($._list_item_star_loose, $.list_item), alias($._list_item_star_half_loose, $.list_item), alias($._list_item_star_tight, $.list_item)))),
        ),
        _loose_list_dot: $ => prec.right(seq(
            choice(
                seq(optional($._tight_list_dot), alias($._list_item_dot_loose, $.list_item)),
                seq($._tight_list_dot, alias($._list_item_dot_half_loose, $.list_item)),
            ),
            repeat(choice(alias($._list_item_dot_loose, $.list_item), alias($._list_item_dot_half_loose, $.list_item), alias($._list_item_dot_tight, $.list_item)))),
        ),
        _loose_list_parenthesis: $ => prec.right(seq(
            choice(
                seq(optional($._tight_list_parenthesis), alias($._list_item_parenthesis_loose, $.list_item)),
                seq($._tight_list_parenthesis, alias($._list_item_parenthesis_half_loose, $.list_item)),
            ),
            repeat(choice(alias($._list_item_parenthesis_loose, $.list_item), alias($._list_item_parenthesis_half_loose, $.list_item), alias($._list_item_parenthesis_tight, $.list_item)))),
        ),

        _list_item_content_tight: $ => prec.right(choice(
            seq(optional($._blank_line), repeat1($._block_no_blank_line)),
            seq($._blank_line, optional(seq($._blank_line, $._close_block))),
        )),
        _list_item_content_half_loose: $ => seq($._list_item_content_tight, repeat1($._blank_line)),
        _list_item_content_loose: $ => seq($._list_item_content_half_loose, $._block_no_blank_line, repeat($._block)),

        _list_item_plus_tight: $ => seq($.list_marker_plus, optional($._ignore_matching_tokens), $._list_item_content_tight, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_minus_tight: $ => seq($.list_marker_minus, optional($._ignore_matching_tokens), $._list_item_content_tight, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_star_tight: $ => seq($.list_marker_star, optional($._ignore_matching_tokens), $._list_item_content_tight, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_dot_tight: $ => seq($.list_marker_dot, optional($._ignore_matching_tokens), $._list_item_content_tight, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_parenthesis_tight: $ => seq($.list_marker_parenthesis, optional($._ignore_matching_tokens), $._list_item_content_tight, $._block_close, optional($._ignore_matching_tokens)),

        _list_item_plus_half_loose: $ => seq($.list_marker_plus, optional($._ignore_matching_tokens), $._list_item_content_half_loose, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_minus_half_loose: $ => seq($.list_marker_minus, optional($._ignore_matching_tokens), $._list_item_content_half_loose, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_star_half_loose: $ => seq($.list_marker_star, optional($._ignore_matching_tokens), $._list_item_content_half_loose, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_dot_half_loose: $ => seq($.list_marker_dot, optional($._ignore_matching_tokens), $._list_item_content_half_loose, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_parenthesis_half_loose: $ => seq($.list_marker_parenthesis, optional($._ignore_matching_tokens), $._list_item_content_half_loose, $._block_close, optional($._ignore_matching_tokens)),

        _list_item_plus_loose: $ => seq($.list_marker_plus, optional($._ignore_matching_tokens), $._list_item_content_loose, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_minus_loose: $ => seq($.list_marker_minus, optional($._ignore_matching_tokens), $._list_item_content_loose, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_star_loose: $ => seq($.list_marker_star, optional($._ignore_matching_tokens), $._list_item_content_loose, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_dot_loose: $ => seq($.list_marker_dot, optional($._ignore_matching_tokens), $._list_item_content_loose, $._block_close, optional($._ignore_matching_tokens)),
        _list_item_parenthesis_loose: $ => seq($.list_marker_parenthesis, optional($._ignore_matching_tokens), $._list_item_content_loose, $._block_close, optional($._ignore_matching_tokens)),

        fenced_code_block: $ => prec.right(choice(
            seq(
                $._fenced_code_block_start_backtick,
                optional($.info_string),
                $._newline,
                optional($.code_fence_content),
                optional(seq($._fenced_code_block_end_backtick, $._close_block, $._newline)),
                $._block_close,
            ),
            seq(
                $._fenced_code_block_start_tilde,
                optional($.info_string),
                $._newline,
                optional($.code_fence_content),
                optional(seq($._fenced_code_block_end_tilde, $._close_block, $._newline)),
                $._block_close,
            ),
        )),
        code_fence_content: $ => repeat1(choice($._newline, $._text)),
        info_string: $ => repeat1($._text),

        _html_block_1: $ => build_html_block($, new RegExp('<' + regex_case_insensitive_list(['script', 'style', 'pre']) + '([\\r\\n]|[ \\t>][^<\\r\\n]*(\\n|\\r\\n?)?)'), new RegExp('</' + regex_case_insensitive_list(['script', 'style', 'pre']) + '>'), true),
        _html_block_2: $ => build_html_block($, '<!--', '-->', true),
        _html_block_3: $ => build_html_block($, '<?', '?>', true),
        _html_block_4: $ => build_html_block($, /<![A-Z]+/, '>', true),
        _html_block_5: $ => build_html_block($, '<![CDATA[', ']]>', true),
        _html_block_6: $ => choice(
            build_html_block(
                $,
                new RegExp('</?' + regex_case_insensitive_list(['address', 'article', 'aside', 'base', 'basefont', 'blockquote', 'body', 'caption', 'center', 'col', 'colgroup', 'dd', 'details', 'dialog', 'dir', 'div', 'dl', 'dt', 'fieldset', 'figcaption', 'figure', 'footer', 'form', 'frame', 'frameset', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'head', 'header', 'hr', 'html', 'iframe', 'legend', 'li', 'link', 'main', 'menu', 'menuitem', 'nav', 'noframes', 'ol', 'optgroup', 'option', 'p', 'param', 'section', 'source', 'summary', 'table', 'tbody', 'td', 'tfoot', 'th', 'thead', 'title', 'tr', 'track', 'ul']) + '([ \\t>]|/>)'),
                seq($._newline, $._blank_line),
                true
            ),
            build_html_block_after_newline(
                $,
                new RegExp('</?' + regex_case_insensitive_list(['address', 'article', 'aside', 'base', 'basefont', 'blockquote', 'body', 'caption', 'center', 'col', 'colgroup', 'dd', 'details', 'dialog', 'dir', 'div', 'dl', 'dt', 'fieldset', 'figcaption', 'figure', 'footer', 'form', 'frame', 'frameset', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'head', 'header', 'hr', 'html', 'iframe', 'legend', 'li', 'link', 'main', 'menu', 'menuitem', 'nav', 'noframes', 'ol', 'optgroup', 'option', 'p', 'param', 'section', 'source', 'summary', 'table', 'tbody', 'td', 'tfoot', 'th', 'thead', 'title', 'tr', 'track', 'ul']) + '(\\n|\\r\\n?)'),
                true
            ),
        ),
        _html_block_7: $ => choice(
            build_html_block(
                $,
                choice($._open_tag_html_block, $._closing_tag_html_block),
                seq($._newline, $._blank_line),
                false
            ),
            build_html_block_after_newline(
                $,
                choice($._open_tag_html_block_newline, $._closing_tag_html_block_newline),
                false
            ),
        ),
        html_block: $ => prec(1, seq(optional($._whitespace), choice(
            $._html_block_1,
            $._html_block_2,
            $._html_block_3,
            $._html_block_4,
            $._html_block_5,
            $._html_block_6,
            $._html_block_7,
        ))),
        _open_tag_html_block: $ => new RegExp(HTML_OPEN_TAG_EXCLUDE + '[ \\t]'),
        _open_tag_html_block_newline: $ => new RegExp(HTML_OPEN_TAG_EXCLUDE + '(\n|\r\n?)'),
        _closing_tag_html_block: $ => new RegExp(HTML_CLOSING_TAG_EXCLUDE + '[ \\t]'),
        _closing_tag_html_block_newline: $ => new RegExp(HTML_CLOSING_TAG_EXCLUDE + '(\n|\r\n?)'),

        link_reference_definition: $ => prec.dynamic(1, seq(
            optional($._whitespace),
            $.link_label,
            ':',
            optional(seq(optional($._whitespace), optional(seq($._soft_line_break, optional($._whitespace))))),
            $.link_destination,
            optional(prec.dynamic(2, seq(
                choice(
                    seq($._whitespace, optional(seq($._newline, optional($._whitespace)))),
                    seq($._newline, optional($._whitespace)),
                ),
                optional($._no_indented_chunk),
                $.link_title
            ))),
            $._newline,
        )),
        link_label: $ => seq('[', repeat1(choice($._text_no_bracket, $.backslash_escape, $._newline)), ']'),
        link_destination: $ => choice(
            seq('<', repeat(choice($._text_no_angle, $.backslash_escape)), '>'),
            seq(
                choice($._word, punctuation_without($, ['<', '(', ')']), $.backslash_escape, $._link_destination_parenthesis),
                repeat(choice($._word, punctuation_without($, ['(', ')']), $.backslash_escape, $._link_destination_parenthesis)),
            )
        ),
        _link_destination_parenthesis: $ => seq('(', repeat(choice($._word, $.backslash_escape, $._link_destination_parenthesis)), ')'),
        link_title: $ => choice(
            seq('"', repeat(choice(
                $._text_no_double_quotes,
                $.backslash_escape,
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), '"'),
            seq("'", repeat(choice(
                $._text_no_quotes,
                $.backslash_escape,
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), "'"),
            seq('(', repeat(choice(
                $._text_no_parenthesis,
                $.backslash_escape,
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), ')'),
        ),
        _text_no_bracket: $ => choice($._word, punctuation_without($, ['[', ']']), $._whitespace),
        _text_no_double_quotes: $ => choice($._word, punctuation_without($, ['"']), $._whitespace),
        _text_no_quotes: $ => choice($._word, punctuation_without($, ["'"]), $._whitespace),
        _text_no_parenthesis: $ => choice($._word, punctuation_without($, ['(', ')']), $._whitespace),
        _text_no_angle: $ => choice($._word, punctuation_without($, ['<', '>']), $._whitespace),

        _soft_line_break: $ => prec.right(seq(
            $._newline,
            repeat(choice($._split_token, $._soft_line_break_marker)),
            $._soft_line_break_marker,
            optional($._block_interrupt_paragraph), // not actually valid, we will error if it manages to match a block
        )),
        _paragraph_end_newline: $ => seq($._newline, repeat($._split_token)),

        _shortcut_link: $ => alias($.link_label, $.link_text),
        backslash_escape: $ => new RegExp('\\\\[' + PUNCTUATION_CHARACTERS + ']'),
        hard_line_break: $ => prec.dynamic(1, seq('\\', $._newline)),
        _text: $ => choice($._word, punctuation_without($, []), $._whitespace),
        entity_reference: $ => html_entity_regex(),
        numeric_character_reference: $ => /&#([0-9]{1,7}|[xX][0-9a-fA-F]{1,6});/,
        html_tag: $ => choice($._open_tag, $._closing_tag, $._html_comment, $._processing_instruction, $._declaration, $._cdata_section),
        _open_tag: $ => HTML_OPEN_TAG,
        _closing_tag: $ => HTML_CLOSING_TAG,
        _html_comment: $ => prec.dynamic(1, seq(
            '<!--',
            optional(choice(
                $._word,
                $._whitespace,
                $._newline,
                punctuation_without($, ['-', '>']),
                seq(
                    '-',
                    punctuation_without($, ['>']),
                )
            )),
            repeat(prec.right(choice(
                $._word,
                $._whitespace,
                $._newline,
                punctuation_without($, []),
            ))),
            '-->'
        )),
        _processing_instruction: $ => prec.dynamic(1, seq(
            '<?',
            repeat(prec.right(choice(
                $._word,
                $._whitespace,
                $._newline,
                punctuation_without($, []),
            ))),
            '?>'
        )),
        _declaration: $ => prec.dynamic(1, seq(
            /<![A-Z]+/,
            choice(
                $._whitespace,
                $._newline,
            ),
            repeat(prec.right(choice(
                $._word,
                $._whitespace,
                $._newline,
                punctuation_without($, ['>']),
            ))),
            '>'
        )),
        _cdata_section: $ => prec.dynamic(1, seq(
            '<![CDATA[',
            repeat(prec.right(choice(
                $._word,
                $._whitespace,
                $._newline,
                punctuation_without($, []),
            ))),
            ']]>'
        )),

        _whitespace: $ => seq(/[ \t]+/, optional($._last_token_whitespace)),
        _word: $ => RegExp('[^' + PUNCTUATION_CHARACTERS + ' \\t\\n\\r]+'),
        _newline: $ => prec.right(seq(
            token.immediate(/\n|\r\n?/),
            optional($._line_ending),
            optional($._ignore_matching_tokens)
        )),
        _ignore_matching_tokens: $ => repeat1(choice($._block_continuation, $._last_token_whitespace)),
    },
}));

function add_inline_rules(grammar) {
    let conflicts = [];
    for (let newline of [false, true]) {
        let suffix_newline = newline ? "" : "_no_newline";
        for (let delimiter of [false, "star", "underscore"]) {
            let suffix_delimiter = delimiter ? "_no_" + delimiter : "";
            let suffix = suffix_newline + suffix_delimiter;
            grammar.rules["_inline_element" + suffix] = $ => {
                let elements = [
                    $.backslash_escape,
                    // $.hard_line_break,
                    $['_text_inline' + suffix_delimiter],
                    $.entity_reference,
                    $.numeric_character_reference,
                    alias($['_code_span' + suffix_newline], $.code_span),
                    $.html_tag,
                    alias($['_emphasis_star' + suffix_newline], $.emphasis),
                    alias($['_emphasis_underscore' + suffix_newline], $.emphasis),
                    alias($._shortcut_link, $.link),
                ];
                if (newline) {
                    elements = elements.concat([
                        $._soft_line_break,
                    ]);
                }
                return choice(...elements);
            }
            grammar.rules["_inline" + suffix] = $ => repeat1($["_inline_element" + suffix]);
            conflicts.push(['_code_span' + suffix_newline, '_text_inline' + suffix_delimiter]);
            if (suffix !== "star") {
                conflicts.push(['_emphasis_star' + suffix_newline, '_text_inline' + suffix_delimiter]);
            }
            if (suffix !== "underscore") {
                conflicts.push(['_emphasis_underscore' + suffix_newline, '_text_inline' + suffix_delimiter]);
            }

            if (newline) {
                conflicts.push(['_html_comment', '_text_inline' + suffix_delimiter]); // TODO: no_newline
                conflicts.push(['_cdata_section', '_text_inline' + suffix_delimiter]);
                conflicts.push(['_declaration', '_text_inline' + suffix_delimiter]);
                conflicts.push(['_processing_instruction', '_text_inline' + suffix_delimiter]);
                conflicts.push(['link_label', '_text_inline' + suffix_delimiter]);
                conflicts.push(['link_reference_definition', '_text_inline' + suffix_delimiter]);
                grammar.rules['_text_inline' + suffix_delimiter] = $ => {
                    let elements = [
                        $._word,
                        punctuation_without($, []),
                        $._whitespace,
                        $._code_span_start,
                        '<!--',
                        /<![A-Z]+/,
                        '<?',
                        '<![CDATA[',
                    ];
                    if (delimiter !== "star") {
                        elements.push($._emphasis_open_star);
                    }
                    if (delimiter !== "underscore") {
                        elements.push($._emphasis_open_underscore);
                    }
                    return choice(...elements);
                }
            }
        }
        
        grammar.rules['_emphasis_star' + suffix_newline] = $ => prec.dynamic(1, seq($._emphasis_open_star, $['_inline' + suffix_newline + '_no_star'], $._emphasis_close_star));
        grammar.rules['_emphasis_underscore' + suffix_newline] = $ => prec.dynamic(1, seq($._emphasis_open_underscore, $['_inline' + suffix_newline + '_no_underscore'], $._emphasis_close_underscore));
        grammar.rules['_code_span' + suffix_newline] = $ => prec.dynamic(1, seq($._code_span_start, repeat(newline ? choice($._text, $._soft_line_break) : $._text), $._code_span_close));
    }

    let old = grammar.conflicts
    grammar.conflicts = $ => {
        let cs = old($);
        for (let conflict of conflicts) {
            let c = [];
            for (let rule of conflict) {
                c.push($[rule]);
            }
            cs.push(c);
        }
        return cs;
    }
    
    return grammar;
}

function html_entity_regex() {
    let s = '&(';
    s += Object.keys(html_entities).map(name => name.substring(1, name.length - 1)).join('|');
    s += ');';
    return new RegExp(s);
}

function build_html_block_after_newline($, open, interrupt_paragraph) {
    return seq(
        open,
        interrupt_paragraph ? $._open_block : $._open_block_dont_interrupt_paragraph,
        $._line_ending,
        optional($._ignore_matching_tokens),
        optional(seq($._blank_line, $._close_block)),
        repeat(choice(
            $._whitespace,
            $._word,
            punctuation_without($, []),
            $._newline,
            seq($._newline, $._blank_line, $._close_block),
        )),
        $._block_close,
        optional($._ignore_matching_tokens),
    );
}

function build_html_block($, open, close, interrupt_paragraph) {
    return seq(
        open,
        interrupt_paragraph ? $._open_block : $._open_block_dont_interrupt_paragraph,
        repeat(choice(
            $._whitespace,
            $._word,
            punctuation_without($, []),
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

function punctuation_without($, chars) {
    return seq(choice(...PUNCTUATION_CHARACTERS_ARRAY.filter(c => !chars.includes(c))), optional($._last_token_punctuation));
}

// used to build a regex that matches anything but pre, script and style
function negative_regex(ss, classExtra, isStart) {
    let chars = {};
    let end = true;
    for (let s of ss) {
        if (s.length > 1) {
            end = false;
        }
        let char = s.charCodeAt(0);
        if (!(char in chars)) {
            chars[char] = [];
        }
        chars[char].push(s);
    }
    let ranges = [['a'.charCodeAt(0), 'z'.charCodeAt(0)]];
    if (!isStart) {
        ranges.splice(0, 0, ['0'.charCodeAt(0), '9'.charCodeAt(0)]);
    }
    for (let char in chars) {
        for (let i = 0; i < ranges.length; i++) {
            let range = ranges[i];
            if (range[1] < char) continue;
            if (range[1] != char && range[0] != char) {
                ranges.splice(i, 1, [range[0], char - 1], [+char + 1, range[1]]);
            } else if(range[1] == char && range[0] == char) {
                ranges.splice(i, 1);
            } else if (range[1] == char) {
                range[1]--;
            } else {
                range[0]++;
            }
            break;
        }
    }
    let alphabet = ranges.map(x => {
        if (x[0] >= 97) { // is letter
            if (x[0] == x[1]) {
                return String.fromCharCode(x[0]) + String.fromCharCode(x[0]).toUpperCase();
            } else {
                return String.fromCharCode(x[0]) + '-' + String.fromCharCode(x[1]) + String.fromCharCode(x[0]).toUpperCase() + '-' + String.fromCharCode(x[1]).toUpperCase();
            }
        } else {
            if (x[0] == x[1]) {
                return String.fromCharCode(x[0]);
            } else {
                return String.fromCharCode(x[0]) + '-' + String.fromCharCode(x[1]);
            }
        }
    }).join('');
    let output = '([' + alphabet + (isStart ? '' : classExtra) + '][a-zA-Z' + classExtra + ']*';
    if (!end) {
        for (let char in chars) {
            output += '|' + String.fromCharCode(char);
            let new_ss = chars[char].map(x => x.substring(1)).filter(x => x.length != 0)
            if (new_ss.length > 0) {
                output += '|' + String.fromCharCode(char) + negative_regex(new_ss, classExtra, false);
            } else {
                output += '[a-zA-Z' + classExtra + ']+';
            }
        }
    } else {
        output += '|[' + Object.keys(chars).map(x => String.fromCharCode(x)).join('') + '][a-zA-Z' + classExtra + ']+';
    }
    output += ')';
    return output;
}

