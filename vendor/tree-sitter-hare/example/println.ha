use rt;

// Prints strings to stdout, separated by spaces, and followed by a newline.
//
// The output is unbuffered, and may not have good performance. This is only
// recommended for debugging purposes. See [fmt::println] instead.
export fn println(msgs: str...) void = {
	for (let i = 0z; i < len(msgs); i += 1) {
		let msg = msgs[i];
		rt::write(1, *(&msg: **void): *const char, len(msg));
		if (i + 1 < len(msgs)) {
			const sp = " ";
			rt::write(1, *(&sp: **void): *const char, 1);
		};
	};
	const linefeed = "\n";
	rt::write(1, *(&linefeed: **void): *const char, 1);
};

// Prints strings to stderr, separated by spaces, and followed by a newline.
//
// The output is unbuffered, and may not have good performance. This is only
// recommended for debugging purposes. See [fmt::errorln] instead.
export fn errorln(msgs: str...) void = {
	for (let i = 0z; i < len(msgs); i += 1) {
		let msg = msgs[i];
		rt::write(2, *(&msg: **void): *const char, len(msg));
		if (i + 1 < len(msgs)) {
			const sp = " ";
			rt::write(2, *(&sp: **void): *const char, 1);
		};
	};
	const linefeed = "\n";
	rt::write(2, *(&linefeed: **void): *const char, 1);
};
