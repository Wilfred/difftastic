use getopt;
use os;

export fn main() void = {
	let help: []getopt::help = [
		"compile, run, and test Hare programs",
		"<build | cache | deps | run | test | version>", "args...",
	];
	let cmd = getopt::parse(os::args, help...);
	defer getopt::finish(&cmd);
	if (len(cmd.args) < 1) {
		getopt::printusage(os::stderr, os::args[0], help...);
		os::exit(1);
	};
	if (cmd.args[0] == "build") build(cmd.args)
	else if (cmd.args[0] == "cache") cache(cmd.args)
	else if (cmd.args[0] == "deps") deps(cmd.args)
	else if (cmd.args[0] == "run") run(cmd.args)
	else if (cmd.args[0] == "test") test(cmd.args)
	else if (cmd.args[0] == "version") version(cmd.args)
	else {
		getopt::printusage(os::stderr, os::args[0], help...);
		os::exit(1);
	};
};
