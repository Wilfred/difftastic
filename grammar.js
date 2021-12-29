// This is a markdown grammar trying to implement the CommonMark spec
// (https://spec.commonmark.org/)

// Markdown is seperated into block (paragraphs, headings, list items, ...) and
// inline (emphasis, links, ...) structure. This file is structured to communicate
// that separation.

// PRELIMINARIES

// Levels used for dynmic precedence. Ideally
// n * PRECEDENCE_LEVEL_EMPHASIS > PRECEDENCE_LEVEL_LINK for any n, so maybe the
// maginuted of these values should be increased in the future
const PRECEDENCE_LEVEL_EMPHASIS = 1;
const PRECEDENCE_LEVEL_LINK = 10;
const PRECEDENCE_LEVEL_HTML = 100;
const PRECEDENCE_LEVEL_CODE_SPAN = 100;

// Punctuation characters as specified in
// https://github.github.com/gfm/#ascii-punctuation-character
const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~';
const PUNCTUATION_CHARACTERS_ARRAY = [
    '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
    '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

// (https://github.github.com/gfm/#html-blocks)
// tag names for html blocks of type 1
const HTML_TAG_NAMES_RULE_1 = ['pre', 'script', 'style'];
// tag names for html blocks of type 6
const HTML_TAG_NAMES_RULE_7 = [
    'address', 'article', 'aside', 'base', 'basefont', 'blockquote', 'body', 'caption', 'center',
    'col', 'colgroup', 'dd', 'details', 'dialog', 'dir', 'div', 'dl', 'dt', 'fieldset', 'figcaption',
    'figure', 'footer', 'form', 'frame', 'frameset', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'head',
    'header', 'hr', 'html', 'iframe', 'legend', 'li', 'link', 'main', 'menu', 'menuitem', 'nav',
    'noframes', 'ol', 'optgroup', 'option', 'p', 'param', 'section', 'source', 'summary', 'table',
    'tbody', 'td', 'tfoot', 'th', 'thead', 'title', 'tr', 'track', 'ul'
];

// !!!
// Notice the call to `add_inline_rules` which generates some additional rules related to parsing
// inline contents in different contexts.
// !!!
module.exports = grammar(add_inline_rules({
    name: 'markdown',

    externals: $ => [
        // BLOCK STRUCTURE
        // Quite a few of these tokens could maybe be implemented without use of the external parser.
        // For this the `$._open_block` and `$._close_block` tokens should be used to tell the external
        // parser to put a new anonymous block on the block stack.

        // Block structure gets parsed as follows: After every newline (`$._line_ending`) we try to match
        // as many open blocks as possible. For example if the last line was part of a block quote we look
        // for a `>` at the beginning of the next line. We emit a `$._block_continuation` for each matched
        // block. For this process the external scanner keeps a stack of currently open blocks.
        //
        // If we are not able to match all blocks that does not necessarily mean that all unmatched blocks
        // have to be closed. It could also mean that the line is a lazy continuation line
        // (https://github.github.com/gfm/#lazy-continuation-line, see also `$._split_token` and
        // `$._soft_line_break_marker` below)
        //
        // If a block does get closed (because it was not matched or because some closing token was
        // encountered) we emit a `$._block_close` token

        $._line_ending, // this token does not contain the actual newline characters. see `$._newline`
        $._block_close,
        $._block_continuation,

        // Tokens signifying the start of a block. Blocks that do not need a `$._block_close` because they
        // always span one line are marked as such.

        $._block_quote_start,
        $._indented_chunk_start,
        $.atx_h1_marker, // atx headings do not need a `$._block_close`
        $.atx_h2_marker,
        $.atx_h3_marker,
        $.atx_h4_marker,
        $.atx_h5_marker,
        $.atx_h6_marker,
        $.setext_h1_underline, // setext headings do not need a `$._block_close`
        $.setext_h2_underline,
        $._thematic_break, // thematic breaks do not need a `$._block_close`
        $._list_marker_minus,
        $._list_marker_plus,
        $._list_marker_star,
        $._list_marker_parenthesis,
        $._list_marker_dot,
        $._list_marker_minus_dont_interrupt, // list items that do not interrupt an ongoing paragraph
        $._list_marker_plus_dont_interrupt,
        $._list_marker_star_dont_interrupt,
        $._list_marker_parenthesis_dont_interrupt,
        $._list_marker_dot_dont_interrupt,
        $._fenced_code_block_start_backtick,
        $._fenced_code_block_start_tilde,
        $._blank_line_start, // Does not contain the newline characters. Blank lines do not need a `$._block_close`

        // Special tokens for block structure

        // Closing backticks or tildas for a fenced code block. They are used to trigger a `$._close_block`
        // which in turn will trigger a `$._block_close` at the beginning the following line.
        $._fenced_code_block_end_backtick,
        $._fenced_code_block_end_tilde,

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
        $._no_indented_chunk,

        // Line breaks in paragraphs are of relevance for both block and inline structure if we encounter
        // a newline inside a paragraph exactly two `$._split_token` are emitted by the external scanner.
        // This way the current parser version gets split in two. In one of the resulting parse versions
        // we then also emit a `$._soft_line_break_marker` to be able to differntiate the two versions.
        $._split_token,
        $._soft_line_break_marker,

        // An `$._error` token is never valid  and gets emmited to kill invalid parse branches. Concretely
        // this is used to decide wether a newline closes a paragraph and together and it gets emitted
        // when trying to parse the `$._trigger_error` token in `$.link_title`.
        $._error,
        $._trigger_error,
        
        // INLINE STRUCTURE

        // Opening and closing delimiters for code spans. These are sequences of one or more backticks.
        // An opening token does not mean the text after has to be a code span if there is no closing token
        $._code_span_start,
        $._code_span_close,

        // Opening and closing delimiters for emphasis.
        $._emphasis_open_star,
        $._emphasis_open_underscore,
        $._emphasis_close_star,
        $._emphasis_close_underscore,

        // For emphasis we need to tell the parser if the last character was a whitespace (or the
        // beginning of a line) or a punctuation. These tokens never actually get emitted.
        $._last_token_whitespace,
        $._last_token_punctuation,
    ],
    precedences: $ => [
        [$._inline_element, $.paragraph],
        [$.setext_heading, $._block],
        [$.indented_code_block, $._block],
        [$._strong_emphasis_star, $._inline_element_no_star],
        [$._strong_emphasis_star_no_newline, $._inline_element_no_newline_no_star],
        [$._strong_emphasis_star_no_link, $._inline_element_no_star_no_link],
        [$._strong_emphasis_star_no_newline_no_link, $._inline_element_no_newline_no_star_no_link],
        [$._strong_emphasis_underscore, $._inline_element_no_underscore],
        [$._strong_emphasis_underscore_no_newline, $._inline_element_no_newline_no_underscore],
        [$._strong_emphasis_underscore_no_link, $._inline_element_no_underscore_no_link],
        [$._strong_emphasis_underscore_no_newline_no_link, $._inline_element_no_newline_no_underscore_no_link],
    ],
    // More conflicts are defined in `add_inline_rules`
    conflicts: $ => [
        [$.link_label, $._closing_tag, $._text_inline_no_link],
        [$.link_label, $._open_tag, $._text_inline_no_link],
        [$.link_label, $.hard_line_break, $._text_inline_no_link],
        [$.link_label, $._inline_element_no_link],
        [$._image_description, $._text_inline],
        [$._image_description_non_empty, $._text_inline],
        [$._image_description, $._image_description_non_empty, $._text_inline],
        [$._image_description, $._image_description_non_empty, $._text_inline_no_star],
        [$._image_description, $._image_description_non_empty, $._text_inline_no_underscore],
        [$._image_shortcut_link, $._image_description],
        [$._image_inline_link, $._image_shortcut_link],
        [$._image_full_reference_link, $._image_collapsed_reference_link, $._image_shortcut_link],
        [$.shortcut_link, $._link_text],
        [$.link_destination, $.link_title],
        [$._link_destination_parenthesis, $.link_title],
        [$._soft_line_break, $._paragraph_end_newline],
        [$.link_reference_definition],
        [$.hard_line_break, $._whitespace],
        [$._link_text_non_empty, $.link_label],
    ],
    extras: $ => [],

    rules: {
        document: $ => seq(optional($._ignore_matching_tokens), repeat($._block)),

        // BLOCK STRUCTURE

        // All blocks. Every block contains a trailing newline.
        _block: $ => choice(
            $.paragraph,
            $.setext_heading,
            $.indented_code_block,
            $.atx_heading,
            $.block_quote,
            $.thematic_break,
            $.list,
            $.fenced_code_block,
            $._blank_line,
            $.html_block,
            $.link_reference_definition,
        ),

        // Just the blocks that are able to interrupt a paragraph.
        // This should not end up in the actual output but is used to decide whether a newline
        // is a lazy continuation.
        _block_interrupt_paragraph: $ => choice(
            $.atx_heading,
            $.block_quote,
            $.thematic_break,
            choice( // some list items do not interrupt paragraphs
                $._list_marker_plus,
                $._list_marker_minus,
                $._list_marker_star,
                $._list_marker_dot,
                $._list_marker_parenthesis,
            ),
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

        // LEAF BLOCKS

        // A thematic break. This is currently handled by the external scanner but maybe could be
        // parsed using normal tree-sitter rules.
        //
        // https://github.github.com/gfm/#thematic-breaks
        thematic_break: $ => seq($._thematic_break, $._newline),

        // An ATX heading. This is currently handled by the external scanner but maybe could be
        // parsed using normal tree-sitter rules.
        //
        // https://github.github.com/gfm/#atx-headings
        atx_heading: $ => prec(1, seq(
            choice($.atx_h1_marker, $.atx_h2_marker, $.atx_h3_marker, $.atx_h4_marker, $.atx_h5_marker, $.atx_h6_marker),
            optional(alias($._inline_no_newline, $.heading_content)),
            $._newline
        )),

        // Ansetext heading. The underlines are currently handled by the external scanner but maybe
        // could be parsed using normal tree-sitter rules.
        //
        // https://github.github.com/gfm/#setext-headings
        setext_heading: $ => seq(
            alias($.paragraph, $.heading_content),
            choice($.setext_h1_underline, $.setext_h2_underline),
            $._newline
        ),

        // An indented code block. An indented code block is made up of indented chunks and blank
        // lines. The indented chunks are handeled by the external scanner.
        //
        // https://github.github.com/gfm/#indented-code-blocks
        indented_code_block: $ => prec.right(seq($._indented_chunk, repeat(choice($._indented_chunk, $._blank_line)))),
        _indented_chunk: $ => seq($._indented_chunk_start, repeat(choice($._text, $._newline)), $._block_close, optional($._ignore_matching_tokens)),

        // A fenced code block. Fenced code blocks are mainly handled by the external scanner. In
        // case of backtick code blocks the external scanner also checks that the info string is
        // proper.
        //
        // https://github.github.com/gfm/#fenced-code-blocks
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
        info_string: $ => repeat1(choice($._text, $.backslash_escape, $.entity_reference, $.numeric_character_reference)),

        // An HTML block. We do not emit addition nodes relating to the kind or structure or of the
        // html block as this is best done using language injections and a proper html parsers.
        //
        // See the `build_html_block` function for more information.
        // See the spec for the different kinds of html blocks.
        //
        // https://github.github.com/gfm/#html-blocks
        html_block: $ => prec(1, seq(optional($._whitespace), choice(
            $._html_block_1,
            $._html_block_2,
            $._html_block_3,
            $._html_block_4,
            $._html_block_5,
            $._html_block_6,
            $._html_block_7,
        ))),
        _html_block_1: $ => build_html_block($,
            new RegExp(
                '<' + regex_case_insensitive_list(HTML_TAG_NAMES_RULE_1) + '([\\r\\n]|[ \\t>][^<\\r\\n]*(\\n|\\r\\n?)?)'
            ),
            new RegExp('</' + regex_case_insensitive_list(HTML_TAG_NAMES_RULE_1) + '>'),
            true
        ),
        _html_block_2: $ => build_html_block($, '<!--', '-->', true),
        _html_block_3: $ => build_html_block($, '<?', '?>', true),
        _html_block_4: $ => build_html_block($, /<![A-Z]+/, '>', true),
        _html_block_5: $ => build_html_block($, '<![CDATA[', ']]>', true),
        _html_block_6: $ => choice(
            build_html_block(
                $,
                new RegExp(
                    '</?' + regex_case_insensitive_list(HTML_TAG_NAMES_RULE_7) + '([ \\t>]|/>)'
                ),
                seq($._newline, $._blank_line),
                true
            ),
            build_html_block_after_newline(
                $,
                new RegExp('</?' + regex_case_insensitive_list(HTML_TAG_NAMES_RULE_7) + '(\\n|\\r\\n?)'),
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
        // HTML tags for opening html blocks are parsed differently as they can only cointain one
        // token.
        _open_tag_html_block: $ => new RegExp(
            '<'
            + negative_regex(HTML_TAG_NAMES_RULE_1.concat(HTML_TAG_NAMES_RULE_7), '0-9\\-', true)
            + '([ \\t]+[a-zA-Z_:][a-zA-Z0-9_\\.:\\-]*[ \\t]*=[ \\t]*([^ \\t\\r\\n"\'=<>`]+|\'[^\'\\r\\n]*\'|"[^"\\r\\n]*"))*[ \\t]*/?>[ \\t]'
        ),
        _open_tag_html_block_newline: $ => new RegExp(
            '<'
            + negative_regex(HTML_TAG_NAMES_RULE_1.concat(HTML_TAG_NAMES_RULE_7), '0-9\\-', true)
            + '([ \\t]+[a-zA-Z_:][a-zA-Z0-9_\\.:\\-]*[ \\t]*=[ \\t]*([^ \\t\\r\\n"\'=<>`]+|\'[^\'\\r\\n]*\'|"[^"\\r\\n]*"))*[ \\t]*/?>(\n|\r\n?)'
        ),
        _closing_tag_html_block: $ => new RegExp(
            '</' + negative_regex(HTML_TAG_NAMES_RULE_1.concat(HTML_TAG_NAMES_RULE_7), '0-9\\-', true) + '[ \\t]*>[ \\t]'
        ),
        _closing_tag_html_block_newline: $ => new RegExp(
            '</' + negative_regex(HTML_TAG_NAMES_RULE_1.concat(HTML_TAG_NAMES_RULE_7), '0-9\\-', true) + '[ \\t]*>(\n|\r\n?)'
        ),

        // A link reference definition. We need to make sure that this is not mistaken for a
        // paragraph or indented chunk. The `$._no_indented_chunk` token is used to tell the
        // external scanner not to allow indented chunks when the `$.link_title` of the link
        // reference definition would be valid.
        //
        // https://github.github.com/gfm/#link-reference-definitions
        link_reference_definition: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, seq(
            optional($._whitespace),
            $.link_label,
            ':',
            optional(seq(optional($._whitespace), optional(seq($._soft_line_break, optional($._whitespace))))),
            $.link_destination,
            optional(prec.dynamic(2 * PRECEDENCE_LEVEL_LINK, seq(
                choice(
                    seq($._whitespace, optional(seq($._newline, optional($._whitespace)))),
                    seq($._newline, optional($._whitespace)),
                ),
                optional($._no_indented_chunk),
                $.link_title
            ))),
            $._newline,
        )),

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
        //
        // https://github.github.com/gfm/#paragraphs
        paragraph: $ => seq($._inline, $._paragraph_end_newline),
        _soft_line_break: $ => prec.right(seq(
            $._newline,
            repeat(choice($._split_token, $._soft_line_break_marker)),
            $._soft_line_break_marker,
            optional($._block_interrupt_paragraph), // not actually valid, we will error if it manages to match a block
        )),
        _paragraph_end_newline: $ => seq($._newline, repeat($._split_token)),

        // A blank line including the following newline.
        //
        // https://github.github.com/gfm/#blank-lines
        _blank_line: $ => seq($._blank_line_start, $._newline),

        
        // CONTAINER BLOCKS

        // A block quote. This is the most basic example of a container block handled by the
        // external scanner.
        //
        // https://github.github.com/gfm/#block-quotes
        block_quote: $ => seq(
            $._block_quote_start,
            optional($._ignore_matching_tokens),
            repeat($._block),
            $._block_close,
            optional($._ignore_matching_tokens)
        ),

        // A list. This grammar does not differentiate between loose and tight lists for efficiency
        // reasons.
        //
        // Lists can only contain list items with list markers of the same type. List items are
        // handled by the external scanner.
        //
        // https://github.github.com/gfm/#lists
        list: $ => prec.right(choice(
            $._list_plus,
            $._list_minus,
            $._list_star,
            $._list_dot,
            $._list_parenthesis
        )),
        _list_plus: $ => prec.right(repeat1(alias($._list_item_plus, $.list_item))),
        _list_minus: $ => prec.right(repeat1(alias($._list_item_minus, $.list_item))),
        _list_star: $ => prec.right(repeat1(alias($._list_item_star, $.list_item))),
        _list_dot: $ => prec.right(repeat1(alias($._list_item_dot, $.list_item))),
        _list_parenthesis: $ => prec.right(repeat1(alias($._list_item_parenthesis, $.list_item))),
        // Some list items can not interrupt a paragraph and are marked as such by the external
        // scanner.
        list_marker_plus: $ => choice($._list_marker_plus, $._list_marker_plus_dont_interrupt),
        list_marker_minus: $ => choice($._list_marker_minus, $._list_marker_minus_dont_interrupt),
        list_marker_star: $ => choice($._list_marker_star, $._list_marker_star_dont_interrupt),
        list_marker_dot: $ => choice($._list_marker_dot, $._list_marker_dot_dont_interrupt),
        list_marker_parenthesis: $ => choice($._list_marker_parenthesis, $._list_marker_parenthesis_dont_interrupt),
        _list_item_plus: $ => seq(
            $.list_marker_plus,
            optional($._ignore_matching_tokens),
            $._list_item_content,
            $._block_close,
            optional($._ignore_matching_tokens)
        ),
        _list_item_minus: $ => seq(
            $.list_marker_minus,
            optional($._ignore_matching_tokens),
            $._list_item_content,
            $._block_close,
            optional($._ignore_matching_tokens)
        ),
        _list_item_star: $ => seq(
            $.list_marker_star,
            optional($._ignore_matching_tokens),
            $._list_item_content,
            $._block_close,
            optional($._ignore_matching_tokens)
        ),
        _list_item_dot: $ => seq(
            $.list_marker_dot,
            optional($._ignore_matching_tokens),
            $._list_item_content,
            $._block_close,
            optional($._ignore_matching_tokens)
        ),
        _list_item_parenthesis: $ => seq(
            $.list_marker_parenthesis,
            optional($._ignore_matching_tokens),
            $._list_item_content,
            $._block_close,
            optional($._ignore_matching_tokens)
        ),
        // List items are closed after two consecutive blank lines
        _list_item_content: $ => choice(
            prec(1, seq($._blank_line, $._blank_line, $._close_block)),
            repeat1($._block),
        ),

        // INLINES
        
        // A lot of inlines are defined in `add_inline_rules`, including:
        //
        // * collections of inlines
        // * code spans
        // * emphasis
        // * textual content
        // 
        // This is done to reduce code duplication, as some inlines need to be parsed differently
        // depending on the context. For example inlines in ATX headings may not contain newlines.

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

        // Different kinds of links:
        // * inline links (https://github.github.com/gfm/#inline-link)
        // * full reference links (https://github.github.com/gfm/#full-reference-link)
        // * collapsed reference links (https://github.github.com/gfm/#collapsed-reference-link)
        // * shortcut links (https://github.github.com/gfm/#shortcut-reference-link)
        //
        // Dynamic precedence is distributed as granular as possible to help the parser decide
        // while parsing which branch is the most important.
        //
        // https://github.github.com/gfm/#links
        _link_text: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, choice(
            $._link_text_non_empty,
            seq('[', ']')
        )),
        _link_text_non_empty: $ => seq('[', alias($._inline_no_link, $.link_text), ']'),
        link_label: $ => seq('[', repeat1(choice(
            $._text_inline_no_link,
            $.backslash_escape,
            $._newline
        )), ']'),
        link_destination: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, choice(
            seq('<', repeat(choice($._text_no_angle, $.backslash_escape)), '>'),
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
        _link_destination_parenthesis: $ => seq('(', repeat(choice($._word, $.backslash_escape, $._link_destination_parenthesis)), ')'),
        _text_no_angle: $ => choice($._word, punctuation_without($, ['<', '>']), $._whitespace),
        link_title: $ => choice(
            seq('"', repeat(choice(
                $._word,
                punctuation_without($, ['"']),
                $._whitespace,
                $.backslash_escape,
                $.entity_reference,
                $.numeric_character_reference,
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), '"'),
            seq("'", repeat(choice(
                $._word,
                punctuation_without($, ["'"]),
                $._whitespace,
                $.backslash_escape,
                $.entity_reference,
                $.numeric_character_reference,
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), "'"),
            seq('(', repeat(choice(
                $._word,
                punctuation_without($, ['(', ')']),
                $._whitespace,
                $.backslash_escape,
                $.entity_reference,
                $.numeric_character_reference,
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), ')'),
        ),
        shortcut_link: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, $._link_text_non_empty),
        full_reference_link: $ => prec.dynamic(2 * PRECEDENCE_LEVEL_LINK, seq(
            $._link_text,
            $.link_label
        )),
        collapsed_reference_link: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, seq(
            $._link_text,
            '[',
            ']'
        )),
        inline_link: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, seq(
            $._link_text,
            '(',
            repeat(choice($._whitespace, $._soft_line_break)),
            optional(seq(
                choice(
                    seq(
                        $.link_destination,
                        optional(seq(
                            repeat1(choice($._whitespace, $._soft_line_break)),
                            $.link_title
                        ))
                    ),
                    $.link_title,
                ),
                repeat(choice($._whitespace, $._soft_line_break)),
            )),
            ')'
        )),

        // Images work exactly like links with a '!' added in front.
        //
        // https://github.github.com/gfm/#images
        image: $ => choice(
            $._image_inline_link,
            $._image_shortcut_link,
            $._image_full_reference_link,
            $._image_collapsed_reference_link
        ),
        _image_inline_link: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, seq(
            $._image_description,
            '(',
            repeat(choice($._whitespace, $._soft_line_break)),
            optional(seq(
                choice(
                    seq(
                        $.link_destination,
                        optional(seq(
                            repeat1(choice($._whitespace, $._soft_line_break)),
                            $.link_title
                        ))
                    ),
                    $.link_title,
                ),
                repeat(choice($._whitespace, $._soft_line_break)),
            )),
            ')'
        )),
        _image_shortcut_link: $ => prec.dynamic(3 * PRECEDENCE_LEVEL_LINK, $._image_description_non_empty),
        _image_full_reference_link: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, seq($._image_description, $.link_label)),
        _image_collapsed_reference_link: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, seq($._image_description, '[', ']')),
        _image_description: $ => prec.dynamic(3 * PRECEDENCE_LEVEL_LINK, choice($._image_description_non_empty, seq('!', '[', ']'))),
        _image_description_non_empty: $ => seq('!', '[', alias($._inline, $.image_description), ']'),

        // Autolinks. Uri autolinks actually accept protocolls of arbitrary length which does not
        // align with the spec. This is because the binary for the grammar gets to large if done
        // otherwise as tree-sitters code generation is not very concise for this type of regex.
        //
        // Email autolinks do not match every valid email (emails normally should not be parsed
        // using regexes), but this is how they are defined in the spec.
        //
        // https://github.github.com/gfm/#autolinks
        uri_autolink: $ => /<[a-zA-Z][a-zA-Z0-9+\.\-][a-zA-Z0-9+\.\-]*:[^ \t\r\n<>]*>/,
        email_autolink: $ =>
            /<[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*>/,

        // Raw html. As with html blocks we do not emit additional information as this is best done
        // by a proper html tree-sitter grammar.
        // 
        // https://github.github.com/gfm/#raw-html
        html_tag: $ => choice($._open_tag, $._closing_tag, $._html_comment, $._processing_instruction, $._declaration, $._cdata_section),
        _open_tag: $ => prec.dynamic(PRECEDENCE_LEVEL_HTML, seq('<', $._tag_name, repeat($._attribute), repeat(choice($._whitespace, $._soft_line_break)), optional('/'), '>')),
        _closing_tag: $ => prec.dynamic(PRECEDENCE_LEVEL_HTML, seq('<', '/', $._tag_name, repeat(choice($._whitespace, $._soft_line_break)), '>')),
        _tag_name: $ => seq($._word_no_digit, repeat(choice($._word_no_digit, $._digits, '-'))),
        _attribute: $ => seq(repeat1(choice($._whitespace, $._soft_line_break)), $._attribute_name, repeat(choice($._whitespace, $._soft_line_break)), '=', repeat(choice($._whitespace, $._soft_line_break)), $._attribute_value),
        _attribute_name: $ => /[a-zA-Z_:][a-zA-Z0-9_\.:\-]*/,
        _attribute_value: $ => choice(
            /[^ \t\r\n"'=<>`]+/,
            seq("'", repeat(choice($._word, $._whitespace, $._soft_line_break, punctuation_without($, ["'"]))), "'"),
            seq('"', repeat(choice($._word, $._whitespace, $._soft_line_break, punctuation_without($, ['"']))), '"'),
        ),
        _html_comment: $ => prec.dynamic(PRECEDENCE_LEVEL_HTML, seq(
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
        _processing_instruction: $ => prec.dynamic(PRECEDENCE_LEVEL_HTML, seq(
            '<?',
            repeat(prec.right(choice(
                $._word,
                $._whitespace,
                $._newline,
                punctuation_without($, []),
            ))),
            '?>'
        )),
        _declaration: $ => prec.dynamic(PRECEDENCE_LEVEL_HTML, seq(
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
        _cdata_section: $ => prec.dynamic(PRECEDENCE_LEVEL_HTML, seq(
            '<![CDATA[',
            repeat(prec.right(choice(
                $._word,
                $._whitespace,
                $._newline,
                punctuation_without($, []),
            ))),
            ']]>'
        )),

        // A hard line break.
        //
        // https://github.github.com/gfm/#hard-line-breaks
        hard_line_break: $ => prec.dynamic(1, seq(choice('\\', $._whitespace_ge_2), $._soft_line_break)),
        _text: $ => choice($._word, punctuation_without($, []), $._whitespace),

        // Whitespace is divided into single whitespaces and multiple whitespaces as wee need this
        // information for hard line breaks.
        _whitespace_ge_2: $ => /\t| [ \t]+/,
        _whitespace: $ => seq(choice($._whitespace_ge_2, / /), optional($._last_token_whitespace)),

        // Other than whitespace we tokenize into strings of digits, punctuation characters
        // (handled by `punctuation_without`) and strings of any other characters. This way the
        // lexer does not have to many different states, which makes it a lot easier to make
        // conflicts work.
        _word: $ => choice($._word_no_digit, $._digits),
        _word_no_digit: $ => new RegExp('[^' + PUNCTUATION_CHARACTERS_REGEX + ' \\t\\n\\r0-9]+'),
        _digits: $ => /[0-9]+/,

        // Newlines as in the spec. Parsing a newline triggers the matching process by making
        // the external parser emit a `$._line_ending`.
        _newline: $ => prec.right(seq(
            /\n|\r\n?/,
            optional($._line_ending),
            optional($._ignore_matching_tokens)
        )),

        // The external scanner emits some characters that should just be ignored.
        _ignore_matching_tokens: $ => repeat1(choice($._block_continuation, $._last_token_whitespace)),
    },
}));

// This function adds some extra inline rules. This is done to reduce code duplication, as some
// rules may not contain newlines, characters like '*' and '_', ... depending on the context.
//
// This is by far the most ugly part of this code and should be cleaned up.
function add_inline_rules(grammar) {
    let conflicts = [];
    for (let newline of [true, false]) {
        let suffix_newline = newline ? "" : "_no_newline";
        for (let link of [true, false]) {
            let suffix_link = link ? "" : "_no_link";
            for (let delimiter of [false, "star", "underscore"]) {
                let suffix_delimiter = delimiter ? "_no_" + delimiter : "";
                let suffix = suffix_newline + suffix_delimiter + suffix_link;
                grammar.rules["_inline_element" + suffix] = $ => {
                    let elements = [
                        $.backslash_escape,
                        $.hard_line_break,
                        $.uri_autolink,
                        $.email_autolink,
                        $['_text_inline' + suffix_delimiter + suffix_link],
                        $.entity_reference,
                        $.numeric_character_reference,
                        alias($['_code_span' + suffix_newline], $.code_span),
                        $.html_tag,
                        alias($['_emphasis_star' + suffix_newline + suffix_link], $.emphasis),
                        alias($['_strong_emphasis_star' + suffix_newline + suffix_link], $.strong_emphasis),
                        alias($['_emphasis_underscore' + suffix_newline + suffix_link], $.emphasis),
                        alias($['_strong_emphasis_underscore' + suffix_newline + suffix_link], $.strong_emphasis),
                        $.image,
                    ];
                    if (newline) {
                        elements = elements.concat([
                            $._soft_line_break,
                        ]);
                    }
                    if (link) {
                        elements = elements.concat([
                            $.shortcut_link,
                            $.full_reference_link,
                            $.collapsed_reference_link,
                            $.inline_link,
                        ]);
                    }
                    return choice(...elements);
                };
                grammar.rules["_inline" + suffix] = $ => repeat1($["_inline_element" + suffix]);
                conflicts.push(['_code_span' + suffix_newline, '_text_inline' + suffix_delimiter + suffix_link]);
                if (delimiter !== "star") {
                    conflicts.push(['_emphasis_star' + suffix_newline + suffix_link, '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_emphasis_star' + suffix_newline + suffix_link, '_strong_emphasis_star' + suffix_newline + suffix_link, '_text_inline' + suffix_delimiter + suffix_link]);
                }
                if (delimiter !== false) {
                    conflicts.push(['_strong_emphasis_' + delimiter + suffix_newline + suffix_link, '_inline_element_no_' + delimiter]);
                }
                if (delimiter !== "underscore") {
                    conflicts.push(['_emphasis_underscore' + suffix_newline + suffix_link, '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_emphasis_underscore' + suffix_newline + suffix_link, '_strong_emphasis_underscore' + suffix_newline + suffix_link, '_text_inline' + suffix_delimiter + suffix_link]);
                }

                if (newline) {
                    conflicts.push(['_html_comment', '_text_inline' + suffix_delimiter + suffix_link]); // TODO: no_newline
                    conflicts.push(['_cdata_section', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_declaration', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_processing_instruction', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_closing_tag', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_open_tag', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_link_text_non_empty', 'link_label', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_link_text_non_empty', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['_link_text', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['link_label', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['link_reference_definition', '_text_inline' + suffix_delimiter + suffix_link]);
                    conflicts.push(['hard_line_break', '_text_inline' + suffix_delimiter + suffix_link]);
                    grammar.rules['_text_inline' + suffix_delimiter + suffix_link] = $ => {
                        let elements = [
                            $._word,
                            punctuation_without($, link ? [] : ['[', ']']),
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
            
            grammar.rules['_emphasis_star' + suffix_newline + suffix_link] = $ => prec.dynamic(PRECEDENCE_LEVEL_EMPHASIS, seq($._emphasis_open_star, $['_inline' + suffix_newline + '_no_star' + suffix_link], $._emphasis_close_star));
            grammar.rules['_strong_emphasis_star' + suffix_newline + suffix_link] = $ => prec.dynamic(2 * PRECEDENCE_LEVEL_EMPHASIS, seq($._emphasis_open_star, $['_emphasis_star' + suffix_newline + suffix_link], $._emphasis_close_star));
            grammar.rules['_emphasis_underscore' + suffix_newline + suffix_link] = $ => prec.dynamic(PRECEDENCE_LEVEL_EMPHASIS, seq($._emphasis_open_underscore, $['_inline' + suffix_newline + '_no_underscore' + suffix_link], $._emphasis_close_underscore));
            grammar.rules['_strong_emphasis_underscore' + suffix_newline + suffix_link] = $ => prec.dynamic(2 * PRECEDENCE_LEVEL_EMPHASIS, seq($._emphasis_open_underscore, $['_emphasis_underscore' + suffix_newline + suffix_link], $._emphasis_close_underscore));
        }
        grammar.rules['_code_span' + suffix_newline] = $ => prec.dynamic(PRECEDENCE_LEVEL_CODE_SPAN, seq($._code_span_start, repeat(newline ? choice($._text, $._soft_line_break) : $._text), $._code_span_close));
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

// General purpose structure for html blocks. The different kinds mostly work the same but have
// different openling and closing conditions. Some html blocks may not interrupt a paragraph and
// have to be marked as such.
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

// Mostly the same as `build_html_block`, but for the case that the opening token contains a
// trailing newline.
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

// Utility function to create a case insensitive regex.
function regex_case_insensitive_list(ss) {
    return "(" + ss.map(x => regex_case_insensitive(x)).join("|") + ")";
}

// Utility function to create a case insensitive regex matching any of a list of strings.
function regex_case_insensitive(s) {
    return Array.from(s).map(x => "[" + x + x.toUpperCase() + "]").join("");
}

// Returns a rule that matches all characters that count as punctuation inside markdown, besides
// a list of excluded punctuation characters. Calling this function with a empty list as the second
// argument returns a rule that matches all punctuation.
function punctuation_without($, chars) {
    return seq(choice(...PUNCTUATION_CHARACTERS_ARRAY.filter(c => !chars.includes(c))), optional($._last_token_punctuation));
}

// Used to build a regex that matches html tags that do NOT have a tag name from a list of tag
// names.
//
// In particular this returns a regex that matches any string made up of ascii letters and
// characters specified in `classExtra`, but that is NOT part of the list of strings `ss`.
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

