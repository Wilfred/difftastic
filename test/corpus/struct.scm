==================
Empty struct
==================

struct s {}

---
(source_file (struct_declaration (struct) (identifier) (aggregate_body)))


==================
Struct field
==================

struct s {
	int x;
}

---
(source_file (struct_declaration (struct) (identifier)
	(aggregate_body (variable_declaration (type (int)) (declarator (identifier))))
))

==================
Struct fields
==================

struct s {
	int x;
	int y;
}

---
(source_file (struct_declaration (struct) (identifier)
	(aggregate_body
		(variable_declaration (type (int)) (declarator (identifier)))
		(variable_declaration (type (int)) (declarator (identifier)))
	)
))

==================
Auto anonymous initialization
==================

auto s = { 0, "x" };

---
; This is indistinguishable from class, union, enum, etc.
(source_file
	(auto_declaration
		(storage_class (auto))
		(identifier)
		(aggregate_initializer
			(member_initializer (int_literal))
			(member_initializer (string_literal))
		)
	)
)

==================
Anonymous trailing comma initialization
==================

auto s = { 0, "x", };

---
(source_file
	(auto_declaration
		(storage_class (auto))
		(identifier)
		(aggregate_initializer
			(member_initializer (int_literal))
			(member_initializer (string_literal))
		)
	)
)

==================
Named field initialization
==================

auto s = { zero: 0, name: "x" };

---
; This is indistinguishable from class, union, enum, etc.
(source_file
	(auto_declaration
		(storage_class (auto))
		(identifier)
		(aggregate_initializer
			(member_initializer (identifier) (int_literal))
			(member_initializer (identifier) (string_literal))
		)
	)
)

==================
Named field trailing comma initialization
==================

auto s = { zero: 0, name: "x", };

---
; This is indistinguishable from class, union, enum, etc.
(source_file
	(auto_declaration
		(storage_class (auto))
		(identifier)
		(aggregate_initializer
			(member_initializer (identifier) (int_literal))
			(member_initializer (identifier) (string_literal))
		)
	)
)

