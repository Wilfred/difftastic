use bytes;
use bufio;
use strings;
use io;

// Joins together several path components with the path separator. The caller
// must free the return value.
export fn join(paths: str...) str = {
	// TODO: Normalize inputs so that if they end with a / we don't double
	// up on delimiters
	let sink = bufio::dynamic(io::mode::WRITE);
	let utf8 = true;
	for (let i = 0z; i < len(paths); i += 1) {
		let buf = strings::toutf8(paths[i]);
		let l = len(buf);
		if (l == 0) continue;
		for (l > 0 && buf[l - 1] == PATHSEP) {
			l -= 1;
		};
		for (let q = 0z; q < l) {
			let w = io::write(sink, buf[q..l]) as size;
			q += w;
		};
		if (i + 1 < len(paths)) {
			assert(io::write(sink, [PATHSEP]) as size == 1);
		};
	};

	return strings::fromutf8_unsafe(bufio::finish(sink));
};

@test fn join() void = {
	assert(PATHSEP == '/': u32: u8); // TODO: meh
	let i = join("foo");
	defer free(i);
	assert(i == "foo");

	let p = join(i, "bar", "baz");
	defer free(p);
	assert(p == "foo/bar/baz");

	let q = join(p, "bat", "bad");
	defer free(q);
	assert(q == "foo/bar/baz/bat/bad");

	let r = join(p, q);
	defer free(r);
	assert(r == "foo/bar/baz/foo/bar/baz/bat/bad");

	let p = join("foo/", "bar");
	defer free(p);
	assert(p == "foo/bar");

	let p = join("foo///", "bar");
	defer free(p);
	assert(p == "foo/bar");

	let p = join("foo", "", "bar");
	defer free(p);
	assert(p == "foo/bar");

	let p = join("/", "foo", "bar", "baz");
	defer free(p);
	assert(p == "/foo/bar/baz");
};
