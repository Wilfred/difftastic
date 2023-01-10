use bufio;
use io;

let static_stdin_fd: fd_stream  = fd_stream { ... };
let static_stdout_fd: fd_stream = fd_stream { ... };
let static_stderr_fd: fd_stream = fd_stream { ... };

let static_stdin_bufio: bufio::bufstream  = bufio::bufstream { ... };
let static_stdout_bufio: bufio::bufstream = bufio::bufstream { ... };

@init fn init_stdfd() void = {
	stdin = static_fdopen(0, "<stdin>", io::mode::READ, &static_stdin_fd);
	stdout = static_fdopen(1, "<stdout>", io::mode::WRITE, &static_stdout_fd);
	stderr = static_fdopen(2, "<stderr>", io::mode::WRITE, &static_stderr_fd);

	static let stdinbuf: [4096]u8 = [0...];
	stdin = bufio::static_buffered(stdin, stdinbuf, [], &static_stdin_bufio);

	static let stdoutbuf: [4096]u8 = [0...];
	stdout = bufio::static_buffered(stdout, [], stdoutbuf, &static_stdout_bufio);
};

@fini fn fini_stdfd() void = {
	// Flush any pending writes
	io::close(stdout);
};
