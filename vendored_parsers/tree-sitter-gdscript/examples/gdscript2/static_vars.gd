# Error: @export cannot be applied to static var
# but annotations are still parsed.
# @export static var hello: int

static var foo = 1

class Foo:
	static var bar

static var name := "Me"
static var value: int
