use encoding::utf8;
use io;
use strings;

// Appends zero or more strings to an [io::stream]. The stream needn't be a
// strio stream, but it's often efficient if it is. Returns the number of bytes
// written, or an error.
export fn concat(st: *io::stream, strs: str...) (size | io::error) = {
	let n = 0z;
	for (let i = 0z; i < len(strs); i += 1) {
		let q = 0z;
		let buf = strings::toutf8(strs[i]);
		for (q < len(buf)) {
			let w = io::write(st, buf[q..])?;
			n += w;
			q -= w;
		};
	};
	return n;
};

@test fn concat() void = {
	let st = dynamic();
	defer io::close(st);
	concat(st, "hello") as size;
	concat(st, " ", "world") as size;
	assert(string(st) == "hello world");
};

// Joins several strings together by a delimiter and writes them to a stream.
// The stream needn't be a strio stream, but it's often more efficient if it is.
// Returns the number of bytes written, or an error.
export fn join(st: *io::stream, delim: str, strs: str...) (size | io::error) = {
	let n = 0z;
	let delim = strings::toutf8(delim);
	for (let i = 0z; i < len(strs); i += 1) {
		let q = 0z;
		let buf = strings::toutf8(strs[i]);
		for (q < len(buf)) {
			let w = io::write(st, buf[q..])?;
			n += w;
			q -= w;
		};
		if (i + 1 < len(strs)) {
			let q = 0z;
			for (q < len(delim)) {
				let w = io::write(st, delim[q..])?;
				n += w;
				q -= w;
			};
		};
	};
	return n;
};

@test fn join() void = {
	let st = dynamic();
	defer io::close(st);
	join(st, "::", "hello", "world") as size;
	assert(string(st) == "hello::world");
	truncate(st);
	join(st, "::") as size;
	assert(string(st) == "");
	truncate(st);
	join(st, "::", "foo") as size;
	assert(string(st) == "foo");
};

// Joins several strings together by a delimiter and writes them to a stream, in
// reverse order. The stream needn't be a strio stream, but it's often more
// efficient if it is. Returns the number of bytes written, or an error.
export fn rjoin(st: *io::stream, delim: str, strs: str...) (size | io::error) = {
	let n = 0z;
	let delim = strings::toutf8(delim);
	for (let i = len(strs); i > 0; i -= 1) {
		let q = 0z;
		let buf = strings::toutf8(strs[i - 1]);
		for (q < len(buf)) {
			let w = io::write(st, buf[q..])?;
			n += w;
			q -= w;
		};
		if (i - 1 > 0) {
			let q = 0z;
			for (q < len(delim)) {
				let w = io::write(st, delim[q..])?;
				n += w;
				q -= w;
			};
		};
	};
	return n;
};

@test fn rjoin() void = {
	let st = dynamic();
	defer io::close(st);
	rjoin(st, "::", "hello", "world") as size;
	assert(string(st) == "world::hello");
	truncate(st);
	rjoin(st, "::") as size;
	assert(string(st) == "");
	truncate(st);
	rjoin(st, "::", "foo") as size;
	assert(string(st) == "foo");
};

// Appends a rune to a stream.
export fn appendrune(st: *io::stream, r: rune) (size | io::error) =
	io::write(st, utf8::encoderune(r));
