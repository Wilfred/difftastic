take(func name():
	print('hello')
	return 1
	pass
	1 + 1
	,
	""
)

take(func name():
	1 + 1; pass
, "")

take(func name():
	pass
	pass, "")

take(func name(): "")
