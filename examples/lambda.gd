# Verified with v4.0.beta17.official [c40020513]

# FIXME: tree-sitter-gdscript can't parse this yet.
var p = func(): if true: pass else: pass
# If stmts can be inline. (They do not eval to their last expr.)
t(func(): if true: 'string' else: 100)



# GDScript v2 cannot parse this:
#if true: print(1); print(2) else: print(3); print(4)

# But, can parse this:
# prints:
# 1
# 2
var p = func(): if true: print(1); print(2) else: print(3); print(4)

# prints:
# outer 3
#var c = func(): if true: if false: print('inner 1'); print('inner 2') else: print('outer 3') else: print(4)

# some whitespace handling between statement groups.
# returns: 2
var x = func hello():		      var     b     =    2;        return     b;  

if true: print('a')  ;     print('b');    			
else: print('c'); var a: int = 0; a + 1; return a
# prints:
# a
# b

# func bodies end at a comma. remaining args can follow.
# no newline needed.
take(func(): var a = 2; return x, 1)
take(func():
	print("hello world")
	pass, "")

# func bodies also end at a paren.
t(func():
	print('hello')
	1 + 1)

# These are valid.
t(func():
	pass
)

t(
	func(): pass,
	func():
		pass
)

# types can be specified
var d = func(hello: int, string: String) -> int:
	return string.length() + hello

t(func name(a: int, b: int) -> int: return a + b)
t(func name(a: int, b: int) -> int:
	return a + b, "last argument")
