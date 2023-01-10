use fmt;
use getopt;
use hare::module;
use os;
use os::exec;
use path;

fn default_tags() []module::tag = {
	return alloc([module::tag {
		name = os::machine(),
		mode = module::tag_mode::INCLUSIVE,
	}, module::tag {
		name = PLATFORM,
		mode = module::tag_mode::INCLUSIVE,
	}]);
};

type goal = enum {
	OBJ,
	EXE,
};

fn build(args: []str) void = {
	let help: []getopt::help = [
		"compiles Hare programs",
		('c', "build object instead of executable"),
		('v', "print executed commands"),
		('D', "ident:type=value", "define a constant"),
		('j', "jobs", "set parallelism for build"),
		('l', "name", "link with a system library"),
		('o', "path", "set output file name"),
		('t', "arch", "set target architecture"),
		('T', "tags...", "set build tags"),
		('X', "tags...", "unset build tags"),
		"path"
	];
	let cmd = getopt::parse(args, help...);
	defer getopt::finish(&cmd);

	let verbose = false;
	let output = "";
	let goal = goal::EXE;
	let defines: []str = [];
	for (let i = 0z; i < len(cmd.opts); i += 1) {
		let opt = cmd.opts[i];
		switch (opt.0) {
			'c' => goal = goal::OBJ,
			'v' => verbose = true,
			'D' => append(defines, opt.1),
			'j' => abort(), // TODO
			'l' => abort(), // TODO
			'o' => output = opt.1,
			't' => abort(), // TODO
			'T' => abort(), // TODO
			'X' => abort(), // TODO
			*   => abort(),
		};
	};

	assert(goal == goal::EXE); // TODO

	let input =
		if (len(cmd.args) == 0) os::getcwd()
		else if (len(cmd.args) == 1) cmd.args[0]
		else {
			getopt::printusage(os::stderr, args[0], help...);
			os::exit(1);
		};

	let tags = default_tags();
	defer free(tags);

	let ctx = module::context_init(tags, defines, HAREPATH);
	defer module::context_finish(&ctx);

	let plan = mkplan(&ctx);
	defer plan_finish(&plan);

	let ver = match (module::scan(&ctx, input)) {
		ver: module::version => ver,
		err: module::error => fmt::fatal(
			"Error scanning input module: {}",
			module::strerror(err)),
	};

	let depends: []*task = [];
	sched_module(&plan, ["rt"], &depends);

	for (let i = 0z; i < len(ver.depends); i += 1z) {
		const dep = ver.depends[i];
		sched_module(&plan, dep, &depends);
	};

	// TODO: Choose this more intelligently
	if (output == "") {
		output = path::basename(ver.basedir);
	};
	sched_hare_exe(&plan, ver, output, depends...);
	plan_execute(&plan, verbose);
};

fn cache(args: []str) void = {
	let help: []getopt::help = [
		"manages the build cache",
		('c', "cleans the specified modules"),
		"modules...",
	];
	let cmd = getopt::parse(args, help...);
	defer getopt::finish(&cmd);

	abort(); // TODO
};

fn deps(args: []str) void = {
	let help: []getopt::help = [
		"prints dependency information for Hare programs",
		('d', "print dot syntax for use with graphviz"),
		('M', "print rules for POSIX make"),
		('T', "tags...", "set build tags"),
		('X', "tags...", "unset build tags"),
		"path",
	];
	let cmd = getopt::parse(args, help...);
	defer getopt::finish(&cmd);

	abort(); // TODO
};

fn run(args: []str) void = {
	let help: []getopt::help = [
		"compiles and runs Hare programs",
		('v', "print executed commands"),
		('D', "ident:type=value", "define a constant"),
		('j', "jobs", "set parallelism for build"),
		('l', "name", "link with a system library"),
		('T', "tags...", "set build tags"),
		('X', "tags...", "unset build tags"),
		"path", "args...",
	];
	let cmd = getopt::parse(args, help...);
	defer getopt::finish(&cmd);

	let verbose = false;
	let defines: []str = [];
	for (let i = 0z; i < len(cmd.opts); i += 1) {
		let opt = cmd.opts[i];
		switch (opt.0) {
			'v' => verbose = true,
			'D' => append(defines, opt.1),
			'j' => abort(), // TODO
			'l' => abort(), // TODO
			't' => abort(), // TODO
			'T' => abort(), // TODO
			'X' => abort(), // TODO
			*   => abort(),
		};
	};

	let input = "";
	let runargs: []str = [];
	if (len(cmd.args) == 0) {
		input = os::getcwd();
	} else {
		input = cmd.args[0];
		runargs = cmd.args[1..];
	};

	let tags = default_tags();
	defer free(tags);

	let ctx = module::context_init(tags, defines, HAREPATH);
	defer module::context_finish(&ctx);

	let plan = mkplan(&ctx);
	defer plan_finish(&plan);

	let ver = match (module::scan(&ctx, input)) {
		ver: module::version => ver,
		err: module::error => fmt::fatal(
			"Error scanning input module: {}",
			module::strerror(err)),
	};

	let depends: []*task = [];
	sched_module(&plan, ["rt"], &depends);

	for (let i = 0z; i < len(ver.depends); i += 1z) {
		const dep = ver.depends[i];
		sched_module(&plan, dep, &depends);
	};

	let output = mkfile(&plan, "out");
	sched_hare_exe(&plan, ver, output, depends...);
	plan_execute(&plan, verbose);
	let cmd = match (exec::cmd(output, runargs...)) {
		err: exec::error => fmt::fatal("exec: {}", exec::strerror(err)),
		cmd: exec::command => cmd,
	};
	exec::setname(&cmd, input);
	exec::exec(&cmd);
};

fn test(args: []str) void = {
	let help: []getopt::help = [
		"compiles and runs tests for Hare programs",
		('v', "print executed commands"),
		('D', "ident:type=value", "define a constant"),
		('j', "jobs", "set parallelism for build"),
		('l', "name", "link with a system library"),
		('T', "tags...", "set build tags"),
		('X', "tags...", "unset build tags"),
		"[tests...]"
	];
	let cmd = getopt::parse(args, help...);
	defer getopt::finish(&cmd);

	let verbose = false;
	let defines: []str = [];
	for (let i = 0z; i < len(cmd.opts); i += 1) {
		let opt = cmd.opts[i];
		switch (opt.0) {
			'v' => verbose = true,
			'D' => append(defines, opt.1),
			'j' => abort(), // TODO
			'l' => abort(), // TODO
			't' => abort(), // TODO
			'T' => abort(), // TODO
			'X' => abort(), // TODO
			*   => abort(),
		};
	};

	let input = "";
	let runargs: []str = [];
	if (len(cmd.args) == 0) {
		input = os::getcwd();
	} else {
		input = cmd.args[0];
		runargs = cmd.args[1..];
	};

	let tags = default_tags();
	defer free(tags);
	append(tags, module::tag {
		name = "test",
		mode = module::tag_mode::INCLUSIVE,
	});

	let ctx = module::context_init(tags, defines, HAREPATH);
	defer module::context_finish(&ctx);

	let plan = mkplan(&ctx);
	defer plan_finish(&plan);

	let ver = match (module::scan(&ctx, input)) {
		ver: module::version => ver,
		err: module::error => fmt::fatal(
			"Error scanning input module: {}",
			module::strerror(err)),
	};

	let depends: []*task = [];
	sched_module(&plan, ["rt"], &depends);

	for (let i = 0z; i < len(ver.depends); i += 1z) {
		const dep = ver.depends[i];
		sched_module(&plan, dep, &depends);
	};

	let output = mkfile(&plan, "out");
	sched_hare_exe(&plan, ver, output, depends...);
	plan_execute(&plan, verbose);
	let cmd = match (exec::cmd(output, runargs...)) {
		err: exec::error => fmt::fatal("exec: {}", exec::strerror(err)),
		cmd: exec::command => cmd,
	};
	exec::setname(&cmd, input);
	exec::exec(&cmd);
};

fn version(args: []str) void = {
	fmt::printfln("Hare version {}", VERSION);
	fmt::errorln();
	fmt::printf("Build tags\t");
	const tags = default_tags();
	for (let i = 0z; i < len(tags); i += 1) {
		const tag = tags[i];
		const inclusive = (tag.mode & module::tag_mode::INCLUSIVE) == module::tag_mode::INCLUSIVE;
		fmt::printf("{}{}", if (inclusive) '+' else '-', tag.name);
	};
	fmt::println();

	match (os::getenv("HAREPATH")) {
		void => fmt::printfln("HAREPATH\t{}", HAREPATH),
		s: str => fmt::printfln("HAREPATH\t{}\t(from environment)", s),
	};
	if (len(args) > 1 && args[1] == "-v") {
		fmt::errorln("
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⡀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠊⠀⠀⠁⠀⢱⢄⠀⠀⠀⣷⠓⠀⠌⠓⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠊⠀⠀⠀⠀⠀⠀⠀⠀⠡⡀⢰⠛⠀⠀⠀⠀⠀⢡⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠁⠀⠀⢠⢠⠀⡄⢴⢠⣦⠀⢁⢸⢸⠀⠀⠀⠀⠀⠀⢁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠀⠀⡀⢰⠈⠌⠀⠇⣹⡞⡟⠀⢸⢸⡏⠂⠀⠀⡄⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⡒⠀⢴⠏⠄⠘⠁⣾⣿⡆⠀⣸⣷⢠⠀⠀⡀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⢡⠀⡀⢢⠁⢟⢡⣸⢹⡇⠀⢿⡆⡄⡀⠀⠁⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡐⠀⢌⡖⡐⠐⠀⢾⠂⣿⣿⡧⠀⢠⠗⡁⠁⠰⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⢘⢻⢠⣧⡆⡘⡐⣿⣽⣷⠀⢸⢸⠃⡀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡄⠀⠈⣏⢿⣿⡔⣼⣿⣿⣿⠀⠸⡿⡿⢷⢀⡄⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠠⢤⡶⠒⠞⠓⢱⠀⠀⠸⣿⣻⣿⠿⣯⠆⠀⠀⡠⠿⠷⠜⠎⠰⠰⡄⣀⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⠈⡠⠅⡢⠄⠌⠀⠦⠀⢀⢇⠀⠀⡙⡯⠋⠀⢀⠨⠒⠑⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠣⡂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣐⣄⢽⠿⡰⡍⠐⠈⠀⠀⠀⠀⠀⠈⠃⠈⢆⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⡀⠀⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠐⠶⠿⠫⠠⠀⡐⠀⠀⠀⠀⠀⠉⠀⠀⠀⠒⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⣄⠀⠈⠱⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠐⠂⠒⠑⠂⠄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢤⡏⠀⠀⠀   ⢠⣾⣿⣿⣿⠶⣄⠀⠀⠀⠀⠀⠀⠊⠀⢸⣾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣰⠂⠀⢔⣊⠉⠀⠒⠂⠀⠀⠀⠀⢤⡀⡀⠀⠐⠔⢒⠀⠂⠀⠀  ⢸⣿⣿⣿⣧⠀⣼⡀⠀⠀⠀⠀⠀⠀⠣⡀⠻⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢐⡂⠴⠀⡚⠛⠀⠀⠈⠀⠀⠀⠀⠀⠐⠢⠠⠀⠀⠀⢱⡦⠀⠂⠀⠀⠀⠀⢻⣿⣿⣿⣷⣿⡧⠀⠀⠀⠀⠀⠀⠠⠉⠐⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠄⠨⠍⠙⠷⠟⠀⠐⠀⠀⠀⠤⡀⠀⠀⠠⣌⡁⠀⠀⢠⡶⠀⢀⡂⠀⠀⠀⠈⠛⠻⠿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⢂⠀⠫⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢐⣭⡁⠥⣀⠻⣿⡄⣅⣤⠀⠈⠌⡂⠀⠀⠀⢀⡒⠠⠀⠂⣰⣡⡀⠀⠀⠀⠀⠀⠀⡠⠀⢄⢀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⢢⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢱⣏⣹⣯⢗⡩⣥⠄⠘⢓⠩⡀⠁⠀⠀⡀⠀⠂⡐⠠⠀⠀⢘⡻⣼⠄⡀⠂⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⣤⣄⠀⢀⡤⠙⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢰⣺⣿⣾⣮⡷⣖⣿⠂⡂⢚⣽⠆⠨⠀⠫⠀⠀⠘⠈⢢⠘⠀⠰⡲⡫⢾⣴⣀⠀⠀⠀⠀⠀⠀⡀⣀⢀⢀⠀⠀⠀⠈⢻⣷⠟⠡⡘⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⡽⣾⣷⣶⣯⣾⢞⣿⡾⠊⣈⢄⡂⠀⠢⢀⠄⡄⠀⠀⠈⠰⡁⡀⡘⠱⣱⡟⣝⢷⣧⣆⡔⡄⡀⡈⠀⠀⠀⠈⠀⠀⡀⠸⣇⣴⠴⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⡿⢿⣿⣿⣿⣕⣺⣗⣴⡿⣿⣈⣴⢆⠁⠊⠔⡖⠀⠁⡂⠈⠬⣾⣶⢹⣾⣮⣿⣿⣿⢿⣷⣷⣷⣦⣧⣶⣴⣧⣼⣷⣿⣿⢿⡗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢀⠀⠀⠤⠄⢪⢿⣿⣿⣿⣯⣗⡽⢻⣍⡿⣯⠱⣣⡢⢂⢈⠚⠠⠐⢐⠡⢀⢌⠋⢀⣿⡏⠹⣿⣿⣷⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣾⠿⠅⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠐⠂⣀⣀⣀⠜⣯⣿⢿⣵⣿⣿⣭⡾⣙⠼⣼⡆⡄⣤⡏⠈⠈⠠⠞⠔⡈⠨⡀⠠⡼⣎⡀⣳⢘⣿⣽⣿⣿⣿⣿⣟⣿⣯⣻⣿⣼⣮⣿⡍⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠤⠀⠉⠙⠃⠸⣵⣿⣿⣿⣿⣭⣴⣷⣞⢍⠰⣅⡛⡿⣷⣈⡟⢓⣔⠁⡇⣣⣟⠆⣿⡼⣤⣤⣻⣨⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣾⠯⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠐⠶⢘⢿⣿⣿⣿⣿⣿⣎⣯⡞⣾⣧⣟⣧⣿⡽⡹⢻⢠⢠⣤⣿⠻⠿⢻⠿⣾⣿⣿⣿⣷⣿⣟⣿⣿⣿⣿⣿⣿⡿⢏⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢀⣡⡭⣭⣉⣉⣈⠹⢿⣿⣿⣿⣾⣼⣿⣾⣷⣿⡿⢿⣿⣿⢿⣿⣾⣿⣿⣿⢷⣿⣄⣿⣬⣭⡜⡿⡟⢻⣿⣟⣿⣿⠿⡟⠜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠤⠌⠭⠭⢭⢭⣥⣘⣻⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣷⣷⣹⣧⣧⣽⣿⣿⣿⡿⢟⣃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠐⠒⢒⣒⣀⣈⣉⣉⣋⣙⡻⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⡿⣿⢿⢿⣿⠿⠻⠛⠯⠹⠁⢑⠐⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⣀⣈⣀⣒⣓⡒⡒⠒⠒⢒⡀⠀⠀⠀⠀⠴⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀⣀⠀⠀⠤⠀⠤⠤⠀⠀⠒⠒⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠄⠀⠀⠀⠐⠒⠒⠒⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁");
	};
};
