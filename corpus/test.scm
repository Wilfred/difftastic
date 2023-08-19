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


=====================
Test 039
=====================
#(4.2)
---------------------

(source_file
	(group
		(number)))


=====================
Test 040
=====================
#(4.2em)
---------------------

(source_file
	(group
		(number
			(unit))))


=====================
Test 041
=====================
#3
---------------------

(source_file
	(number))


=====================
Test 042
=====================
#3.2
---------------------

(source_file
	(number))


=====================
Test 043
=====================
#a.b
---------------------

(source_file
	(field
		(ident)
		field: (ident)))


=====================
Test 044
=====================
H #a

W
---------------------

(source_file
	(text)
	(ident)
	(break)
	(text))


=====================
Test 045
=====================
Hello #a
World
---------------------

(source_file
	(text)
	(ident)
	(text))


=====================
Test 046
=====================
Hello #a




World
---------------------

(source_file
	(text)
	(ident)
	(break)
	(text))


=====================
Test 047
=====================
*_hello_ world*
---------------------

(source_file
	(strong
		(emph
			(text))
		(text)))


=====================
Test 048
=====================
*_*hello*_ world*
---------------------

(source_file
	(strong
		(emph
			(strong
				(text)))
		(text)))


=====================
Test 049
=====================
Hello\nWorld
---------------------

(source_file
	(text
		(escape)))


=====================
Test 050
=====================
Hello\#World
---------------------

(source_file
	(text
		(escape)))


=====================
Test 051
=====================
#[
	Hello
]
---------------------

(source_file
	(content
		(text)))


=====================
Test 052
=====================


a b


---------------------

(source_file
	(break)
	(text)
	(text)
	(break))


=====================
Test 053
=====================
a#[

b

]c
---------------------

(source_file
	(text)
	(content
		(break)
		(text)
		(break))
	(text))


=====================
Test 054
=====================
a#[
b

]c
---------------------

(source_file
	(text)
	(content
		(text)
		(break))
	(text))


=====================
Test 055
=====================
a#[
b
]c
---------------------

(source_file
	(text)
	(content
		(text))
	(text))


=====================
Test 056
=====================
a

---------------------

(source_file
	(text))


=====================
Test 057
=====================
// Hey
---------------------

(source_file
	(comment))


=====================
Test 058
=====================
// Hey


---------------------

(source_file
	(comment))


=====================
Test 059
=====================
#let a =/* Hey*/ 0
---------------------

(source_file
	(let
		pattern: (ident)
		(comment)
		value: (number)))


=====================
Test 060
=====================
#let /* HEY */ a = 0
---------------------

(source_file
	(let
		(comment)
		pattern: (ident)
		value: (number)))


=====================
Test 061
=====================
#set text(a: 0)
---------------------

(source_file
	(set
		(call
			item: (builtin)
			(group
				(tagged
					field: (ident)
					(number))))))
