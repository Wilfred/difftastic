extends Node

func _ready():
	var x := 2
	for i in range(x):
		prints(i)

	while x > 0:
		print(x)

	if x > 0:
		print("if test")
	elif x < 0:
		print("if test")
	else:
		print("if test")
