export @noreturn @symbol("rt.abort") fn _abort(msg: str) void = {
	reason = abort_reason { loc = "", msg = msg };
	longjmp(&jmp, 1);
};

// See harec:include/gen.h
const reasons: [_]str = [
	"slice or array access out of bounds",	// 0
	"type assertion failed",		// 1
	"out of memory",			// 2
];

export @noreturn fn abort_fixed(loc: str, i: int) void = {
	reason = abort_reason { loc = loc, msg = reasons[i] };
	longjmp(&jmp, 1);
};
