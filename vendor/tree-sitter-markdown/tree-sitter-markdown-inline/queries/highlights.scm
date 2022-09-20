;; From nvim-treesitter/nvim-treesitter
[
  (code_span)
  (link_title)
] @text.literal

[
  (emphasis_delimiter)
  (code_span_delimiter)
] @punctuation.delimiter

(emphasis) @text.emphasis

(strong_emphasis) @text.strong

[
  (link_destination)
  (uri_autolink)
] @text.uri

[
  (link_label)
  (link_text)
  (image_description)
] @text.reference

[
  (backslash_escape)
  (hard_line_break)
] @string.escape

; "(" not part of query because of
; https://github.com/nvim-treesitter/nvim-treesitter/issues/2206
; TODO: Find better fix for this
(image ["!" "[" "]" "("] @punctuation.delimiter)
(inline_link ["[" "]" "("] @punctuation.delimiter)
(shortcut_link ["[" "]"] @punctuation.delimiter)
