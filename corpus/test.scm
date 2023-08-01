=====================
Test 01
=====================
a b
---------------------

(source_file
	(text)
	(text))


=====================
Test 02
=====================
#a b
---------------------

(source_file
	(ident)
	(text))


=====================
Test 03
=====================
Hello #hey World!
---------------------

(source_file
	(text)
	(ident)
	(text))


=====================
Test 04
=====================
Hello #a + b World!
---------------------

(source_file
	(text)
	(ident)
	(text)
	(text)
	(text))


=====================
Test 05
=====================
Hello #(a + b) World!
---------------------

(source_file
	(text)
	(group
		(add
			(ident)
			(ident)))
	(text))


=====================
Test 06
=====================
#(a + b + c)
---------------------

(source_file
	(group
		(add
			(add
				(ident)
				(ident))
			(ident))))


=====================
Test 07
=====================
#(a + b * c)
---------------------

(source_file
	(group
		(add
			(ident)
			(mul
				(ident)
				(ident)))))


=====================
Test 08
=====================
#(a * b + c)
---------------------

(source_file
	(group
		(add
			(mul
				(ident)
				(ident))
			(ident))))


=====================
Test 09
=====================
#(a() + c)
---------------------

(source_file
	(group
		(add
			(call
				item: (ident)
				(group))
			(ident))))


=====================
Test 10
=====================
#a() Hello
---------------------

(source_file
	(call
		item: (ident)
		(group))
	(text))


=====================
Test 11
=====================
#a()Hello
---------------------

(source_file
	(call
		item: (ident)
		(group))
	(text))


=====================
Test 12
=====================
#a!Hello
---------------------

(source_file
	(ident)
	(text))


=====================
Test 13
=====================
#a()()Hello
---------------------

(source_file
	(call
		item: (call
			item: (ident)
			(group))
		(group))
	(text))


=====================
Test 14
=====================
#[Hello World!]
---------------------

(source_file
	(content
		(text)
		(text)))


=====================
Test 15
=====================
#{a}
---------------------

(source_file
	(block
		(ident)))


=====================
Test 16
=====================
#(a, b)
---------------------

(source_file
	(group
		(ident)
		(ident)))


=====================
Test 17
=====================
#(a, c: b)
---------------------

(source_file
	(group
		(ident)
		(field
			field: (ident)
			(ident))))


=====================
Test 18
=====================
#hello(a, c: b)
---------------------

(source_file
	(call
		item: (ident)
		(group
			(ident)
			(field
				field: (ident)
				(ident)))))


=====================
Test 19
=====================
#hello(a, c: b)World
---------------------

(source_file
	(call
		item: (ident)
		(group
			(ident)
			(field
				field: (ident)
				(ident))))
	(text))


=====================
Test 19
=====================
#hello()[World]
---------------------

(source_file
	(call
		item:
		(call
			item: (ident)
			(group))	
		(content
			(text))))
