;; Taken from nvim-treesitter, under Apache license.
;; Upstream URL:https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/yaml/highlights.scm

(boolean_scalar) @boolean
(null_scalar) @constant.builtin
(double_quote_scalar) @string
(single_quote_scalar) @string
(block_scalar) @string
(string_scalar) @string
(escape_sequence) @string.escape
(integer_scalar) @number
(float_scalar) @number
(comment) @comment
(anchor_name) @type
(alias_name) @type
(tag) @type
(yaml_directive) @keyword
(ERROR) @error

(block_mapping_pair
  key: (flow_node [(double_quote_scalar) (single_quote_scalar)] @field))
(block_mapping_pair
  key: (flow_node (plain_scalar (string_scalar) @field)))

(flow_mapping
  (_ key: (flow_node [(double_quote_scalar) (single_quote_scalar)] @field)))
(flow_mapping
  (_ key: (flow_node (plain_scalar (string_scalar) @field))))

[
 ","
 "-"
 ":"
 ">"
 "?"
 "|"
] @punctuation.delimiter

[
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

[
 "*"
 "&"
 "---"
 "..."
] @punctuation.special
