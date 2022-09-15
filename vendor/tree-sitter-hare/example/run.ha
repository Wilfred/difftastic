type test = struct {
	name: str,
	func: *fn() void,
};

type abort_reason = struct {
	loc: str,
	msg: str,
};

const @symbol("__test_array_start") test_start: [*]test;
const @symbol("__test_array_end") test_end: [*]test;

let jmp: jmpbuf = jmpbuf { ... };
let reason: abort_reason = abort_reason { ... };

export fn tests_main() size = {
	const ntest = (&test_end: uintptr - &test_start: uintptr): size / size(test);
	let maxname = 0z;
	for (let i = 0z; i < ntest; i += 1) {
		if (len(test_start[i].name) > maxname) {
			maxname = len(test_start[i].name);
		};
	};

	let failures: [](str, abort_reason) = [];
	let npass = 0z, nfail = 0z;
	print("Running ");
	print(ztos(ntest));
	print(" tests:\n\n");
	time_start();
	for (let i = 0z; i < ntest; i += 1) {
		if (!should_test(test_start[i].name)) {
			continue;
		};
		print(test_start[i].name);
		dots(maxname - len(test_start[i].name) + 3);
		print(" ");

		if (setjmp(&jmp) != 0) {
			nfail += 1;
			append(failures, (test_start[i].name, reason));
			print("FAIL\n");
			continue;
		};
		test_start[i].func();

		npass += 1;
		print("OK\n");
	};
	let end = time_stop();

	if (nfail != 0) {
		print("\n");
		print(ztos(nfail));
		if (nfail == 1) {
			print(" test failed:\n");
		} else {
			print(" tests failed:\n");
		};
		for (let i = 0z; i < nfail; i += 1) {
			print(failures[i].0);
			print(": ");
			if (len(failures[i].1.loc) != 0) {
				print(failures[i].1.loc);
				print(": ");
			};
			print(failures[i].1.msg);
			print("\n");
		};
	};

	print("\n");
	print(ztos(npass));
	print(" passed; ");
	print(ztos(nfail));
	print(" failed; ");
	print(ztos(ntest));
	print(" tests completed in ");
	print(ztos(end.0));
	print(".");
	print(ztos(end.1));
	print("s\n");

	return nfail;
};

fn print(msg: str) void = write(1, *(&msg: **void): *const char, len(msg));

fn dots(n: size) void = {
	// XXX: this is slow, I guess
	for (let i = 0z; i < n; i += 1) {
		print(".");
	};
};

fn should_test(name: str) bool = {
	if (argc == 1) {
		return true;
	};
	for (let i = 1z; i < argc; i += 1) {
		let s = from_c_unsafe(argv[i]);
		if (name == s) {
			return true;
		};
	};
	return false;
};
