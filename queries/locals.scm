;; when using @local.reference, tree-sitter seems to 
;; apply the scope from the identifier it has looked up,
;; which makes sense for most languages.
;; however, we want to highlight things as function based on their call-site,
;; not their definition; therefore using TS's support for tracking locals
;; impedes our ability to get the highlighting we want.
;;
;; also, TS doesn't seem to support scoping as implemented in languages
;; with lazy let bindings, which results in syntax highlighting/goto-reference
;; results that depend on the order of definitions, which is counter to the
;; semantics of Nix.
;;
;; so for now we'll opt for not having any locals queries.
;;
;; see: https://github.com/tree-sitter/tree-sitter/issues/918

;(function_expression
;  universal: (identifier)? @local.definition
;  formals: (formals (formal name: (identifier) @local.definition)*)
;  universal: (identifier)? @local.definition
;  ) @local.scope
;
;(rec_attrset_expression
;  bind: (binding
;    attrpath: (attrpath . (attr_identifier) @local.definition)) 
;) @local.scope
;
;(let_expression
;  bind: (binding
;    attrpath: (attrpath . (attr_identifier) @local.definition)) 
;) @local.scope
;
;(identifier) @local.reference 
