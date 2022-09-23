==================
Typeof expression
==================

auto t = typeof(0);

---
(source_file
		(auto_declaration
			(storage_class (auto))
			(identifier)
			(typeof_expression (typeof) (expression (int_literal)))
		)
)

==================
Typeof expression (return)
==================

auto t = typeof (return);

---
(source_file
	(auto_declaration
		(storage_class (auto))
		(identifier)
		(typeof_expression (typeof) (return))
	)
)
