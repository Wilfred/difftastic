# tree-sitter-markdown
A markdown parser for tree-sitter

For now this implements the [CommonMark Spec](https://spec.commonmark.org/). Maybe it will be extended to support [Github flavored markdown](https://github.github.com/gfm/)

## Structure

The parser is spit into two grammars. One for the [block structure](https://spec.commonmark.org/0.30/#blocks-and-inlines) which can be found in `/tree-sitter-markdown` and one for the [inline structure](https://spec.commonmark.org/0.30/#inlines) which is in `/tree-sitter-markdown-inline`.
Because of this the entire document has to be scanned twice in order to be fully parsed.
This is motivated by the [parsing strategy section](https://spec.commonmark.org/0.30/#appendix-a-parsing-strategy) of the CommonMark Spec which suggests doing exactly this: Parsing the document twice, first determining the block structure and then parsing any inline content.

It also helps managing complexity, which was a problem with earlier versions of this parser, by allowing block and inline structure to be considered seperately. This was not the case as tree-sitters dynamic precedence can create hard to predict effects.

## Usage

To use the two grammars, first parse the document with the block grammar. Then perform a second parse with the inline grammar using `ts_parser_set_included_ranges` to specify which parts are inline content. These parts are marked as `inline` nodes.
Nodes of that type that are children of the same node should be grouped together meaning each node that _contains_ `inline` nodes corresponds to one call to `ts_parser_set_included_ranges`.
This should look something like
```
block_tree := ts_parser_parse_string(block_parser, NULL, input, input_length)
parents := nodes of block_tree that contain nodes of type "inline"
for parent in parents do
    ranges := children of parent of type "inline"
    ts_parser_set_included_ranges(inline_parser, ranges, range_count)
end
inline_tree := ts_parser_parse_string(inline_parser, NULL, input, input_length)
```
