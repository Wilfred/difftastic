extends SceneTree

# func hello(one,):
#         print('hello')

var x setget setter,getter
var y setget setter
var a setget ,getter

func setter(a):pass
func getter():pass

func _initialize():
        var b: String = "hello"
        print(b)
        var butt = 'buttface'
        var next = 'next'
        var d = {
                'hello': 'world',
                world = 'hello',
                butt: 'buttt',
                butt + next: 'buttnext',
        }
        var d2 = {hello='hello',}
        print(1 % 5)
        print(d)
