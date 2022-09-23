==================
Empty union
==================

union s {}

---
(source_file (union_declaration (union) (identifier) (aggregate_body)))


==================
Union field
==================

union s {
	int x;
}

---
(source_file (union_declaration (union) (identifier)
	(aggregate_body (variable_declaration (type (int)) (declarator (identifier))))
))

==================
Union fields
==================

union s {
	int x;
	int y;
}

---
(source_file (union_declaration (union) (identifier)
	(aggregate_body
		(variable_declaration (type (int)) (declarator (identifier)))
		(variable_declaration (type (int)) (declarator (identifier)))
	)
))


==================
Anonymous union
==================

union {
	int x;
}

---
(source_file (union_declaration (union)
	(aggregate_body (variable_declaration (type (int)) (declarator (identifier))))
))

==================
Templated union
==================

union u (something) {
	int x;
}

---
(source_file (union_declaration (union)
	(identifier)
	(template_parameters (template_parameter (identifier)))
	(aggregate_body (variable_declaration (type (int)) (declarator (identifier))))
))

==================
Templated union with constraint
==================

union u (something) if (!something) {
	int x;
}

---
(source_file (union_declaration (union)
	(identifier)
	(template_parameters (template_parameter (identifier)))
	(constraint (if) (expression (unary_expression (identifier))))
	(aggregate_body (variable_declaration (type (int)) (declarator (identifier))))
))
