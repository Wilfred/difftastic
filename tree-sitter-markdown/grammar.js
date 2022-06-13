// This grammar only concerns the block structure according to the CommonMark Spec
// (https://spec.commonmark.org/0.30/#blocks-and-inlines)
// For more information see README.md

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

const PRECEDENCE_LEVEL_LINK = 1;

const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~';
const PUNCTUATION_CHARACTERS_ARRAY = [
    '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
    '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

module.exports = grammar({
    name: 'markdown',

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
            optional(field('heading_content', alias($._line, $.inline))),
            $._newline
        )),

        // A setext heading. The underlines are currently handled by the external scanner but maybe
        // could be parsed using normal tree-sitter rules.
        //
        // https://github.github.com/gfm/#setext-headings
        setext_heading: $ => seq(
            field('heading_content', $.paragraph),
            choice($.setext_h1_underline, $.setext_h2_underline),
            $._newline
        ),

        // An indented code block. An indented code block is made up of indented chunks and blank
        // lines. The indented chunks are handeled by the external scanner.
        //
        // https://github.github.com/gfm/#indented-code-blocks
        indented_code_block: $ => prec.right(seq($._indented_chunk, repeat(choice($._indented_chunk, $._blank_line)))),
        _indented_chunk: $ => seq($._indented_chunk_start, repeat(choice($._line, $._newline)), $._block_close, optional($._ignore_matching_tokens)),

        // A fenced code block. Fenced code blocks are mainly handled by the external scanner. In
        // case of backtick code blocks the external scanner also checks that the info string is
        // proper.
        //
        // https://github.github.com/gfm/#fenced-code-blocks
        fenced_code_block: $ => prec.right(choice(
            seq(
                alias($._fenced_code_block_start_backtick, $.fenced_code_block_delimiter),
                optional($._whitespace),
                optional($.info_string),
                $._newline,
                optional($.code_fence_content),
                optional(seq(alias($._fenced_code_block_end_backtick, $.fenced_code_block_delimiter), $._close_block, $._newline)),
                $._block_close,
            ),
            seq(
                alias($._fenced_code_block_start_tilde, $.fenced_code_block_delimiter),
                optional($._whitespace),
                optional($.info_string),
                $._newline,
                optional($.code_fence_content),
                optional(seq(alias($._fenced_code_block_end_tilde, $.fenced_code_block_delimiter), $._close_block, $._newline)),
                $._block_close,
            ),
        )),
        code_fence_content: $ => repeat1(choice($._newline, $._line)),
        info_string: $ => choice( // TODO: character references
            seq($.language, repeat(choice($._line, $.backslash_escape, $.entity_reference, $.numeric_character_reference))),
            seq(
                repeat1(choice('{', '}')),
                optional(choice(
                    seq($.language, repeat(choice($._line, $.backslash_escape, $.entity_reference, $.numeric_character_reference))),
                    seq($._whitespace, repeat(choice($._line, $.backslash_escape, $.entity_reference, $.numeric_character_reference))),
                ))
            )
        ),
        language: $ => prec.right(repeat1(choice($._word, punctuation_without($, ['{', '}']), $.backslash_escape, $.entity_reference, $.numeric_character_reference))),

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
                '[ \t]*<' + regex_case_insensitive_list(HTML_TAG_NAMES_RULE_1) + '([\\r\\n]|[ \\t>][^<\\r\\n]*(\\n|\\r\\n?)?)'
            ),
            new RegExp('</' + regex_case_insensitive_list(HTML_TAG_NAMES_RULE_1) + '>'),
            true
        ),
        _html_block_2: $ => build_html_block($, /[ \t]*<!--/, '-->', true),
        _html_block_3: $ => build_html_block($, /[ \t]*<\?/, '?>', true),
        _html_block_4: $ => build_html_block($, /[ \t]*<![A-Z]+/, '>', true),
        _html_block_5: $ => build_html_block($, /[ \t]*<!\[CDATA\[/, ']]>', true),
        _html_block_6: $ => choice(
            build_html_block(
                $,
                new RegExp(
                    '[ \t]*</?' + regex_case_insensitive_list(HTML_TAG_NAMES_RULE_7) + '([ \\t>]|/>)'
                ),
                seq($._newline, $._blank_line),
                true
            ),
            build_html_block_after_newline(
                $,
                new RegExp('[ \t]*</?' + regex_case_insensitive_list(HTML_TAG_NAMES_RULE_7) + '(\\n|\\r\\n?)'),
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
            '[ \t]*<'
            + negative_regex(HTML_TAG_NAMES_RULE_1.concat(HTML_TAG_NAMES_RULE_7), '0-9\\-', true)
            + '([ \\t]+[a-zA-Z_:][a-zA-Z0-9_\\.:\\-]*[ \\t]*=[ \\t]*([^ \\t\\r\\n"\'=<>`]+|\'[^\'\\r\\n]*\'|"[^"\\r\\n]*"))*[ \\t]*/?>[ \\t]'
        ),
        _open_tag_html_block_newline: $ => new RegExp(
            '[ \t]*<'
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
        link_label: $ => seq('[', repeat1(choice(
            $._word,
            punctuation_without($, ['[', ']']),
            $._whitespace,
            $.backslash_escape,
            $.entity_reference,
            $.numeric_character_reference,
            $._newline
        )), ']'),
        link_destination: $ => prec.dynamic(PRECEDENCE_LEVEL_LINK, choice(
            seq('<', repeat(choice($._text_no_angle, $.backslash_escape, $.entity_reference, $.numeric_character_reference)), '>'),
            seq(
                choice( // first character is not a '<'
                    choice($._word, punctuation_without($, ['<', '(', ')'])),
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
        _text_no_angle: $ => choice($._word, $._whitespace, punctuation_without($, ['<', '>'])),
        link_title: $ => choice( // TODO: escapes and character references
            seq('"', repeat(choice(
                $._word,
                $._whitespace,
                $.backslash_escape,
                $.entity_reference,
                $.numeric_character_reference,
                punctuation_without($, ['"']),
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), '"'),
            seq("'", repeat(choice(
                $._word,
                $._whitespace,
                $.backslash_escape,
                $.entity_reference,
                $.numeric_character_reference,
                punctuation_without($, ["'"]),
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), "'"),
            seq('(', repeat(choice(
                $._word,
                $._whitespace,
                $.backslash_escape,
                $.entity_reference,
                $.numeric_character_reference,
                punctuation_without($, ['(', ')']),
                seq($._newline, optional(seq($._blank_line, $._trigger_error)))
            )), ')'),
        ),

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
        paragraph: $ => seq(repeat1(choice(alias($._line, $.inline), $._soft_line_break)), $._paragraph_end_newline),
        _soft_line_break: $ => seq(
            $._newline_inline,
            repeat(choice($._split_token, $._soft_line_break_marker)),
            $._soft_line_break_marker,
            optional($._block_interrupt_paragraph), // not actually valid, we will error if it manages to match a block
        ),
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
            alias($._block_quote_start, $.block_quote_marker),
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
            prec(1, seq(
                $._blank_line,
                $._blank_line,
                $._close_block,
                optional($._ignore_matching_tokens)
            )),
            repeat1($._block),
        ),

        // Newlines as in the spec. Parsing a newline triggers the matching process by making
        // the external parser emit a `$._line_ending`.
        _newline_token: $ => /\n|\r\n?/,
        _newline: $ => prec.right(seq(
            $._newline_token,
            optional($._line_ending),
            optional($._ignore_matching_tokens)
        )),
        // Same as newline, but the actual character is marked as inline
        _newline_inline: $ => prec.right(seq(
            alias($._newline_token, $.inline),
            optional($._line_ending),
            optional($._ignore_matching_tokens)
        )),
        // Some symbols get parsed as single tokens so that html blocks get detected properly
        _line: $ => prec.right(repeat1(choice($._word, $._whitespace, punctuation_without($, [])))),
        _word: $ => new RegExp('[^' + PUNCTUATION_CHARACTERS_REGEX + ' \\t\\n\\r]+'),
        // The external scanner emits some characters that should just be ignored.
        _ignore_matching_tokens: $ => repeat1(choice($._block_continuation, alias($._block_quote_continuation, $.block_quote_marker))),
        _whitespace: $ => /[ \t]+/,

        backslash_escape: $ => new RegExp('\\\\[' + PUNCTUATION_CHARACTERS_REGEX + ']'),

        // HTML entity and numeric character references.
        //
        // The regex for entity references are build from the html_entities.json file.
        //
        // https://github.github.com/gfm/#entity-and-numeric-character-references
        entity_reference: $ => html_entity_regex(),
        numeric_character_reference: $ => /&#([0-9]{1,7}|[xX][0-9a-fA-F]{1,6});/,
    },

    externals: $ => [
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
        $._block_quote_continuation,

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

        // If we encounter a newline inside a paragraph exactly two `$._split_token` are emitted by
        // the external scanner. This way the current parser version gets split in two. In one of
        // the resulting parse versions we then also emit a `$._soft_line_break_marker` to be able
        // to differntiate the two versions.
        $._split_token,
        $._soft_line_break_marker,

        // An `$._error` token is never valid  and gets emmited to kill invalid parse branches. Concretely
        // this is used to decide wether a newline closes a paragraph and together and it gets emitted
        // when trying to parse the `$._trigger_error` token in `$.link_title`.
        $._error,
        $._trigger_error,
    ],
    precedences: $ => [
        [$.setext_heading, $._block],
        [$.indented_code_block, $._block],
    ],
    conflicts: $ => [
        // [$._soft_line_break, $._paragraph_end_newline],
        [$.link_reference_definition],
        [$.link_label, $._line],
        [$.link_reference_definition, $._line],
        [$._newline, $._newline_inline],
    ],
    extras: $ => [],
});

// General purpose structure for html blocks. The different kinds mostly work the same but have
// different openling and closing conditions. Some html blocks may not interrupt a paragraph and
// have to be marked as such.
function build_html_block($, open, close, interrupt_paragraph) {
    return seq(
        open,
        interrupt_paragraph ? $._open_block : $._open_block_dont_interrupt_paragraph,
        repeat(choice(
            $._line,
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
            $._line,
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

// Returns a rule that matches all characters that count as punctuation inside markdown, besides
// a list of excluded punctuation characters. Calling this function with a empty list as the second
// argument returns a rule that matches all punctuation.
function punctuation_without($, chars) {
    return choice(...PUNCTUATION_CHARACTERS_ARRAY.filter(c => !chars.includes(c)));
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
