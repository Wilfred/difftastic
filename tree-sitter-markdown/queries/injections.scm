; From nvim-treesitter/nvim-treesitter

(fenced_code_block
  (info_string
    (language) @injection.language)
  (code_fence_content) @injection.content)

((html_block) @injction.content (#set! @injection.language "html"))

(document . (section . (thematic_break) (_) @injection.content (thematic_break)) (#set! @injection.language "yaml"))
((inline) @injection.content (#set! @injection.language "markdown_inline"))

