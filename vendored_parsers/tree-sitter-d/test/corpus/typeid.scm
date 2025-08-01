==================
Typeid expression
==================

auto t = typeid (0);

---
(source_file
	(auto_declaration
		(storage_class (auto))
		(identifier)
		(typeid_expression (typeid) (expression (int_literal)))
	)
)

==================
Typeid expression (type)
==================

auto t = typeid (shared(myType));

---
(source_file
	(auto_declaration
		(storage_class (auto))
		(identifier)
		(typeid_expression (typeid) (type (type_ctor (shared)) (type (identifier))))
	)
)
