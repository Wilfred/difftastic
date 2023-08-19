=====================
Test 000
=====================
a b
---------------------

(source_file
	(text)
	(text))


=====================
Test 001
=====================
a b#a b
---------------------

(source_file
	(text)
	(text)
	(ident)
	(text))


=====================
Test 002
=====================
#if b {} else {}
---------------------

(source_file
	(branch
		(ident)
		(block)
		(block)))


=====================
Test 003
=====================
#if b {} elsa {}
---------------------

(source_file
	(branch
		(ident)
		(block))
	(text)
	(text))


=====================
Test 004
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
Test 005
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
Test 006
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
Test 007
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
Test 008
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
Test 009
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
Test 010
=====================
#a() Hello
---------------------

(source_file
	(call
		item: (ident)
		(group))
	(text))


=====================
Test 011
=====================
#a()Hello
---------------------

(source_file
	(call
		item: (ident)
		(group))
	(text))


=====================
Test 012
=====================
#a!Hello
---------------------

(source_file
	(ident)
	(text))


=====================
Test 013
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
Test 014
=====================
#[Hello World!]
---------------------

(source_file
	(content
		(text)
		(text)))


=====================
Test 015
=====================
#{a}
---------------------

(source_file
	(block
		(ident)))


=====================
Test 016
=====================
#(a, b)
---------------------

(source_file
	(group
		(ident)
		(ident)))


=====================
Test 017
=====================
#(a, c: b)
---------------------

(source_file
	(group
		(ident)
		(tagged
			field: (ident)
			(ident))))


=====================
Test 018
=====================
#hello(a, c: b)
---------------------

(source_file
	(call
		item: (ident)
		(group
			(ident)
			(tagged
				field: (ident)
				(ident)))))


=====================
Test 019
=====================
#hello(a, c: b)World
---------------------

(source_file
	(call
		item: (ident)
		(group
			(ident)
			(tagged
				field: (ident)
				(ident))))
	(text))


=====================
Test 020
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
Test 021
=====================
#if a {}

else {}
---------------------

(source_file
	(branch
		test: (ident)
		(block)
		(block)))


=====================
Test 022
=====================
#if a {}
elsa {}
---------------------

(source_file
	(branch
		test: (ident)
		(block))
	(text)
	(text))


=====================
Test 023
=====================
#if a {} elsee {}
---------------------

(source_file
	(branch
		test: (ident)
		(block))
	(text)
	(text))


=====================
Test 024
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
Test 025
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
Test 026
=====================
#if a[]{}
---------------------

(source_file
	(branch
		test: (call
			item: (ident)
			(content))
		(block)))


=====================
Test 027
=====================
#if a []{}
---------------------

(source_file
	(branch
		test: (ident)
		(content))
	(text))


=====================
Test 028
=====================
#if(a)[]{}
---------------------

(source_file
	(branch
		test: (call
			item: (group
				(ident))
			(content))
		(block)))


=====================
Test 029
=====================
#if(a) + b[]{}
---------------------

(source_file
	(branch
		test: (add
			(group
				(ident))
			(call
				item: (ident)
				(content)))
		(block)))


=====================
Test 030
=====================
*hello* world
---------------------

(source_file
	(strong
		(text))
	(text))


=====================
Test 031
=====================
_hello_ world
---------------------

(source_file
	(emph
		(text))
	(text))


=====================
Test 032
=====================
*hello _world_*
---------------------

(source_file
	(strong
		(text)
		(emph
			(text))))


=====================
Test 033
=====================
#ifa {}
---------------------

(source_file
	(ident)
	(text))


=====================
Test 034
=====================
#if a {} else {}()
---------------------

(source_file
	(call
		item: (branch
			test: (ident)
			(block)
			(block))
		(group)))


=====================
Test 035
=====================
#let a = b
---------------------

(source_file
	(let
		pattern: (ident)
		value: (ident)))


=====================
Test 036
=====================
#let a = b; Hello
---------------------

(source_file
	(let
		pattern: (ident)
		value: (ident))
	(text))


=====================
Test 037
=====================
#a; Hello
---------------------

(source_file
	(ident)
	(text))


=====================
Test 038
=====================
#{
	let a = b
	a + a
}
---------------------

(source_file
	(block
		(let
			pattern: (ident)
			value: (ident))
	(add
		(ident)
		(ident))))
