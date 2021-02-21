; Keywords
[
    "if"
    "then"
    "else"
    "let"
    "in"
 ] @keyword.control.elm
(case) @keyword.control.elm
(of) @keyword.control.elm

(colon) @keyword.other.elm
(backslash) @keyword.other.elm
(as) @keyword.other.elm
(port) @keyword.other.elm
(exposing) @keyword.other.elm
(alias) @keyword.other.elm
(infix) @keyword.other.elm

(arrow) @keyword.operator.arrow.elm

(port) @keyword.other.port.elm

(type_annotation(lower_case_identifier) @entity.name.function.elm)
(port_annotation(lower_case_identifier) @entity.name.function.elm)

(operator_identifier) @keyword.operator.elm
(eq) @keyword.operator.assignment.elm


"(" @punctuation.section.braces.begin
")" @punctuation.section.braces.end

"|" @keyword.other.elm
"," @punctuation.separator.comma.elm

(import) @meta.import.elm
(module) @keyword.other.elm

(number_constant_expr) @constant.numeric.elm


(type) @keyword.type.elm
(type_declaration(upper_case_identifier) @storage.type.elm)
(union_variant(upper_case_identifier) @constant.type-constructor.elm)

; comments
(line_comment) @comment.line.double-dash.elm
(block_comment) @comment.block.elm

; strings
(string_escape) @constant.character.escape.elm

(open_quote) @punctuation.definition.string.begin.elm
(close_quote) @punctuation.definition.string.end.elm
(regular_string_part) @string.elm

(open_char) @punctuation.definition.char.begin.elm
(close_char) @punctuation.definition.char.end.elm


; glsl
(glsl_content) @source.glsl
