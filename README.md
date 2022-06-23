# tree-sitter-markdown
A markdown parser for tree-sitter

For now this implements the [CommonMark Spec](https://spec.commonmark.org/). Maybe it will be extended to support [Github flavored markdown](https://github.github.com/gfm/)

## Structure

The parser is spit into two grammars. One for the [block structure](https://spec.commonmark.org/0.30/#blocks-and-inlines) which can be found in `/tree-sitter-markdown` and one for the [inline structure](https://spec.commonmark.org/0.30/#inlines) which is in `/tree-sitter-markdown-inline`.
Because of this the entire document has to be scanned twice in order to be fully parsed.
This is motivated by the [parsing strategy section](https://spec.commonmark.org/0.30/#appendix-a-parsing-strategy) of the CommonMark Spec which suggests doing exactly this: Parsing the document twice, first determining the block structure and then parsing any inline content.

It also helps managing complexity, which was a problem with earlier versions of this parser, by allowing block and inline structure to be considered seperately. This was not the case as tree-sitters dynamic precedence can create hard to predict effects.

## Usage

To use the two grammars, first parse the document with the block grammar. Then perform a second parse with the inline grammar using `ts_parser_set_included_ranges` to specify which parts are inline content. These parts are marked as `inline` nodes. Children of those inline nodes should be excluded from these ranges. For an example implementation see `lib.rs` in the `bindings` folder.
