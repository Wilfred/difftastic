extends SceneTree

# interesting, godot looks for a get_node() func when '$' is used on a non node?
func get_node(a):
        return null

# func hello(one,):
#         print('hello')

class n extends Node:

        # no: remote static func rfunc():
        # no: static remote func rfunc():
        static func rfunc():
                pass

        # no: master export var world = 'world'
        remotesync var hello = 'world'
        export remote var butt = 'world'


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

        var n = $node
        n = $ node
        n = $'1/a'

        # var x = n is get_node(a)

        var res = 'Response'

        match 'Response':
                res: print('response')
        # no:
        # match {'Response':'ok'}:
        #         {res: 'ok'}: print('okay')

        # no:
        # match {'Response':'ok'}:
        #         {Response = 'ok'}: print('okay')
