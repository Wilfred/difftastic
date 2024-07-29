;
; These are the highlight queries used by the
; Nova editor (as of version 10).
;
; all forms of comment
(comment) @comment

; line directive
(directive) @processing
(shebang) @processing

(null) @value.null
[
(true)
(false)
] @value.boolean

[
(this)
(super)
] @keyword.self

(int_literal) @value.number
(float_literal) @value.number
(char_literal) @value.number ; not sure what is best for this
(special_keyword) @value.symbols
(htmlentity) @value.entity
(escape_sequence) @value.entity

[
	"("
	")"
	"["
	"]"
	"{"
	"}"
] @bracket

[
	(not_in)
	(not_is)
] @keyword.operator

[
	(lazy)
	(align)
	(extern)
	(static)
	(abstract)
	(final)
	(override)
	(synchronized)
	(auto)
	(scope)
	(gshared)
	(ref)
	(deprecated)
	(nothrow)
	(pure)
	(type_ctor)
] @keyword.modifier

; these are special only when it shows up here
(parameter_attribute (return) @keyword.modifier)
(parameter_attribute (in) @keyword.modifier)
(parameter_attribute (out) @keyword.modifier)

(function_declaration (identifier) @identifier.function)
(call_expression (type (identifier) @identifier.function))
(template_instance (identifier) @identifier.method)

[
	"/="
	"/"
	".."
	"..."
	"&"
	"&="
	"&&"
	"|"
	"|="
	"||"
	"-"
	"-="
	"--"
	"+"
	"+="
	"++"
	"<"
	"<="
	"<<"
	"<<="
	">"
	">="
	">>="
	">>>="
	">>"
	">>>"
	"!"
	"!="
	"?"
	"$"
	"="
	"=="
	"*"
	"*="
	"%"
	"%="
	"^"
	"^="
	"^^"
	"^^="
	"~"
	"~="
	"@"
	"=>"
] @operator

[
	(break)
	(case)
	(catch)
	(continue)
	(do)
	(default)
	(finally)
	(else)
	(goto)
	(if)
	(switch)
	(try)
] @keyword.control

; builtin types.  it would be nice to have a different markup for it.
[
	(void)
	(bool)
	(byte)
	(ubyte)
	(char)
	(short)
	(ushort)
	(wchar)
	(dchar)
	(int)
	(uint)
	(long)
	(ulong)
	(real)
	(double)
	(float)
	(size_t)
	(ptrdiff_t)
	(string)
	(cstring)
	(dstring)
	(wstring)
	(noreturn)
] @identifier.type.core

[
	(class)
	(struct)
	(interface)
	(union)
	(enum)
	(function)
	(delegate)
] @keyword.construct

; some editors (Helix) have a different selector for return statements.
; TODO: this keyword is sometimes a parameter attribute
(return) @keyword.control

; some editors (Helix) have a selector for imports
(import) @keyword.control

; some editors have a repeat keyword construct
[
	(for)
	(foreach)
	(foreach_reverse)
	(while)
] @keyword.control

(cast) @keyword.operator

[
	(abstract)
	(alias)
	(align)
	(asm)
	(assert)
	(auto)
	(cast)
	(debug)
	(delete)
	(deprecated)
	(export)
	(extern)
	(final)
	(invariant)
	(is)
	; "macro" - obsolete
	(mixin)
	(module)
	(new)
	(override)
	(pragma)
	(scope)
	(synchronized)
	(template)
	(throw)
	(typeid)
	(typeof)
	(unittest)
	(version)
	(with)
	(traits)
	(vector)
	(parameters_)
] @keyword

[
	(this)
	(super)
] @keyword.self

[
	(const)
	(immutable)
	(in)
	(inout)
	(lazy)
	(ref)
	(protected)
	(private)
	(package)
	(public)
	(pure)
	(gshared)
	(shared)
	(static)
] @keyword.modifier

[
	(cent)
	(ucent)
	(ireal)
	(idouble)
	(ifloat)
	(creal)
	(cdouble)
	(cfloat)
] @invalid ; these types are deprecated

(debug_condition (debug) (int_literal) @invalid) ; deprecated in 2.101
(debug_specification (debug) (int_literal) @invalid) ; deprecated in 2.101
(version_condition (version) (int_literal) @invalid) ; deprecated in 2.101
(version_specification (version) (int_literal) @invalid) ; deprecated in 2.101
(version_condition (identifier) @value.symbol)

(module_fqn) @processing ; this is a crummy workaround since we don't have anything for imports
(module_declaration (module_fqn)) @definition.package
(class_declaration (identifier) @identifier.type.class)
(struct_declaration (identifier) @identifier.type.struct)
(interface_declaration (identifier) @identifier.type.protocol)
(at_attribute) @identifier.property
; conventional naming
(type (identifier) @_type (#match? @_type "^[A-Z]")) @identifier.type.class
(type (identifier) @_type (#not-match? @_type "^[A-Z]")) @identifier.type
(enum_declaration (enum) . (identifier) @identifier.type.enum)
(auto_declaration (storage_class (auto)) . (identifier) @identifier.variable)
(manifest_declarator . (identifier) @identifier.constant)
(identifier) @identifier ; catch all
(declarator . (identifier) @identifier.variable)
(declarator "=" (void) @value.null)

((enum_member  . (identifier) @identifier.property) (#set! role enum-member))

(interpolation_expression "$(" @bracket)
(interpolation_expression) @string-template.value
(string_literal) @string
