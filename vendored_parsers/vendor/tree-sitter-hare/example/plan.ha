use fmt;
use hare::ast;
use hare::module;
use os::exec;
use os;
use path;
use strings;
use temp;

type status = enum {
	SCHEDULED,
	COMPLETE,
	SKIP,
};

type task = struct {
	status: status,
	depend: []*task,
	output: str,
	cmd: []str,
};

fn task_free(task: *task) void = {
	free(task.depend);
	free(task.output);
	free(task.cmd);
	free(task);
};

type modcache = struct {
	hash: u32,
	task: *task,
	ident: ast::ident,
	version: module::version,
};

type plan = struct {
	context: *module::context,
	workdir: str,
	counter: uint,
	scheduled: []*task,
	complete: []*task,
	script: str,
	environ: [](str, str),
	modmap: [64][]modcache,
};

fn mkplan(ctx: *module::context) plan = {
	const rtdir = match (module::lookup(ctx, ["rt"])) {
		err: module::error => fmt::fatal("Error resolving rt: {}",
			module::strerror(err)),
		ver: module::version => ver.basedir,
	};
	return plan {
		context = ctx,
		workdir = temp::dir(),
		script = path::join(rtdir, "hare.sc"),
		environ = alloc([
			(strings::dup("HARECACHE"), strings::dup(ctx.cache)),
		]),
		...
	};
};

fn plan_finish(plan: *plan) void = {
	os::rmdirall(plan.workdir);
	free(plan.workdir);

	for (let i = 0z; i < len(plan.complete); i += 1) {
		let task = plan.complete[i];
		task_free(task);
	};
	free(plan.complete);

	for (let i = 0z; i < len(plan.scheduled); i += 1) {
		let task = plan.scheduled[i];
		task_free(task);
	};
	free(plan.scheduled);

	for (let i = 0z; i < len(plan.environ); i += 1) {
		free(plan.environ[i].0);
		free(plan.environ[i].1);
	};
	free(plan.environ);

	for (let i = 0z; i < len(plan.modmap); i += 1) {
		free(plan.modmap[i]);
	};
};

fn plan_execute(plan: *plan, verbose: bool) void = {
	for (len(plan.scheduled) != 0) {
		let next: nullable *task = null;
		let i = 0z;
		for (i < len(plan.scheduled); i += 1) {
			let task = plan.scheduled[i];
			let eligible = true;
			for (let j = 0z; j < len(task.depend); j += 1) {
				if (task.depend[j].status == status::SCHEDULED) {
					eligible = false;
					break;
				};
			};
			if (eligible) {
				next = task;
				break;
			};
		};
		// TODO: This can be a type assertion
		let task = match (next) {
			null => abort(),
			t: *task => t,
		};

		match (execute(plan, task, verbose)) {
			err: exec::error => fmt::fatal("Error: {}: {}",
				task.cmd[0], exec::strerror(err)),
			err: exec::exit_status! => fmt::fatal("Error: {}: {}",
				task.cmd[0], exec::exitstr(err)),
			void => void,
		};

		task.status = status::COMPLETE;

		delete(plan.scheduled[i]);
		append(plan.complete, task);
	};

	update_modcache(plan);
};

fn update_cache(plan: *plan, mod: modcache) void = {
	let manifest = module::manifest {
		ident = mod.ident,
		inputs = mod.version.inputs,
		versions = [mod.version],
	};
	match (module::manifest_write(plan.context, &manifest)) {
		err: module::error => fmt::fatal(
			"Error updating module cache: {}",
			module::strerror(err)),
		void => void,
	};
};

fn update_modcache(plan: *plan) void = {
	for (let i = 0z; i < len(plan.modmap); i += 1) {
		let mods = plan.modmap[i];
		if (len(mods) == 0) {
			continue;
		};
		for (let j = 0z; j < len(mods); j += 1) {
			if (mods[j].task.status == status::COMPLETE) {
				update_cache(plan, mods[j]);
			};
		};
	};
};

fn execute(
	plan: *plan,
	task: *task,
	verbose: bool,
) (void | exec::error | exec::exit_status!) = {
	if (verbose) {
		for (let i = 0z; i < len(task.cmd); i += 1) {
			fmt::errorf("{} ", task.cmd[i]);
		};
		fmt::errorln();
	};

	let cmd = exec::cmd(task.cmd[0], task.cmd[1..]...)?;
	for (let i = 0z; i < len(plan.environ); i += 1) {
		let e = plan.environ[i];
		exec::setenv(&cmd, e.0, e.1);
	};

	let proc = exec::start(&cmd)?;
	let st = exec::wait(&proc)?;
	return exec::check(&st);
};

fn mkfile(plan: *plan, ext: str) str = {
	static let namebuf: [32]u8 = [0...];
	const name = fmt::bsprintf(namebuf, "temp.{}.{}",
		plan.counter, ext);
	plan.counter += 1;
	return path::join(plan.workdir, name);
};

fn mkdepends(t: *task...) []*task = {
	// XXX: This should just be one alloc call
	let deps: []*task = alloc([], len(t));
	append(deps, ...t);
	return deps;
};
