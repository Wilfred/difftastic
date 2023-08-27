=====================
Test E01
=====================
$||)$
---------------------
; FIXME: the termination of a group goes outside the bar group

(source_file
	(math
		(group)
		(symbol))))


=====================
Test E02
=====================
#(a: b
 )
---------------------
; FIXME: recurrent problem caused by spaces

(source_file
	(group
		(tagged
			field: (ident)
			(ident))))


=====================
Test E03
=====================
$1 + n n$
---------------------
; FIXME: recurrent problem caused by spaces

(source_file
	(math
		(add
			(number)
			(variable))
		(variable)))


=====================
Test E04
=====================
#import "a." + "typ": b, c
---------------------
; FIXME: the path can be an expression
; but changing it breaks other parts

(source_file
	(import
		(add
			(string)
			(string)
		(ident)
		(ident))))


=====================
Test E05
=====================
$lim_3$
---------------------
; FIXME: ident in math cannot contain `_`

(source_file
	(math
		(attach
			(ident)
			sub: (number))))


=====================
Test E06
=====================
#(a not  /* hey */ in b)
---------------------
; FIXME: spaces and comment between `not` and `in`
; but adding it breaks other parts

(source_file
	(math
		(attach
			(ident)
			sub: (number))))
