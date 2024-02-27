=====================
positive/000
=====================
a b
---------------------

(source_file
	(text))


=====================
positive/001
=====================
a b#a b
---------------------

(source_file
	(text)
	(ident)
	(text))


=====================
positive/002
=====================
#if b {} else {}
---------------------

(source_file
	(branch
		condition: (ident)
		(block)
		(block)))


=====================
positive/003
=====================
#if b {} elsa {}
---------------------

(source_file
	(branch
		condition: (ident)
		(block))
	(text))


=====================
positive/004
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
positive/005
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
positive/006
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
positive/007
=====================
Hello #a + b World!
---------------------

(source_file
	(text)
	(ident)
	(text))


=====================
positive/008
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
positive/009
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
positive/010
=====================
#a() Hello
---------------------

(source_file
	(call
		item: (ident)
		(group))
	(text))


=====================
positive/011
=====================
#a()Hello
---------------------

(source_file
	(call
		item: (ident)
		(group))
	(text))


=====================
positive/012
=====================
#a!Hello
---------------------

(source_file
	(ident)
	(text))


=====================
positive/013
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
positive/014
=====================
#[Hello World!]
---------------------

(source_file
	(content
		(text)))


=====================
positive/015
=====================
#{a}
---------------------

(source_file
	(block
		(ident)))


=====================
positive/016
=====================
#(a, b)
---------------------

(source_file
	(group
		(ident)
		(ident)))


=====================
positive/017
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
positive/018
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
positive/019
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
positive/020
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
positive/021
=====================
#if a {}

else {}
---------------------

(source_file
	(branch
		condition: (ident)
		(block))
	(parbreak)
	(text))


=====================
positive/022
=====================
#if a {}
elsa {}
---------------------

(source_file
	(branch
		condition: (ident)
		(block))
	(text))


=====================
positive/023
=====================
#if a {} elsee {}
---------------------

(source_file
	(branch
		condition: (ident)
		(block))
	(text))


=====================
positive/024
=====================
a b
c

d e
---------------------

(source_file
	(text)
	(text)
	(parbreak)
	(text))


=====================
positive/025
=====================
#if a{}


else[]
---------------------

(source_file
	(branch
		condition: (ident)
		(block))
	(parbreak)
	(text)
	(text)
	(text))


=====================
positive/026
=====================
#if a[]{}
---------------------

(source_file
	(branch
		condition: (call
			item: (ident)
			(content))
		(block)))


=====================
positive/027
=====================
#if a []{}
---------------------

(source_file
	(branch
		condition: (ident)
		(content))
	(text))


=====================
positive/028
=====================
#if(a)[]{}
---------------------

(source_file
	(branch
		condition: (call
			item: (group
				(ident))
			(content))
		(block)))


=====================
positive/029
=====================
#if(a) + b[]{}
---------------------

(source_file
	(branch
		condition: (add
			(group
				(ident))
			(call
				item: (ident)
				(content)))
		(block)))


=====================
positive/030
=====================
*hello* world
---------------------

(source_file
	(strong
		(text))
	(text))


=====================
positive/031
=====================
_hello_ world
---------------------

(source_file
	(emph
		(text))
	(text))


=====================
positive/032
=====================
*hello _world_*
---------------------

(source_file
	(strong
		(text)
		(emph
			(text))))


=====================
positive/033
=====================
#ifa {}
---------------------

(source_file
	(ident)
	(text))


=====================
positive/034
=====================
#if a {} else {}()
---------------------

(source_file
	(call
		item: (branch
			condition: (ident)
			(block)
			(block))
		(group)))


=====================
positive/035
=====================
#let a = b
---------------------

(source_file
	(let
		pattern: (ident)
		value: (ident)))


=====================
positive/036
=====================
#let a = b; Hello
---------------------

(source_file
	(let
		pattern: (ident)
		value: (ident))
	(text))


=====================
positive/037
=====================
#a; Hello
---------------------

(source_file
	(ident)
	(text))


=====================
positive/038
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
positive/039
=====================
#(4.2)
---------------------

(source_file
	(group
		(number)))


=====================
positive/040
=====================
#(4.2em)
---------------------

(source_file
	(group
		(number
			(unit))))


=====================
positive/041
=====================
#3
---------------------

(source_file
	(number))


=====================
positive/042
=====================
#3.2
---------------------

(source_file
	(number))


=====================
positive/043
=====================
#a.b
---------------------

(source_file
	(field
		(ident)
		field: (ident)))


=====================
positive/044
=====================
H #a

W
---------------------

(source_file
	(text)
	(ident)
	(parbreak)
	(text))


=====================
positive/045
=====================
Hello #a
World
---------------------

(source_file
	(text)
	(ident)
	(text))


=====================
positive/046
=====================
Hello #a




World
---------------------

(source_file
	(text)
	(ident)
	(parbreak)
	(text))


=====================
positive/047
=====================
*_hello_ world*
---------------------

(source_file
	(strong
		(emph
			(text))
		(text)))


=====================
positive/048
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
positive/049
=====================
Hello\nWorld
---------------------

(source_file
	(text
		(escape)))


=====================
positive/050
=====================
Hello\#World
---------------------

(source_file
	(text
		(escape)))


=====================
positive/051
=====================
#[
	Hello
]
---------------------

(source_file
	(content
		(text)))


=====================
positive/052
=====================


a b


---------------------

(source_file
	(parbreak)
	(text)
	(parbreak))


=====================
positive/053
=====================
a#[

b

]c
---------------------

(source_file
	(text)
	(content
		(parbreak)
		(text)
		(parbreak))
	(text))


=====================
positive/054
=====================
a#[
b

]c
---------------------

(source_file
	(text)
	(content
		(text)
		(parbreak))
	(text))


=====================
positive/055
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
positive/056
=====================
a

---------------------

(source_file
	(text))


=====================
positive/057
=====================
// Hey
---------------------

(source_file
	(comment))


=====================
positive/058
=====================
// Hey


---------------------

(source_file
	(comment)
	(parbreak))


=====================
positive/059
=====================
#let a =/* Hey*/ 0
---------------------

(source_file
	(let
		pattern: (ident)
		(comment)
		value: (number)))


=====================
positive/060
=====================
#let /* HEY */ a = 0
---------------------

(source_file
	(let
		(comment)
		pattern: (ident)
		value: (number)))


=====================
positive/061
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
positive/062
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
positive/063
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
positive/064
=====================
#"a"4
---------------------

(source_file
	(string)
	(text))


=====================
positive/065
=====================
#"a\""4
---------------------

(source_file
	(string
		(escape))
	(text))


=====================
positive/066
=====================
#import "a"
---------------------

(source_file
	(import
		(string)))


=====================
positive/067
=====================
#import "a": a, b
---------------------

(source_file
	(import
		(string)
		(ident)
		(ident)))


=====================
positive/068
=====================
#(
	a
)
---------------------

(source_file
	(group
		(ident)))


=====================
positive/069
=====================
#(
	a,
)
---------------------

(source_file
	(group
		(ident)))


=====================
positive/070
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
positive/071
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
positive/072
=====================
#include "a"     
---------------------

(source_file
	(include
		(string)))


=====================
positive/073
=====================
#let a = 0          
---------------------

(source_file
	(let
		pattern: (ident)
		value: (number)))


=====================
positive/074
=====================
#import "a";Hello
---------------------

(source_file
	(import
		(string))
	(text))


=====================
positive/075
=====================
#import "a"  ; Hello
---------------------

(source_file
	(import
		(string))
	(text))


=====================
positive/076
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
positive/077
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
positive/078
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
positive/079
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
positive/080
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
positive/081
=====================
#if 2 > 1 []
---------------------

(source_file
	(branch
		condition: (cmp
			(number)
			(number))
		(content)))


=====================
positive/082
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
positive/083
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
positive/084
=====================
#(a => a)
---------------------

(source_file
	(group
		(lambda
			pattern: (ident)
			value: (ident))))


=====================
positive/085
=====================
#range().map
---------------------

(source_file
	(field
		(call
			item: (builtin)
			(group))
		field: (ident)))


=====================
positive/086
=====================
#if a {}

---------------------

(source_file
	(branch
		condition: (ident)
		(block)))


=====================
positive/087
=====================
#{
 }
---------------------

(source_file
	(block))


=====================
positive/088
=====================
#"httpsgitlab.com"
---------------------

(source_file
	(string))


=====================
positive/089
=====================
#"https://gitlab.com"
---------------------

(source_file
	(string))


=====================
positive/090
=====================
#a-b
---------------------

(source_file
	(ident))


=====================
positive/091
=====================
#for i in a {}
---------------------

(source_file
	(for
		pattern: (ident)
		value: (ident)
		(block)))


=====================
positive/092
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
positive/093
=====================
#[*Hey* there!]
---------------------

(source_file
	(content
		(strong
			(text))
		(text)))


=====================
positive/094
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
	(call
		item: (ident)
		(group
			(number)
			(number)))
	(text))


=====================
positive/095
=====================
#a. Hello
---------------------

(source_file
	(ident)
	(text))


=====================
positive/096
=====================
#a._b_
---------------------

(source_file
	(field
		(ident)
		field: (ident)))


=====================
positive/097
=====================
#a._ b _
---------------------

(source_file
	(ident)
	(text)
	(emph
		(text)))


=====================
positive/098
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
positive/099
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
positive/100
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
positive/101
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
positive/102
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
positive/103
=====================
#if a {}
else if b {}
else {}
---------------------

(source_file
	(branch
		condition: (ident)
		(block))
	(text)
	(text))


=====================
positive/104
=====================
#while n < 10 {
	(n,)
}
---------------------

(source_file
	(while
		condition: (cmp
			(ident)
			(number))
		(block
			(group
				(ident)))))


=====================
positive/105
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
positive/106
=====================
Hello_World
---------------------

(source_file
	(text))


=====================
positive/107
=====================
Hello*World
---------------------

(source_file
	(text))


=====================
positive/108
=====================
_UNIX_.
---------------------

(source_file
	(emph
		(text))
	(text))


=====================
positive/109
=====================
0_\n2_
---------------------

(source_file
	(text)
	(emph
		(text
			(escape))))


=====================
positive/110
=====================
$a$
---------------------

(source_file
	(math
		(formula
			(letter))))


=====================
positive/111
=====================
#true
---------------------

(source_file
	(bool))


=====================
positive/112
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
positive/113
=====================
= Hello World
Hey
---------------------

(source_file
	(section
		(heading
			(text))
		(content
			(text))))


=====================
positive/114
=====================
== Hello World
Hey
---------------------

(source_file
	(section
		(heading
			(text))
		(content
			(text))))


=====================
positive/115
=====================
= Hello\
World
---------------------

(source_file
	(section
		(heading
			(text)
			(linebreak))
		(content
			(text))))


=====================
positive/116
=====================
_
= Hello _World_
_
---------------------

(source_file
	(emph
		(section
			(heading
				(text)
				(emph
					(text)))
			(content))))


=====================
positive/117
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
positive/118
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
positive/119
=====================
\n
---------------------

(source_file
	(text
		(escape)))


=====================
positive/120
=====================
\u{1f600}
---------------------

(source_file
	(text
		(escape)))


=====================
positive/121
=====================
// Hello
---------------------

(source_file
	(comment))


=====================
positive/122
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
positive/123
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
positive/124
=====================
#<hello>
---------------------

(source_file
	(label))


=====================
positive/125
=====================
#<héllo>
---------------------

(source_file
	(label))


=====================
positive/126
=====================
#let Échö = 8
---------------------

(source_file
	(let
		pattern: (ident)
		value: (number)))


=====================
positive/127
=====================
#"Hello\u{fff}World"
---------------------

(source_file
	(string
		(escape)))


=====================
positive/128
=====================
*#e*
---------------------

(source_file
	(strong
		(ident)))


=====================
positive/129
=====================
** Hello ** World
---------------------

(source_file
	(strong)
	(text)
	(strong)
	(text))


=====================
positive/130
=====================
__ Hello ** World
---------------------

(source_file
	(emph)
	(text)
	(strong)
	(text))


=====================
positive/131
=====================
__ Hello $$ World
---------------------

(source_file
	(emph)
	(text)
	(math)
	(text))


=====================
positive/132
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
positive/133
=====================
#import "a": b,
c, d
---------------------

(source_file
	(import
		(string)
		(ident))
	(text))


=====================
positive/134
=====================
#let a
= 0
---------------------

(source_file
	(let
		pattern: (ident))
	(section
		(heading
			(text))
		(content)))


=====================
positive/135
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
positive/136
=====================
#if a {}
else if b {}
---------------------

(source_file
	(branch
		condition: (ident)
		(block))
	(text))


=====================
positive/137
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
positive/138
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
positive/139
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
positive/140
=====================
#(..b
)
---------------------

(source_file
	(group
		(elude
			(ident))))


=====================
positive/141
=====================
#(not b
)
---------------------

(source_file
	(group
		(not
			(ident))))


=====================
positive/142
=====================
#(b = c)
---------------------

(source_file
	(group
		(assign
			pattern: (ident)
			value: (ident))))


=====================
positive/143
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
positive/144
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
positive/145
=====================
https://example.com
---------------------

(source_file
	(url))


=====================
positive/146
=====================
https://hello\ world.com
---------------------

(source_file
	(url)
	(linebreak)
	(text))


=====================
positive/147
=====================
https://hello\ world.com Hey
---------------------

(source_file
	(url)
	(linebreak)
	(text))


=====================
positive/148
=====================
#[= Hello]
---------------------

(source_file
	(content
		(section
			(heading
				(text))
			(content))))


=====================
positive/149
=====================
#if true {}
/* Hey */ else {}
---------------------

(source_file
	(branch
		condition: (bool)
		(block))
	(comment)
	(text))


=====================
positive/150
=====================
#(a .b())
---------------------

(source_file
	(group
		(call
			item: (field
				(ident)
				field: (ident))
			(group))))


=====================
positive/151
=====================
#return; 0 Hello
---------------------

(source_file
	(return)
	(text))


=====================
positive/152
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
positive/153
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
positive/154
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
positive/155
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
positive/156
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
positive/157
=====================
- e

 e
---------------------

(source_file
	(item
		(text)
		(parbreak)
		(text)))


=====================
positive/158
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
positive/159
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
positive/160
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
positive/161
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
positive/162
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
positive/163
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
positive/164
=====================
Hello
#[- Hello - World]
---------------------

(source_file
	(text)
	(content
		(item
			(text))))


=====================
positive/165
=====================
    #[
] - e
---------------------

(source_file
	(content)
	(text))


=====================
positive/166
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
positive/167
=====================
   #[- Hello]
---------------------

(source_file
	(content
		(item
			(text))))


=====================
positive/168
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
positive/169
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
positive/170
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
positive/171
=====================
]
---------------------

(source_file
	(text))


=====================
positive/172
=====================
/ Hello:World
---------------------

(source_file
	(term
		term: (text)
		(text)))


=====================
positive/173
=====================
/Hello:World
---------------------

(source_file
	(text))


=====================
positive/174
=====================
-Hello
---------------------

(source_file
	(text))


=====================
positive/175
=====================
=Hello
---------------------

(source_file
	(text))


=====================
positive/176
=====================
<études>
---------------------

(source_file
	(label))


=====================
positive/177
=====================
@études
---------------------

(source_file
	(ref))


=====================
positive/178
=====================
Hello-?World
---------------------

(source_file
	(text)
	(shorthand)
	(text))


=====================
positive/179
=====================
$2 ^ 4 * 8$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (number))
			(symbol)
			(number))))


=====================
positive/180
=====================
$2 ^ 4 _ 8$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (number)
				sub: (number)))))


=====================
positive/181
=====================
$1_2_3$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sub: (attach
					(number)
					sub: (number))))))


=====================
positive/182
=====================
$(3  )$
---------------------

(source_file
	(math
		(formula
			(group
				(formula
					(number))))))


=====================
positive/183
=====================
$3  $
---------------------

(source_file
	(math
		(formula
			(number))))


=====================
positive/184
=====================
$lim  $
---------------------

(source_file
	(math
		(formula
			(ident))))


=====================
positive/185
=====================
$x + 2$
---------------------

(source_file
	(math
		(formula
			(letter)
			(symbol)
			(number))))


=====================
positive/186
=====================
$x + ($
---------------------

(source_file
	(math
		(formula
			(letter)
			(symbol)
			(group))))


=====================
positive/187
=====================
$x + (  $
---------------------

(source_file
	(math
		(formula
			(letter)
			(symbol)
			(group))))


=====================
positive/188
=====================
$2^[4 * 2$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
					sup: (group
						(formula
							(number)
							(symbol)
							(number)))))))


=====================
positive/189
=====================
$2^+2$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(number))))


=====================
positive/190
=====================
$eq.not$
---------------------

(source_file
	(math
		(formula
			(field
				(ident)
				(ident)))))


=====================
positive/191
=====================
$eq.not(0)$
---------------------

(source_file
	(math
		(formula
			(call
				item: (field
					(ident)
					field: (ident))
				(formula
					(number))))))


=====================
positive/192
=====================
$y[5)$
---------------------

(source_file
	(math
		(formula
			(apply
				item: (letter)
				(formula
					(number))))))


=====================
positive/193
=====================
$3[5)$
---------------------

(source_file
	(math
		(formula
			(number)
			(group
				(formula
					(number))))))


=====================
positive/194
=====================
$1^\=()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (apply
					item: (escape))))))


=====================
positive/195
=====================
$1^"hello"()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (apply
					item: (string))))))


=====================
positive/196
=====================
$
  #let x = 0
  #x
$
---------------------

(source_file
	(math
		(formula
			(let
				pattern: (ident)
				value: (number))
			(ident))))


=====================
positive/197
=====================
$ x $
---------------------

(source_file
	(math
		(formula
			(letter))))


=====================
positive/198
=====================
$ cal(A) :=
    { x in RR | x "is natural" } $
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(formula
					(letter)))
			(shorthand)
			(group
				(formula
					(letter)
					(ident)
					(ident)
					(symbol)
					(letter)
					(string))))))


=====================
positive/199
=====================
#(
 )
---------------------

(source_file
	(group))


=====================
positive/200
=====================
#( "e e": ())
---------------------

(source_file
	(group
		(tagged
			field: (string)
			(group))))


=====================
positive/201
=====================
Hello "World"
---------------------

(source_file
	(text)
	(quote)
	(text)
	(quote))


=====================
positive/202
=====================
Hello"World"
---------------------

(source_file
	(text)
	(quote)
	(text)
	(quote))


=====================
positive/203
=====================
$||a|b$
---------------------

(source_file
	(math
		(formula
			(symbol)
			(letter)
			(symbol)
			(letter))))


=====================
positive/204
=====================
$||a b$
---------------------

(source_file
	(math
		(formula
			(symbol)
			(letter)
			(letter))))


=====================
positive/205
=====================
$2^3!a$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (fac
					(number)))
			(letter))))


=====================
positive/206
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
positive/207
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
positive/208
=====================
$1 + n n$
---------------------

(source_file
	(math
		(formula
			(number)
			(symbol)
			(letter)
			(letter))))


=====================
positive/209
=====================
$ := { | } $
---------------------

(source_file
	(math
		(formula
			(shorthand)
			(group
				(formula
					(symbol))))))


=====================
positive/210
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
positive/211
=====================
$lim_3$
---------------------

(source_file
	(math
		(formula
			(attach
				(ident)
				sub: (number)))))


=====================
positive/212
=====================
https://typst.app/
---------------------

(source_file
	(url))


=====================
positive/213
=====================
https://www.youtube.com/watch?v=sWmlbMh3ol8
---------------------

(source_file
	(url))


=====================
positive/214
=====================
https://www.youtube.com/watch?v=sWmlbMh3ol8 Hello
---------------------

(source_file
	(url)
	(text))


=====================
positive/215
=====================
*https://example.org* Hello*
---------------------

(source_file
	(strong
		(url)
		(text)))


=====================
positive/216
=====================
https://[)
---------------------

(source_file
	(url)
	(text))


=====================
positive/217
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
positive/218
=====================
* #a
= Hello
*
---------------------

(source_file
	(strong
		(ident)
		(section
			(heading
				(text))
			(content))))


=====================
positive/219
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
positive/220
=====================
_ + e _
---------------------

(source_file
	(emph
		(text)))


=====================
positive/221
=====================
_ #e + Hello _
---------------------

(source_file
	(emph
		(ident)
		(text)))


=====================
positive/222
=====================
/*Hello*/= World
---------------------

(source_file
	(comment)
	(section
		(heading
			(text))
		(content)))


=====================
positive/223
=====================
- Hello
 /*HIHIH*/World
---------------------

(source_file
	(item
		(text)
		(comment)
		(text)))


=====================
positive/224
=====================
- Hello
 /*HIHIH*/- World
---------------------

(source_file
	(item
		(text)
		(comment)
		(item
			(text))))


=====================
positive/225
=====================
Hello
  World *
Hey*
---------------------

(source_file
	(text)
	(text)
	(strong
		(text)))


=====================
positive/226
=====================
- Hello *
World*
---------------------

(source_file
	(item
		(text)
		(strong
			(text))))


=====================
positive/227
=====================
*
  *
---------------------

(source_file
	(strong))


=====================
positive/228
=====================
- Hello #a
World
---------------------

(source_file
	(item
		(text)
		(ident))
	(text))


=====================
positive/229
=====================
#a /* Hello */   ;
---------------------

(source_file
	(ident)
	(comment)
	(text))


=====================
positive/230
=====================
Hello
#a
World
---------------------

(source_file
	(text)
	(ident)
	(text))


=====================
positive/231
=====================
$e^1»2$
---------------------

(source_file
	(math
		(formula
			(attach
				(letter)
				sup: (number))
			(symbol)
			(number))))


=====================
positive/232
=====================
*
 e
 *
---------------------

(source_file
	(strong
		(text)))


=====================
positive/233
=====================
*
 -
 *
---------------------

(source_file
	(strong
		(item)))


=====================
positive/234
=====================
$lim(1, 3)$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(formula
					(number))
				(formula
					(number))))))


=====================
positive/235
=====================
$lim(1, 3; 5, 9)$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(formula
					(number))
				(formula
					(number))
				(formula
					(number))
				(formula
					(number))))))


=====================
positive/236
=====================
$(3^))$
---------------------

(source_file
	(math
		(formula
			(group
				(formula
					(attach
						(number)
						sup: (symbol)))))))


=====================
positive/237
=====================
$2a$
---------------------

(source_file
	(math
		(formula
			(number)
			(letter))))


=====================
positive/238
=====================
$2^√4!$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (root
					(fac
						(number)))))))


=====================
positive/239
=====================
$√2^2!$
---------------------

(source_file
	(math
		(formula
			(root
				(attach
					(number)
					sup: (fac
						(number)))))))


=====================
positive/240
=====================
$√( 3 dot 4)$
---------------------

(source_file
	(math
		(formula
			(root
				(group
					(formula
						(number)
						(ident)
						(number)))))))


=====================
positive/241
=====================
$√ 3 dot 4$
---------------------

(source_file
	(math
		(formula
			(root
				(number))
			(ident)
			(number))))


=====================
positive/242
=====================
$mt( dl: 0)$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(tagged
					field: (ident)
					(formula
						(number)))))))


=====================
positive/243
=====================
$mat(2, 2, delim: "[")$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(formula
					(number))
				(formula
					(number))
				(tagged
					field: (ident)
					(formula
						(string)))))))


=====================
positive/244
=====================
$ap(av:0)$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(tagged
					field: (ident)
					(formula
						(number)))))))


=====================
positive/245
=====================
$e^2.0$
---------------------

(source_file
	(math
		(formula
			(attach
				(letter)
				sup: (number)))))


=====================
positive/246
=====================
$ mat.a $
---------------------

(source_file
	(math
		(formula
			(field
				(ident)
				field: (ident)))))


=====================
positive/247
=====================
$ mat(
  dots.v,
) $
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(formula
					(field
						(ident)
						field: (ident)))))))


=====================
positive/248
=====================
$mat(a)$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(formula
					(letter))))))


=====================
positive/249
=====================
$mat(avvv)$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(formula
					(ident))))))


=====================
positive/250
=====================
$mat(/* hello */ avvv)$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(comment)
				(formula
					(ident))))))


=====================
positive/251
=====================
$mat(/* hello */ delim: "[")$
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(comment)
				(tagged
					field: (ident)
					(formula
						(string)))))))


=====================
positive/252
=====================
 - @ééé
---------------------

(source_file
	(item
		(ref)))


=====================
positive/253
=====================
$a'''$
---------------------

(source_file
	(math
		(formula
			(prime
				(letter)))))


=====================
positive/254
=====================
$a&$
---------------------

(source_file
	(math
		(formula
			(letter)
			(align))))


=====================
positive/255
=====================
$#let a = 0;$
---------------------

(source_file
	(math
		(formula
			(let
				pattern: (ident)
				value: (number)))))


=====================
positive/256
=====================
$2^(#ab')$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (group
					(formula
						(prime
							(ident))))))))


=====================
positive/257
=====================

// Named arguments and trailing
// content blocks.
#enum(start: 2)[A][B]
---------------------

(source_file
	(comment)
	(comment)
	(call
		item: (call
			item: (call
				item: (builtin)
				(group
					(tagged
						field: (ident)
						(number))))
			(content
				(text)))
		(content
			(text))))


=====================
positive/258
=====================
#rect(
  fill: fill,
  inset: 8pt,
  radius: 4pt,
  [*Warning:\ #body*],
)
---------------------

(source_file
	(call
		item: (builtin)
		(group
			(tagged
				field: (ident)
				(ident))
			(tagged
				field: (ident)
				(number
					(unit)))
			(tagged
				field: (ident)
				(number
					(unit)))
			(content
				(strong
					(text)
					(linebreak)
					(ident))))))


=====================
positive/259
=====================
$e^mat()'$
---------------------

(source_file
	(math
		(formula
			(attach
				(letter)
				sup: (prime
					(call
						item: (ident)))))))


=====================
positive/260
=====================
$2^e '$
---------------------

(source_file
	(math
		(formula
			(attach
					(number)
					sup: (letter))
			(symbol))))


=====================
positive/261
=====================
$2^e'$
---------------------

(source_file
	(math
		(formula
			(attach
					(number)
					sup: (prime
						(letter))))))


=====================
positive/262
=====================
$#let a = 0; #a
$
---------------------

(source_file
	(math
		(formula
			(let
				pattern: (ident)
				value: (number))
			(ident))))


=====================
positive/263
=====================
$#let ab = 0;x
ab
$
---------------------

(source_file
	(math
		(formula
			(let
				pattern: (ident)
				value: (number))
			(letter)
			(ident))))


=====================
positive/264
=====================
#let array = (2, 3, 5)
#calc.min(..array)
---------------------

(source_file
	(let
		pattern: (builtin)
		value: (group
			(number)
			(number)
			(number)))
	(call
		item: (field
			(builtin)
			field: (ident))
		(group
			(elude
				(builtin)))))


=====================
positive/265
=====================
#(sym

/*Hey */

.arrow)
---------------------

(source_file
	(group
		(field
			(builtin)
			(comment)
			field: (ident))))


=====================
positive/266
=====================
#sym. arrow
#sym .arrow
---------------------

(source_file
	(builtin)
	(text)
	(builtin)
	(text))


=====================
positive/267
=====================
#(
	sym
	/* Hello */
	.
	/* World */

	arrow
)
---------------------

(source_file
	(group
		(field
			(builtin)
			(comment)
			(comment)
			field: (ident))))


=====================
positive/268
=====================
[#let a]
---------------------

(source_file
	(text)
	(let
		pattern: (ident))
	(text))


=====================
positive/269
=====================
#{a
.b}
---------------------

(source_file
	(block
		(field
			(ident)
			field: (ident))))


=====================
positive/270
=====================
#{a
 b}
---------------------

(source_file
	(block
		(ident)
		(ident)))


=====================
positive/271
=====================
#let format(title, ..authors) = {
  let by = authors
    .pos()
    .join(", ", last: " and ")

  [*#title* \ _Written by #by;_]
}
---------------------

(source_file
	(let
		pattern: (call
			item: (ident)
			(group
				(ident)
				(elude
					(ident))))
		value: (block
			(let
				pattern: (ident)
				value: (call
					item: (field
						(call
							item: (field
								(ident)
								field: (ident))
							(group))
						field: (ident))
					(group
						(string)
						(tagged
							field: (ident)
							(string)))))
			(content
				(strong
					(ident))
				(linebreak)
				(emph
					(text)
					(ident))))))


=====================
positive/272
=====================
#(if true [])
---------------------

(source_file
	(group
		(branch
			condition: (bool)
			(content))))


=====================
positive/273
=====================
#(`x += 1`)
---------------------

(source_file
	(group
		(raw_span
			(blob))))


=====================
positive/274
=====================
#(```rust enum Tag {}```)
---------------------

(source_file
	(group
		(raw_blck
			lang: (ident)
			(blob))))


=====================
positive/275
=====================
#`x += 1`.len()
---------------------

(source_file
	(call
		item: (field
			(raw_span
				(blob))
			field: (ident))
		(group)))


=====================
positive/276
=====================
#pari
---------------------

(source_file
	(ident))


=====================
positive/277
=====================
#let a = b => b
  .c
---------------------

(source_file
	(let
		pattern: (ident)
		value: (lambda
			pattern: (ident)
			value: (ident)))
	(text))


=====================
positive/278
=====================
#{
	if true [] /* Hello */

	else []
}
---------------------

(source_file
	(block
		(branch
			condition: (bool)
			(content)
			(comment)
			(content))))


=====================
positive/279
=====================
#if true []  /* Hello */

else {}
---------------------

(source_file
	(branch
		condition: (bool)
		(content)
		(comment))
	(parbreak)
	(text))


=====================
positive/280
=====================
#set text(red) if critical
---------------------

(source_file
	(set
		(call
			item: (builtin)
			(group
				(builtin)))
		condition: (ident)))


=====================
positive/281
=====================
#set text(red)
if critical
---------------------

(source_file
	(set
		(call
			item: (builtin)
			(group
				(builtin))))
	(text))


=====================
positive/282
=====================
#(import
"a"
:
b, c)
---------------------

(source_file
	(group
		(import
			(string)
			(ident)
			(ident))))


=====================
positive/283
=====================
This list is affected: #[
  #set list(marker: [--])
  - Dash
]
---------------------

(source_file
	(text)
	(content
		(set
			(call
				item: (builtin)
				(group
					(tagged
						field: (ident)
						(content
							(shorthand))))))
		(item
			(text))))


=====================
positive/284
=====================
#show heading: it => block[
  #set align(center)
  #set text(font: "Inria Serif")
  \~ #emph(it.body)
     #counter(heading).display() \~
]
---------------------

(source_file
	(show
		pattern: (builtin)
		value: (lambda
			pattern: (ident)
			value: (call
				item: (builtin)
				(content
					(set
						(call
							item: (builtin)
							(group
								(builtin))))
					(set
						(call
							item: (builtin)
							(group
								(tagged
									field: (ident)
									(string)))))
					(text
						(escape))
					(call
						item: (builtin)
						(group
							(field
								(ident)
								field: (ident))))
					(call
						item: (field
							(call
								item: (builtin)
								(group
									(builtin)))
							field: (ident))
						(group))
					(text
						(escape)))))))


=====================
positive/285
=====================
#(if false []

/* Hello */

/* World */
else []
)
---------------------

(source_file
	(group
		(branch
			condition: (bool)
			(content)
			(comment)
			(comment)
			(content))))


=====================
positive/286
=====================
#0xff \
#0o10 \
#0b1001
---------------------

(source_file
	(number)
	(linebreak)
	(number)
	(linebreak)
	(number))


=====================
positive/287
=====================
#0xff%
---------------------

(source_file
	(number
		(unit)))


=====================
positive/288
=====================
$#if true [] /* Hello */ else /* World */ []$
---------------------

(source_file
	(math
		(formula
			(branch
				condition: (bool)
				(content)
				(comment)
				(comment)
				(content)))))


=====================
positive/289
=====================
$#if true [] /* Hello */


else /* World */ []$
---------------------

(source_file
	(math
		(formula
			(branch
				condition: (bool)
				(content)
				(comment))
			(ident)
			(comment)
			(group))))


=====================
positive/290
=====================
#1.005e4in
---------------------

(source_file
	(number
		(unit)))


=====================
positive/291
=====================
#1.005e+4in
---------------------

(source_file
	(number
		(unit)))


=====================
positive/292
=====================
= This will be found
== So will this
=== But this will not.
---------------------

(source_file
	(section
		(heading
			(text))
		(content
			(section
				(heading
					(text))
				(content
					(section
						(heading
							(text))
						(content)))))))


=====================
positive/293
=====================
$ lim_x =
    op("lim", limits: #true)_x $
---------------------

(source_file
	(math
		(formula
			(attach
				(ident)
				sub: (letter))
			(symbol)
			(attach
				(call
					item: (ident)
					(formula
						(string))
					(tagged
						field: (ident)
						(formula
							(bool))))
				sub: (letter)))))


=====================
positive/294
=====================
$ op("custom",
     limits: #true)_(n->oo) n $
---------------------

(source_file
	(math
		(formula
			(attach
				(call
					item: (ident)
					(formula
						(string))
					(tagged
						field: (ident)
						(formula
							(bool))))
				sub: (group
					(formula
						(letter)
						(shorthand)
						(ident))))
			(letter))))


=====================
positive/295
=====================
$ vec(a, b, c) dot vec(1, 2, 3)
    = a + 2b + 3c $
---------------------

(source_file
	(math
		(formula
			(call
				item: (ident)
				(formula
					(letter))
				(formula
					(letter))
				(formula
					(letter)))
			(ident)
			(call
				item: (ident)
				(formula
					(number))
				(formula
					(number))
				(formula
					(number)))
			(symbol)
			(letter)
			(symbol)
			(number)
			(letter)
			(symbol)
			(number)
			(letter))))


=====================
positive/296
=====================
$1^2.0e3$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (number))
			(ident))))


=====================
positive/297
=====================
$1 / 3$
---------------------

(source_file
	(math
		(formula
			(fraction
				(number)
				(number)))))


=====================
positive/298
=====================
$|]$
---------------------

(source_file
	(math
		(formula
			(symbol))))


=====================
positive/299
=====================
$|)$
---------------------

(source_file
	(math
		(formula
			(symbol)
			(symbol))))


=====================
positive/300
=====================
$|) / )|$
---------------------

(source_file
	(math
		(formula
			(symbol)
			(fraction
				(symbol)
				(symbol))
			(symbol))))


=====================
positive/301
=====================
$|) + )|$
---------------------

(source_file
	(math
		(formula
			(symbol)
			(symbol)
			(symbol)
			(symbol)
			(symbol))))


=====================
positive/302
=====================
$2^|) + )|$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(symbol)
			(symbol)
			(symbol)
			(symbol))))


=====================
positive/303
=====================
$ { | x } $
---------------------

(source_file
	(math
		(formula
			(group
				(formula
					(symbol)
					(letter))))))


=====================
positive/304
=====================
$2^|) / )|$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(fraction
				(symbol)
				(symbol))
			(symbol))))


=====================
positive/305
=====================
$2^||]$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(symbol))))


=====================
positive/306
=====================
$2^|||]$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(symbol))))


=====================
positive/307
=====================
$2^|a b c)$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(letter)
			(letter)
			(letter)
			(symbol))))


=====================
positive/308
=====================
$a^b|h]$
---------------------

(source_file
	(math
		(formula
			(attach
				(letter)
				sup: (letter))
			(symbol)
			(letter)
			(symbol))))


=====================
positive/309
=====================
$a^)^0$
---------------------

(source_file
	(math
		(formula
			(attach
				(letter)
				sup: (attach
					(symbol)
					sup: (number))))))

=====================
positive/310
=====================
$1 + (a+b)/5$
---------------------

(source_file
	(math
		(formula
			(number)
			(symbol)
			(fraction
				(group
					(formula
						(letter)
						(symbol)
						(letter)))
				(number)))))


=====================
positive/311
=====================
  -$#é$
---------------------

(source_file
	(text)
	(math
		(formula
			(ident))))


=====================
positive/312
=====================
$x\^2   /*hello  /* world*/*/$
---------------------

(source_file
	(math
		(formula
			(letter)
			(escape)
			(number))
		(comment)))


=====================
positive/313
=====================
#if false []


else /*Hello*/ if true [] /* World */ Hello
---------------------

(source_file
	(branch
		condition: (bool)
		(content))
	(parbreak)
	(text
		(comment))
	(text)
	(text)
	(comment)
	(text))


=====================
positive/314
=====================
Hello//

World
---------------------

(source_file
	(text)
	(comment)
	(parbreak)
	(text))


=====================
positive/315
=====================
#(c, d, import "a.typ": a, b   )
---------------------

(source_file
	(group
		(ident)
		(ident)
		(import
			(string)
			(ident)
			(ident))))


=====================
positive/316
=====================
/* // */\
*/
---------------------

(source_file
	(comment))


=====================
positive/317
=====================
$   0.000007e+3$
---------------------

(source_file
	(math
		(formula
			(number)
			(letter)
			(symbol)
			(number))))


=====================
positive/318
=====================
+ The climate
  - Temperature
  - Precipitation
+ The topography
+ The geology
---------------------

(source_file
	(item
		(text)
		(item
			(text))
		(item
			(text)))
	(item
		(text))
	(item
		(text)))


=====================
positive/319
=====================
 + The climate #let a
  /* Hello */ - Temperature // World
  - Precipitation
+ The topography
---------------------

(source_file
	(item
		(text)
		(let
			pattern: (ident))
		(comment)
		(item
			(text)
			(comment))
		(item
			(text)))
	(item
		(text)))


=====================
positive/320
=====================
+
/**/ -
 -
---------------------

(source_file
	(item)
	(comment)
	(item)
	(item))


=====================
positive/321
=====================
/**/ -
 -
---------------------

(source_file
	(comment)
	(item)
	(item))


=====================
positive/322
=====================
#return 0 + a
---------------------

(source_file
	(return
		(add
			(number)
			(ident))))


=====================
positive/323
=====================
<hello.world>
---------------------

(source_file
	(label))


=====================
positive/324
=====================
#if true {} /* Hello */


else/* World */ {}
---------------------

(source_file
	(branch
		condition: (bool)
		(block)
		(comment))
	(parbreak)
	(text
		(comment)))


=====================
positive/325
=====================
$2^:=()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (apply
					item: (shorthand))))))


=====================
positive/326
=====================
$2^:= ()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (shorthand))
			(group))))


=====================
positive/327
=====================
$2^Ⅷ()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (apply
					item: (letter))))))


=====================
positive/328
=====================
$2^〇()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (apply
					item: (letter))))))


=====================
positive/329
=====================
$2^∆()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(group))))


=====================
positive/330
=====================
/*
---------------------

(source_file
	(comment))


=====================
positive/331
=====================
$=>a->a|->a>a$
---------------------

(source_file
	(math
		(formula
			(shorthand)
			(letter)
			(shorthand)
			(letter)
			(shorthand)
			(letter)
			(symbol)
			(letter))))


=====================
positive/332
=====================
$~~>>a:=a=:a>==a$
---------------------

(source_file
	(math
		(formula
			(shorthand)
			(symbol)
			(letter)
			(shorthand)
			(letter)
			(shorthand)
			(letter)
			(shorthand)
			(symbol)
			(letter))))


=====================
positive/333
=====================
#a ()
---------------------

(source_file
	(ident)
	(text))


=====================
positive/334
=====================
```_é∆```
---------------------

(source_file
	(raw_blck
		lang: (ident)
		(blob)))


=====================
positive/335
=====================
```∆```
---------------------

(source_file
	(raw_blck
		(blob)))


=====================
positive/336
=====================
/* Hello */ = World
---------------------

(source_file
	(comment)
	(section
		(heading
			(text))
		(content)))


=====================
positive/337
=====================
/ /* Hello */World :
---------------------

(source_file
	(term
		(comment)
		(text)))


=====================
positive/338
=====================
#bool #stroke #dictionary
---------------------

(source_file
	(builtin)
	(builtin)
	(builtin))


=====================
positive/339
=====================
#alignement #content #plugin
---------------------

(source_file
	(builtin)
	(builtin)
	(builtin))


=====================
positive/340
=====================
@hello[World]
---------------------

(source_file
	(ref
		(content
			(text))))


=====================
positive/341
=====================
@hello(World)
---------------------

(source_file
	(ref)
	(text))


=====================
positive/342
=====================
#import "a.lib" as b
---------------------

(source_file
	(import
		import: (string)
		(as
			(ident))))


=====================
positive/343
=====================
#import "a" + ".typ" as b: e as i, r as l
---------------------

(source_file
	(import
		import: (add
			(string)
			(string))
		(as
			(ident))
		(ident)
		(as
			(ident))
		(ident)
		(as
			(ident))))


=====================
positive/344
=====================
$2^|()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(group))))


=====================
positive/345
=====================
$2^||()$
---------------------

(source_file
	(math
		(formula
			(attach
				(number)
				sup: (symbol))
			(group))))


=====================
positive/346
=====================
#a ;
---------------------

(source_file
	(ident)
	(text))


=====================
positive/347
=====================
$ab .c$
---------------------

(source_file
	(math
		(formula
			(ident)
			(symbol)
			(letter))))


=====================
positive/348
=====================
#set page(header: locate(loc => {
  let elems = query(
    selector(heading).before(loc),
    loc,
  )
  let academy = smallcaps[
    Typst Academy
  ]
  if elems == () {
    align(right, academy)
  } else {
    let body = elems.last().body
    academy + h(1fr) + emph(body)
  }
}))
---------------------

(source_file
	(set
		(call
			item: (builtin)
			(group
				(tagged
					field: (ident)
					(call
						item: (builtin)
						(group
							(lambda
								pattern: (ident)
								value: (block
									(let
										pattern: (ident)
										value: (call
											item: (builtin)
											(group
												(call
													item: (field
														(call
															item: (builtin)
															(group
																(builtin)))
														field: (ident))
													(group
														(ident)))
												(ident))))
									(let
										pattern: (ident)
										value: (call
											item: (builtin)
											(content
												(text))))
									(branch
										condition: (cmp
											(ident)
											(group))
										(block
											(call
												item: (builtin)
												(group
													(builtin)
													(ident))))
										(block
											(let
												pattern: (ident)
												value: (field
													(call
														item: (field
															(ident)
															field: (ident))
														(group))
													field: (ident)))
											(add
												(add
													(ident)
													(call
														item: (builtin)
														(group
															(number
																(unit)))))
												(call
													item: (builtin)
													(group
														(ident)))))))))))))))


=====================
positive/349
=====================
$ f(x, y) := cases(
  1 "if" (x dot y)/2 <= 0,
  2 "if" x "is even",
  3 "if" x in NN,
  4 "else",
) $
---------------------

(source_file
	(math
		(formula
			(apply
				item: (letter)
				(formula
					(letter)
					(symbol)
					(letter)))
			(shorthand)
			(call
				item: (ident)
				(formula
					(number)
					(string)
					(fraction
						(group
							(formula
								(letter)
								(ident)
								(letter)))
						(number))
					(shorthand)
					(number))
				(formula
					(number)
					(string)
					(letter)
					(string))
				(formula
					(number)
					(string)
					(letter)
					(ident)
					(ident))
				(formula
					(number)
					(string))))))


=====================
positive/350
=====================
- a
  - b *
 - c
 *
  - d
---------------------

(source_file
	(item
		(text)
		(item
			(text)
			(strong
				(item
					(text))))
		(item
			(text))))


=====================
positive/351
=====================
#{
  if true {}
  a
}
---------------------

(source_file
	(block
		(branch
			condition: (bool)
			(block))
		(ident)))


=====================
positive/352
=====================
#import "a": *
---------------------

(source_file
	(import
		import: (string)
		(wildcard)))


=====================
positive/353
=====================
$1/x$
---------------------

(source_file
	(math
		(formula
			(fraction
				(number)
				(letter)))))


=====================
positive/354
=====================
$1/(x+y) = 1/x + 1/y$
---------------------

(source_file
	(math
		(formula
			(fraction
				(number)
				(group
					(formula
						(letter)
						(symbol)
						(letter))))
			(symbol)
			(fraction
				(number)
				(letter))
			(symbol)
			(fraction
				(number)
				(letter)))))


=====================
positive/355
=====================
$ (x+y)^n=sum_(k=0)^n binom(n, k) x^k y^(n-k). $
---------------------

(source_file
	(math
		(formula
			(attach
				(group
					(formula
						(letter)
						(symbol)
						(letter)))
				sup: (letter))
			(symbol)
			(attach
				(ident)
				sub: (group
					(formula
						(letter)
						(symbol)
						(number)))
				sup: (letter))
			(call
				item: (ident)
				(formula
					(letter))
				(formula
					(letter)))
			(attach
				(letter)
				sup: (letter))
			(attach
				(letter)
				sup: (group
					(formula
						(letter)
						(symbol)
						(letter))))
			(symbol))))


=====================
positive/356
=====================
#($a$)
---------------------

(source_file
	(group
		(math
			(formula
				(letter)))))


=====================
positive/357
=====================
#$e^s$.func()
---------------------

(source_file
	(call
		item: (field
			(math
				(formula
					(attach
						(letter)
						sup: (letter))))
			field: (ident))
		(group)))


=====================
positive/358
=====================
 #$$()
---------------------

(source_file
	(call
		item: (math)
		(group)))


=====================
positive/359
=====================
https:// hello
---------------------

(source_file
	(url)
	(text))


=====================
positive/360
=====================
https:////hello
---------------------

(source_file
	(url))


=====================
positive/361
=====================
#a.__
---------------------

(source_file
	(field
		(ident)
		field: (ident)))


=====================
positive/362
=====================
#a._-_
---------------------

(source_file
	(field
		(ident)
		field: (ident)))


=====================
positive/363
=====================
#a.-
---------------------

(source_file
	(ident)
	(text))


=====================
positive/364
=====================
#a.0
---------------------

(source_file
	(ident)
	(text))


=====================
positive/365
=====================
#(:)
---------------------

(source_file
	(group))


=====================
positive/366
=====================
#(:e:0)
---------------------

(source_file
	(group
		(tagged
			field: (ident)
			(number))))


=====================
positive/367
=====================
#(:..)
---------------------

(source_file
	(group
		(elude)))


=====================
positive/368
=====================
#0.
---------------------

(source_file
	(number))


=====================
positive/369
=====================
#.0
---------------------

(source_file
	(number))


=====================
positive/370
=====================
#10e-3
---------------------

(source_file
	(number))


=====================
positive/371
=====================
#.10e-3
---------------------

(source_file
	(number))


=====================
positive/372
=====================
`//`
---------------------

(source_file
	(raw_span
		(blob)))


=====================
positive/373
=====================
``` //```
---------------------

(source_file
	(raw_blck
		(blob)))


=====================
positive/374
=====================
```//```
---------------------

(source_file
	(raw_blck
		(blob)))


=====================
positive/375
=====================
```c//```
---------------------

(source_file
	(raw_blck
		lang: (ident)
		(blob)))


=====================
positive/376
=====================
``` ```
---------------------

(source_file
	(raw_blck
		(blob)))


=====================
positive/377
=====================
```/*```
---------------------

(source_file
	(raw_blck
		(blob)))


=====================
positive/378
=====================
```
/*
```
---------------------

(source_file
	(raw_blck
		(blob)))


=====================
positive/379
=====================
// `Heloo`

---------------------

(source_file
	(comment))


=====================
positive/380
=====================

/* ```python 0```

---------------------

(source_file
	(comment))


=====================
positive/381
=====================
/* ```python 0*/```/*```\*/
---------------------

(source_file
	(comment)
	(raw_blck
		(blob))
	(text
		(escape)))


=====================
positive/382
=====================
-
 /\//#a\
--------------------

(source_file
	(item
		(text
			(escape))
		(ident)
		(linebreak)))


=====================
positive/383
=====================
*#linebreak()
  - Hello
  *
--------------------

(source_file
	(strong
		(call
			item: (builtin)
			(group))
		(item
			(text))))


=====================
positive/384
=====================
*\**\*
--------------------

(source_file
	(strong
		(text
			(escape)))
	(text
		(escape)))


=====================
positive/385
=====================
<-:hello>
--------------------

(source_file
	(label))


=====================
positive/386
=====================
@-:hello
--------------------

(source_file
	(ref))


=====================
positive/387
=====================
@hello-:world[]
--------------------

(source_file
	(ref
		(content)))


=====================
positive/388
=====================
=
--------------------

(source_file
	(section
		(heading)
		(content)))


=====================
positive/389
=====================

=
--------------------

(source_file
	(section
		(heading)
		(content)))


=====================
positive/390
=====================
==
=
--------------------

(source_file
	(section
		(heading)
		(content))
	(section
		(heading)
		(content)))


=====================
positive/391
=====================
#[=]
--------------------

(source_file
	(content
		(text)))


=====================
positive/392
=====================
-
 =
--------------------

(source_file
	(item
		(section
			(heading)
			(content))))


=====================
positive/393
=====================
- =
 =
--------------------

(source_file
	(item
		(text)
		(section
			(heading)
			(content))))


=====================
positive/394
=====================
<123hello>
--------------------

(source_file
	(label))


=====================
positive/395
=====================
ぁ_ぁ_
--------------------

(source_file
	(text)
	(emph
		(text)))


=====================
positive/396
=====================
_e_e_
--------------------

(source_file
	(emph
		(text)))


=====================
positive/397
=====================
#[[]]
--------------------

(source_file
	(content
		(text)
		(text)))


=====================
positive/398
=====================
= a]a
--------------------

(source_file
	(section
		(heading
			(text))
		(content))
	(text))


=====================
positive/399
=====================
= [
a]
--------------------

(source_file
	(section
		(heading
			(text)
			(text))
		(content
			(text)))
	(text))


=====================
positive/400
=====================
- a]a
--------------------

(source_file
	(item
		(text))
	(text))


=====================
positive/401
=====================
- a
	]a
--------------------

(source_file
	(item
		(text))
	(text))


=====================
positive/402
=====================
- [a]a
--------------------

(source_file
	(item
		(text)
		(text)
		(text)
		(text)))


=====================
positive/403
=====================
- [a
a]
--------------------

(source_file
	(item
		(text)
		(text)
		(text))
	(text))


=====================
positive/404
=====================
- [a]\]a
--------------------

(source_file
	(item
		(text)
		(text)
		(text)
		(text
			(escape))))


=====================
positive/405
=====================
@hello.
--------------------

(source_file
	(ref)
	(text))


=====================
positive/406
=====================
@hello..::-
--------------------

(source_file
	(ref))


=====================
positive/407
=====================
e
    
h
--------------------

(source_file
	(text)
	(parbreak)
	(text))


=====================
positive/408
=====================
===
=
==
--------------------

(source_file
	(section
		(heading)
		(content))
	(section
		(heading)
		(content
			(section
				(heading)
				(content)))))


=====================
positive/409
=====================
- b
 - ]a
--------------------

(source_file
	(item
		(text)
		(item))
	(text))


=====================
positive/410
=====================
[]
-
--------------------

(source_file
	(text)
	(text)
	(item))


=====================
positive/411
=====================
#if false [] 
--------------------

(source_file
  (branch
    (bool)
    (content)))


=====================
positive/412
=====================
#if a [] els
--------------------

(source_file
  (branch
		condition: (ident)
		(content))
	(text))


=====================
positive/413
=====================
#(text: "hey")
--------------------

(source_file
	(group
		(tagged
			field: (ident)
			(string))))


=====================
positive/414
=====================
#hello.text
--------------------

(source_file
	(field
		(ident)
		field: (ident)))


=====================
positive/415
=====================
#("a" + "b": 1)
--------------------

(source_file
	(group
		(tagged
			field: (add
				(string)
				(string))
			(number))))


=====================
positive/416
=====================
#(text + world: 1)
--------------------

(source_file
	(group
		(tagged
			field: (add
				(builtin)
				(ident))
			(number))))
