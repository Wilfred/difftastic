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
		value: (comment)
		value: (number)))


=====================
Test 060
=====================
#let /* HEY */ a = 0
---------------------

(source_file
	(let
		pattern: (comment)
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


=====================
Test 062
=====================
#{
	set text()
}
---------------------

(source_file
	(block
		(set
			(call
				item: (builtin)
				(group)))))


=====================
Test 063
=====================
#{
	set text()


	[Hey]
}
---------------------

(source_file
	(block
		(set
			(call
				item: (builtin)
				(group)))
		(content
			(text))))


=====================
Test 064
=====================
#"a"4
---------------------

(source_file
	(string)
	(text))


=====================
Test 065
=====================
#"a\""4
---------------------

(source_file
	(string
		(escape))
	(text))


=====================
Test 066
=====================
#import "a"
---------------------

(source_file
	(import
		(string)))


=====================
Test 067
=====================
#import "a": a, b
---------------------

(source_file
	(import
		(string)
		(ident)
		(ident)))


=====================
Test 068
=====================
#(
	a
)
---------------------

(source_file
	(group
		(ident)))


=====================
Test 069
=====================
#(
	a,
)
---------------------

(source_file
	(group
		(ident)))


=====================
Test 070
=====================
#(
	a,


	o
)
---------------------

(source_file
	(group
		(ident)
		(ident)))


=====================
Test 071
=====================
#(
	b,
	c: d,
)
---------------------

(source_file
	(group
		(ident)
		(tagged
			field: (ident)
			(ident))))


=====================
Test 072
=====================
#include "a"     
---------------------

(source_file
	(include
		(string)))


=====================
Test 073
=====================
#let a = 0          
---------------------

(source_file
	(let
		pattern: (ident)
		value: (number)))


=====================
Test 074
=====================
#import "a";Hello
---------------------

(source_file
	(import
		(string))
	(text))


=====================
Test 075
=====================
#import "a"  ; Hello
---------------------

(source_file
	(import
		(string))
	(text))


=====================
Test 076
=====================
#(2 / 1 * 3)
---------------------

(source_file
	(group
		(mul
			(div
				(number)
				(number))
			(number))))


=====================
Test 077
=====================
#(2 - 1 * 3)
---------------------

(source_file
	(group
		(sub
			(number)
			(mul
				(number)
				(number)))))


=====================
Test 078
=====================
#(2 + - 1)
---------------------

(source_file
	(group
		(add
			(number)
			(sign
				(number)))))



=====================
Test 079
=====================
#(2 - - 1)
---------------------

(source_file
	(group
		(sub
			(number)
			(sign
				(number)))))


=====================
Test 080
=====================
#(0 in "0" not in a)
---------------------

(source_file
	(group
		(in
			(in
				(number)
				(string))
			(ident))))


=====================
Test 081
=====================
#if 2 > 1 []
---------------------

(source_file
	(branch
		test: (cmp
			(number)
			(number))
		(content)))


=====================
Test 082
=====================
#(3

+

4

)
---------------------

(source_file
	(group
		(add
			(number)
			(number))))


=====================
Test 083
=====================
#(
let


a

= 0


+2)
---------------------

(source_file
	(group
		(let
			pattern: (ident)
			value: (add
				(number)
				(number)))))


=====================
Test 084
=====================
#(a => a)
---------------------

(source_file
	(group
		(lambda
			pattern: (ident)
			value: (ident))))


=====================
Test 085
=====================
#range().map
---------------------

(source_file
	(field
		(call
			item: (ident)
			(group))
		field: (ident)))


=====================
Test 086
=====================
#if a {}

---------------------

(source_file
	(branch
		test: (ident)
		(block)))


=====================
Test 087
=====================
#{
 }
---------------------

(source_file
	(block))


=====================
Test 088
=====================
#"httpsgitlab.com"
---------------------

(source_file
	(string))


=====================
Test 089
=====================
#"https://gitlab.com"
---------------------

(source_file
	(string))


=====================
Test 090
=====================
#a-b
---------------------

(source_file
	(ident))


=====================
Test 091
=====================
#for i in a {}
---------------------

(source_file
	(for
		pattern: (ident)
		value: (ident)
		(block)))


=====================
Test 092
=====================
#{let x = 1; x + 2}
---------------------

(source_file
	(block
		(let
			pattern: (ident)
			value: (number))
		(add
			(ident)
			(number))))


=====================
Test 093
=====================
#[*Hey* there!]
---------------------

(source_file
	(content
		(strong
			(text))
		(text)))


=====================
Test 094
=====================
#let add(x, y) = x + y
Sum is #add(2, 3).
---------------------

(source_file
	(let
		pattern: (call
			item: (ident)
			(group
				(ident)
				(ident)))
		value: (add
			(ident)
			(ident)))
	(text)
	(text)
	(call
		item: (ident)
		(group
			(number)
			(number)))
	(text))


=====================
Test 095
=====================
#a. Hello
---------------------

(source_file
	(ident)
	(text)
	(text))


=====================
Test 096
=====================
#a._b_
---------------------

(source_file
	(field
		(ident)
		field: (ident)))


=====================
Test 097
=====================
#a._ b _
---------------------

(source_file
	(ident)
	(text)
	(emph
		(text)))


=====================
Test 098
=====================
#let (_, y) = (1, 2)
---------------------

(source_file
	(let
		pattern: (group
			(ident)
			(ident))
		value: (group
			(number)
			(number))))


=====================
Test 099
=====================
#let (a, .., b) = (1, 2, 3, 4)
---------------------

(source_file
	(let
		pattern: (group
			(ident)
			(elude)
			(ident))
		value: (group
			(number)
			(number)
			(number)
			(number))))


=====================
Test 100
=====================
#let (Homer, ..other) = books
---------------------

(source_file
	(let
		pattern: (group
			(ident)
			(elude
				(ident)))
		value: (ident)))


=====================
Test 101
=====================
#l.zip(r).map(
  ((a,b)) => a + b
)
---------------------

(source_file
	(call
		item: (field
			(call
				item: (field
					(ident)
					field: (ident))
				(group
					(ident)))
			field: (ident))
		(group
			(lambda
				pattern: (group
					(group
						(ident)
						(ident)))
				value: (add
					(ident)
					(ident))))))


=====================
Test 102
=====================
#(a, b => b)
---------------------

(source_file
	(group
		(ident)
		(lambda
			pattern: (ident)
			value: (ident))))


=====================
Test 103
=====================
#if a {}
else if b {}
else {}
---------------------

(source_file
	(branch
		test: (ident)
		(block)
		(branch
			test: (ident)
			(block)
			(block))))


=====================
Test 104
=====================
#while n < 10 {
	(n,)
}
---------------------

(source_file
	(while
		test: (cmp
			(ident)
			(number))
		(block
			(group
				(ident)))))


=====================
Test 105
=====================
```rust
fn main() {}
```
---------------------

(source_file
	(raw_blck
		lang: (ident)
		(blob)))


=====================
Test 106
=====================
Hello_World
---------------------

(source_file
	(text))


=====================
Test 107
=====================
Hello*World
---------------------

(source_file
	(text))


=====================
Test 108
=====================
_UNIX_.
---------------------

(source_file
	(emph
		(text))
	(text))


=====================
Test 109
=====================
0_\n2_
---------------------

(source_file
	(text)
	(emph
		(text
			(escape))))


=====================
Test 110
=====================
$a$
---------------------

(source_file
	(math
		(variable)))


=====================
Test 111
=====================
#true
---------------------

(source_file
	(bool))


=====================
Test 112
=====================
#(a
: "hey")
---------------------

(source_file
	(group
		(tagged
			field: (ident)
			(string))))


=====================
Test 113
=====================
= Hello World
Hey
---------------------

(source_file
	(heading
		(text)
		(text))
	(text))


=====================
Test 114
=====================
== Hello World
Hey
---------------------

(source_file
	(heading
		(text)
		(text))
	(text))


=====================
Test 115
=====================
= Hello\
World
---------------------

(source_file
	(heading
		(text)
		(line))
	(text))


=====================
Test 116
=====================
_
= Hello _World_
_
---------------------

(source_file
	(emph
		(heading
			(text)
			(emph
				(text)))))


=====================
Test 117
=====================
#let a() = {
  return 2
}
---------------------

(source_file
	(let
		pattern: (call
			item: (ident)
			(group))
		value: (block
			(return
				(number)))))


=====================
Test 118
=====================
#show par: set text(size: 3em)
---------------------

(source_file
	(show
		pattern: (builtin)
		value: (set
			(call
				item: (builtin)
				(group
					(tagged
						field: (ident)
						(number
							(unit))))))))


=====================
Test 119
=====================
\n
---------------------

(source_file
	(text
		(escape)))


=====================
Test 120
=====================
\u{1f600}
---------------------

(source_file
	(text
		(escape)))


=====================
Test 121
=====================
// Hello
---------------------

(source_file
	(comment))


=====================
Test 122
=====================
#show: columns.with(2)
---------------------

(source_file
	(show
		value: (call
			item: (field
				(ident)
				field: (ident))
			(group
				(number)))))


=====================
Test 123
=====================
#(a and b or not c)
---------------------

(source_file
	(group
		(or
			(and
				(ident)
				(ident))
			(not
				(ident)))))


=====================
Test 124
=====================
#<hello>
---------------------

(source_file
	(label))


=====================
Test 125
=====================
#<héllo>
---------------------

(source_file
	(label))


=====================
Test 126
=====================
#let Échö = 8
---------------------

(source_file
	(let
		pattern: (ident)
		value: (number)))


=====================
Test 127
=====================
#"Hello\u{fff}World"
---------------------

(source_file
	(string
		(escape)))


=====================
Test 128
=====================
*#e*
---------------------

(source_file
	(strong
		(ident)))


=====================
Test 129
=====================
** Hello ** World
---------------------

(source_file
	(strong)
	(text)
	(strong)
	(text))


=====================
Test 130
=====================
__ Hello ** World
---------------------

(source_file
	(emph)
	(text)
	(strong)
	(text))


=====================
Test 131
=====================
__ Hello $$ World
---------------------

(source_file
	(emph)
	(text)
	(math)
	(text))


=====================
Test 132
=====================
__** Hello $$$$ World
---------------------

(source_file
	(emph)
	(strong)
	(text)
	(math)
	(math)
	(text))


=====================
Test 133
=====================
#import "a": b,
c, d
---------------------

(source_file
	(import
		(string)
		(ident))
	(text)
	(text))


=====================
Test 134
=====================
#let a
= 0
---------------------

(source_file
	(let
		pattern: (ident))
	(text)
	(text))


=====================
Test 135
=====================
#(a: b
 )
---------------------

(source_file
	(group
		(tagged
			field: (ident)
			(ident))))


=====================
Test 136
=====================
#if a {}
else if b {}
---------------------

(source_file
	(branch
		test: (ident)
		(block)
		(branch
			test: (ident)
			(block))))


=====================
Test 137
=====================
#(2 /*Hello*/+ 3)
---------------------

(source_file
	(group
		(add
			(number)
			(comment)
			(number))))


=====================
Test 138
=====================
#{
	2
	+ 2
}
---------------------

(source_file
	(block
		(number)
		(sign
			(number))))


=====================
Test 139
=====================
#(b => b
)
---------------------

(source_file
	(group
		(lambda
			pattern: (ident)
			value: (ident))))


=====================
Test 140
=====================
#(..b
)
---------------------

(source_file
	(group
		(elude
			(ident))))


=====================
Test 141
=====================
#(not b
)
---------------------

(source_file
	(group
		(not
			(ident))))


=====================
Test 142
=====================
#(b = c)
---------------------

(source_file
	(group
		(assign
			pattern: (ident)
			value: (ident))))


=====================
Test 143
=====================
#(b = c
)
---------------------

(source_file
	(group
		(assign
			pattern: (ident)
			value: (ident))))


=====================
Test 144
=====================
#(let a
=b = c
)
---------------------

(source_file
	(group
		(let
			pattern: (ident)
			value: (assign
				pattern: (ident)
				value: (ident)))))


=====================
Test 145
=====================
https://example.com
---------------------

(source_file
	(url))


=====================
Test 146
=====================
https://hello\ world.com
---------------------

(source_file
	(url)
	(line)
	(text))


=====================
Test 147
=====================
https://hello\ world.com Hey
---------------------

(source_file
	(url)
	(line)
	(text)
	(text))


=====================
Test 148
=====================
#[= Hello]
---------------------

(source_file
	(content
		(heading
			(text))))


=====================
Test 149
=====================
#if true {}
/* Hey */ else {}
---------------------

(source_file
	(branch
		test: (bool)
		(block))
	(comment)
	(text)
	(text))


=====================
Test 150
=====================
#return 0 Hello
---------------------

(source_file
	(return
		(number))
	(text))


=====================
Test 151
=====================
#return; 0 Hello
---------------------

(source_file
	(return)
	(text)
	(text))


=====================
Test 152
=====================
- a
- a
- a
---------------------

(source_file
	(item
		(text))
	(item
		(text))
	(item
		(text)))


=====================
Test 153
=====================
- e
 - o
---------------------

(source_file
	(item
		(text)
		(item
			(text))))


=====================
Test 154
=====================
- e
 - o
f
---------------------

(source_file
	(item
		(text)
		(item
			(text)))
	(text))


=====================
Test 155
=====================
- e
  - o
 f
---------------------

(source_file
	(item
		(text)
		(item
			(text))
		(text)))


=====================
Test 156
=====================
  - e
  - o
 f
---------------------

(source_file
	(item
		(text))
	(item
		(text))
	(text))


=====================
Test 157
=====================
- e

 e
---------------------

(source_file
	(item
		(text)
		(break)
		(text)))


=====================
Test 158
=====================
-
 -
  -
---------------------

(source_file
	(item
		(item
			(item))))


=====================
Test 159
=====================
  - e
   - o
  - f
---------------------

(source_file
	(item
		(text)
		(item
			(text)))
	(item
		(text)))


=====================
Test 160
=====================
#[
-
 -
]
---------------------

(source_file
	(content
		(item
			(item))))


=====================
Test 161
=====================
#[
-
 - ]
---------------------

(source_file
	(content
		(item
			(item))))


=====================
Test 162
=====================
#[- Hello
  - World]
---------------------

(source_file
	(content
		(item
			(text))
		(item
			(text))))


=====================
Test 163
=====================
Hello
#[
	- Hello
- World]
---------------------

(source_file
	(text)
	(content
		(item
			(text))
		(item
			(text))))


=====================
Test 164
=====================
Hello
#[- Hello - World]
---------------------

(source_file
	(text)
	(content
		(item
			(text)
			(text)
			(text))))


=====================
Test 165
=====================
    #[
] - e
---------------------

(source_file
	(content)
	(text)
	(text))


=====================
Test 166
=====================
2.
+
 000.
---------------------

(source_file
	(item)
	(item
		(item)))


=====================
Test 167
=====================
   #[- Hello]
---------------------

(source_file
	(content
		(item
			(text))))


=====================
Test 168
=====================
*
- Hello
*
---------------------

(source_file
	(strong
		(item
			(text))))


=====================
Test 169
=====================
*
 - Hello
*
---------------------

(source_file
	(strong
		(item
			(text))))


=====================
Test 170
=====================
-
 -
 **
---------------------

(source_file
	(item
		(item)
		(strong)))


=====================
Test 171
=====================
]
---------------------

(source_file
	(text))


=====================
Test 172
=====================
/ Hello:World
---------------------

(source_file
	(term
		term: (text)
		(text)))


=====================
Test 173
=====================
/Hello:World
---------------------

(source_file
	(text))


=====================
Test 174
=====================
-Hello
---------------------

(source_file
	(text))


=====================
Test 175
=====================
=Hello
---------------------

(source_file
	(text))


=====================
Test 176
=====================
<études>
---------------------

(source_file
	(label))


=====================
Test 177
=====================
@études
---------------------

(source_file
	(ref))


=====================
Test 178
=====================
Hello-?World
---------------------

(source_file
	(text)
	(symbol)
	(text))


=====================
Test 179
=====================
$2 ^ 4 * 8$
---------------------

(source_file
	(math
		(mul
			(attach
				(number)
				sup: (number))
			(number))))


=====================
Test 180
=====================
$2 ^ 4 _ 8$
---------------------

(source_file
	(math
		(attach
			(number)
			sup: (number)
			sub: (number))))


=====================
Test 181
=====================
$1_2_3$
---------------------

(source_file
	(math
		(attach
			(number)
			sub: (attach
				(number)
				sub: (number)))))


=====================
Test 182
=====================
$(3  )$
---------------------

(source_file
	(math
		(group
			(number))))


=====================
Test 183
=====================
$3  $
---------------------

(source_file
	(math
		(number)))


=====================
Test 184
=====================
$lim  $
---------------------

(source_file
	(math
		(ident)))


=====================
Test 185
=====================
$x + 2$
---------------------

(source_file
	(math
		(add
			(variable)
			(number))))


=====================
Test 186
=====================
$x + ($
---------------------

(source_file
	(math
		(add
			(variable)
			(group))))


=====================
Test 187
=====================
$x + (  $
---------------------

(source_file
	(math
		(add
			(variable)
			(group))))


=====================
Test 188
=====================
$2^[4 * 2$
---------------------

(source_file
	(math
		(attach
			(number)
				sup: (group
					(mul
						(number)
						(number))))))


=====================
Test 189
=====================
$2^+2$
---------------------

(source_file
	(math
		(attach
			(number)
			sup: (symbol))
		(number)))


=====================
Test 190
=====================
$eq.not$
---------------------

(source_file
	(math
		(field
			(ident)
			(ident))))


=====================
Test 191
=====================
$eq.not(0)$
---------------------

(source_file
	(math
		(item_call
			(field
				(ident)
				(ident))
			(number))))


=====================
Test 192
=====================
$y[5)$
---------------------

(source_file
	(math
		(call
			(variable)
			(number))))


=====================
Test 193
=====================
$3[5)$
---------------------

(source_file
	(math
		(number)
		(group
			(number))))


=====================
Test 194
=====================
$1^\=()$
---------------------

(source_file
	(math
		(attach
			(number)
			sup: (call
				(variable
					(escape))))))


=====================
Test 195
=====================
$1^"hello"()$
---------------------

(source_file
	(math
		(attach
			(number)
			sup: (call
				(variable
					(string))))))


=====================
Test 196
=====================
$
  #let x = 0
  #x
$
---------------------

(source_file
	(math
		(let
			pattern: (ident)
			value: (number))
		(ident)))


=====================
Test 197
=====================
$ x $
---------------------

(source_file
	(math
		(variable)))


=====================
Test 198
=====================
$ cal(A) :=
    { x in RR | x "is natural" } $
---------------------

(source_file
	(math
		(item_call
			(ident)
			(variable))
		(symbol)
		(group
			(variable)
			(ident)
			(ident)
			(group
				(variable)
				(variable
					(string))))))


=====================
Test 199
=====================
#(
 )
---------------------

(source_file
	(group))


=====================
Test 200
=====================
#( "e e": ())
---------------------

(source_file
	(group
		(tagged
			field: (string)
			(group))))


=====================
Test 201
=====================
Hello "World"
---------------------

(source_file
	(text)
	(quote)
	(text)
	(quote))


=====================
Test 202
=====================
Hello"World"
---------------------

(source_file
	(text)
	(quote))


=====================
Test 203
=====================
$||a|b$
---------------------

(source_file
	(math
		(group
			(variable))
		(variable)))


=====================
Test 204
=====================
$||a b$
---------------------

(source_file
	(math
		(group
			(variable)
			(variable))))


=====================
Test 205
=====================
$2^3!a$
---------------------

(source_file
	(math
		(attach
			(number)
			sup: (fac
				(number)))
		(variable)))


=====================
Test 206
=====================
#import "a." + "typ": b, c
---------------------

(source_file
	(import
		(add
			(string)
			(string))
		(ident)
		(ident)))


=====================
Test 207
=====================
#(a not  /* hey */ in b)
---------------------

(source_file
	(group
		(in
			(ident)
			(comment)
			(ident))))


=====================
Test 208
=====================
$1 + n n$
---------------------

(source_file
	(math
		(add
			(number)
			(variable))
		(variable)))


=====================
Test 209
=====================
$ := { | } $
---------------------

(source_file
	(math
		(symbol)
		(group
			(group))))


=====================
Test 210
=====================
#(import
"a"
:
b)
---------------------

(source_file
	(group
		(import
			(string)
			(ident))))


=====================
Test 211
=====================
$lim_3$
---------------------

(source_file
	(math
		(attach
			(ident)
			sub: (number))))


=====================
Test 212
=====================
https://typst.app/
---------------------

(source_file
	(url))


=====================
Test 213
=====================
https://www.youtube.com/watch?v=sWmlbMh3ol8
---------------------

(source_file
	(url))


=====================
Test 214
=====================
https://www.youtube.com/watch?v=sWmlbMh3ol8 Hello
---------------------

(source_file
	(url)
	(text))


=====================
Test 215
=====================
*https://example.org* Hello*
---------------------

(source_file
	(strong
		(url)
		(text)))


=====================
Test 216
=====================
https://[)
---------------------

(source_file
	(url)
	(text))


=====================
Test 217
=====================
*
	(https://[])
*
---------------------

(source_file
	(strong
		(text)
		(url)
		(text)))


=====================
Test 218
=====================
* #a
= Hello
*
---------------------

(source_file
	(strong
		(ident)
		(heading
			(text))))


=====================
Test 219
=====================
_
- Hello _World_
_
---------------------

(source_file
	(emph
		(item
			(text)
			(emph
				(text)))))


=====================
Test 220
=====================
_ + e _
---------------------

(source_file
	(emph
		(text)
		(text)))


=====================
Test 221
=====================
_ #e + Hello _
---------------------

(source_file
	(emph
		(ident)
		(text)
		(text)))


=====================
Test 222
=====================
*
 - Hello
 *
---------------------

(source_file
	(strong
		(item
			(text))))


=====================
Test 223
=====================
/*Hello*/= World
---------------------

(source_file
	(comment)
	(heading
		(text)))


=====================
Test ___
=====================
---------------------

(source_file
	)
