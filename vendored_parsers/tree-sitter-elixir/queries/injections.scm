; Phoenix HTML template
((sigil
  (sigil_name) @_sigil_name
  (quoted_content) @injection.content)
 (#match? @_sigil_name "^(H|LVN)$")
 (#set! injection.language "heex")
 (#set! injection.combined))
