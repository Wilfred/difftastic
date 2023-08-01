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
Test 20
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


=====================
Test 21
=====================
#if a {} else {}
---------------------

(source_file
	(branch
		test: (ident)
		(block)
		(block)))


=====================
Test 22
=====================
#if a {} elsa {}
---------------------

(source_file
	(condition
		test: (ident)
		(block))
	(text)
	(text))


=====================
Test 23
=====================
#if a {} elsee {}
---------------------

(source_file
	(condition
		test: (ident)
		(block))
	(text)
	(text))


=====================
Test 24
=====================
a b
c

d e
---------------------

(source_file
	(text)
	(text)
	(text)
	(break)
	(text)
	(text))


=====================
Test 25
=====================
#if a{}


else[]
---------------------

(source_file
	(branch
		test: (ident)
		(block)
		(content)))


=====================
Test 26
=====================
#if a[]{}
---------------------

(source_file
	(condition
		test: (call
			item: (ident)
			(content))
		(block)))


=====================
Test 27
=====================
#if a []{}
---------------------

(source_file
	(condition
		test: (ident)
		(content))
	(text))


=====================
Test 28
=====================
#if(a)[]{}
---------------------

(source_file
	(condition
		test: (call
			item: (group
				(ident))
			(content))
		(block)))


=====================
Test 29
=====================
#if(a) + b[]{}
---------------------

(source_file
	(condition
		test: (add
			(group
				(ident))
			(call
				item: (ident)
				(content)))
		(block)))


=====================
Test 30
=====================
*hello* world
---------------------

(source_file
	(strong
		(text))
	(text))


=====================
Test 31
=====================
_hello_ world
---------------------

(source_file
	(emph
		(text))
	(text))


=====================
Test 32
=====================
*hello _world_*
---------------------

(source_file
	(strong
		(text)
		(emph
			(text))))


=====================
Test 33
=====================
#ifa {}
---------------------

(source_file
	(ident)
	(text))
