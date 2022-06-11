[
  (
      (inline)+
      .
      (inline) @markdown_inline @combined
  )
  (inline) @markdown_inline
]

[
  (
    (info_string
      (language) @language)
    .
    (code_fence_content) @content)
  (
    (info_string
      (language) @language)
    (code_fence_content)+
    .
    (code_fence_content) @content @combined)
]
; [
;   (fenced_code_block
;     (info_string
;       (language) @language)
;     .
;     (code_fence_content) @content)
;   (fenced_code_block
;     (info_string
;       (language) @language)
;     (code_fence_content)+
;     .
;     (code_fence_content) @content @combined)
; ]

((html_block) @html)

((thematic_break) (_) @yaml @combined (thematic_break))
