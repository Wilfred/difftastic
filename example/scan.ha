use ascii;
use bytes;
use crypto::sha256;
use encoding::utf8;
use fs;
use hare::ast;
use hare::lex;
use hare::parse;
use hash;
use io;
use path;
use slice;
use sort;
use strings;
use strio;
use fmt;

// Scans the files in a directory for eligible build inputs and returns a
// [version] which includes all applicable files and their dependencies.
export fn scan(ctx: *context, path: str) (version | error) = {
	// TODO: Incorporate defines into the hash
	let sha = sha256::sha256();
	//defer! hash::close(sha);
	let iter = match (fs::iter(ctx.fs, path)) {
		fs::wrongtype => {
			// Single file case
			let inputs: []input = [];
			let deps: []ast::ident = [];
			let ft = match (type_for_ext(path)) {
				void => return module_not_found,
				ft: filetype => ft,
			};
			let st = fs::stat(ctx.fs, path)?;
			let in = input {
				path = fs::resolve(ctx.fs, path),
				stat = st,
				ft = ft,
				hash = scan_file(ctx, path, &deps)?,
				...
			};
			append(inputs, in);
			hash::write(sha, in.hash);
			return version {
				hash = hash::finish(sha),
				basedir = path::dirname(fs::resolve(ctx.fs, path)),
				depends = deps,
				inputs = inputs,
			};
		},
		err: fs::error => return err,
		iter: *fs::iterator => iter,
	};
	let ver = version {
		basedir = strings::dup(path),
		...
	};
	scan_directory(ctx, &ver, sha, path, iter)?;
	ver.hash = hash::finish(sha);
	return ver;
};

// Given a file or directory name, parses it into the basename, extension, and
// tag set.
fn parse_name(name: str) (str, str, []tag) = {
	let ext = path::extension(name);
	let base = ext.0, ext = ext.1;

	let p = strings::index(base, '+');
	let m = strings::index(base, '-');
	if (p is void && m is void) {
		return (base, ext, []);
	};
	let i: size =
		if (p is void && m is size) m: size
		else if (m is void && p is size) p: size
		else if (m: size < p: size) m: size
		else p: size;
	let tags = strings::sub(base, i, strings::end);
	let tags = match (parsetags(tags)) {
		void => return (base, ext, []),
		t: []tag => t,
	};
	let base = strings::sub(base, 0, i);
	return (base, ext, tags);
};

fn strcmp(a: const *void, b: const *void) int = {
	const a = *(a: const *str);
	const b = *(b: const *str);
	return ascii::strcmp(a, b) as int;
};

fn scan_directory(
	ctx: *context,
	ver: *version,
	sha: *hash::hash,
	path: str,
	iter: *fs::iterator,
) (void | error) = {
	let files: []str = [], dirs: []str = [];
	defer {
		for (let i = 0z; i < len(files); i += 1) {
			free(files[i]);
		};
		free(files);

		for (let i = 0z; i < len(dirs); i += 1) {
			free(dirs[i]);
		};
		free(dirs);
	};

	for (true) {
		let ent = match (fs::next(iter)) {
			void => break,
			ent: fs::dirent => ent,
		};

		switch (ent.ftype) {
			fs::mode::LINK => abort(), // TODO
			fs::mode::DIR => append(dirs, strings::dup(ent.name)),
			fs::mode::REG => append(files, strings::dup(ent.name)),
		};
	};

	// Sorted to keep the hash consistent
	sort::sort(dirs, size(str), &strcmp);
	sort::sort(files, size(str), &strcmp);

	// Tuple of is_directory, basename, tags, and path to a candidate input.
	let inputs: [](bool, str, []tag, str) = [];
	defer for (let i = 0z; i < len(inputs); i += 1) {
		// For file paths, these are assigned to the input, which
		// assumes ownership over them.
		if (inputs[i].0) {
			free(inputs[i].1);
			tags_free(inputs[i].2);
			free(inputs[i].3);
		};
	};

	// For a given basename, only the most specific path (i.e. with the most
	// tags) is used.
	//
	// foo.ha
	// foo+linux.ha
	// foo+linux+x86_64/
	// 	bar.ha
	// 	baz.ha
	//
	// In this case, foo+linux+x86_64 is the most specific, and so its used
	// as the build input and the other two files are discarded.

	for (let i = 0z; i < len(dirs); i += 1) {
		let name = dirs[i];
		let parsed = parse_name(name);
		let base = parsed.0, tags = parsed.2;

		let d = strings::toutf8(name);
		if (len(d) == 0 || (
			!strings::has_prefix(name, "+") &&
			!strings::has_prefix(name, "-"))) {
			continue;
		};
		if (!tagcompat(ctx.tags, tags)) {
			continue;
		};

		let path = path::join(path, name);
		let tuple = (true, strings::dup(base), tags, path);
		let superceeded = false;
		for (let j = 0z; j < len(inputs); j += 1) {
			if (inputs[j].1 != base) {
				continue;
			};
			let theirs = inputs[j].2;
			if (len(theirs) < len(tags)) {
				free(inputs[j].1);
				tags_free(inputs[j].2);
				free(inputs[j].3);
				inputs[j] = tuple;
				superceeded = true;
				break;
			} else if (len(theirs) > len(tags)) {
				// They are more specific
				superceeded = true;
				break;
			} else if (len(base) != 0) {
				return (path, inputs[j].3): ambiguous;
			};
		};
		if (!superceeded) {
			append(inputs, tuple);
		};
	};

	for (let i = 0z; i < len(files); i += 1) {
		let name = files[i];
		let parsed = parse_name(name);
		let base = parsed.0, ext = parsed.1, tags = parsed.2;

		let eligible = false;
		static const exts = [".ha", ".s"];
		for (let i = 0z; i < len(exts); i += 1) {
			if (exts[i] == ext) {
				eligible = true;
				break;
			};
		};
		if (!eligible || !tagcompat(ctx.tags, tags)) {
			tags_free(tags);
			continue;
		};

		let path = path::join(path, name);
		let tuple = (false, base, tags, path);
		let superceeded = false;
		for (let j = 0z; j < len(inputs); j += 1) {
			if (inputs[j].1 != base) {
				continue;
			};
			let theirs = inputs[j].2;
			if (len(theirs) < len(tags)) {
				// We are more specific
				free(inputs[j].1);
				tags_free(inputs[j].2);
				free(inputs[j].3);
				inputs[j] = tuple;
				superceeded = true;
				break;
			} else if (len(theirs) > len(tags)) {
				// They are more specific
				superceeded = true;
				break;
			} else if (len(base) != 0) {
				return (path, inputs[j].3): ambiguous;
			};
		};
		if (!superceeded) {
			append(inputs, tuple);
		};
	};

	for (let i = 0z; i < len(inputs); i += 1) {
		let isdir = inputs[i].0, path = inputs[i].3;
		if (isdir) {
			let iter = fs::iter(ctx.fs, path)?;
			scan_directory(ctx, ver, sha, path, iter)?;
		} else {
			let st = fs::stat(ctx.fs, path)?;
			let in = input {
				path = fs::resolve(ctx.fs, path),
				stat = st,
				ft = type_for_ext(path) as filetype,
				hash = scan_file(ctx, path, &ver.depends)?,
				basename = inputs[i].1,
				tags = inputs[i].2,
				...
			};
			append(ver.inputs, in);
			hash::write(sha, in.hash);
		};
	};
};

// Looks up a module by its identifier from HAREPATH, and returns a [version]
// which includes all eligible build inputs.
export fn lookup(ctx: *context, name: ast::ident) (version | error) = {
	let ipath = identpath(name);
	for (let i = len(ctx.paths); i > 0; i -= 1) {
		let cand = path::join(ctx.paths[i - 1], ipath);
		defer free(cand);
		match (scan(ctx, cand)) {
			v: version => return v,
			e: error => void,
		};
	};
	return module_not_found;
};

fn type_for_ext(name: str) (filetype | void) = {
	const ext = path::extension(name).1;
	return
		if (ext == ".ha") filetype::HARE
		else if (ext == ".s") filetype::ASSEMBLY
		else void;
};

fn scan_file(
	ctx: *context,
	path: str,
	deps: *[]ast::ident,
) ([]u8 | error) = {
	let f = fs::open(ctx.fs, path)?;
	defer io::close(f);
	let sha = sha256::sha256();
	//defer! hash::close(sha);

	hash::write(sha, strings::toutf8(path));

	let tee = io::tee(f, hash::writer(sha));
	defer io::close(tee);

	let lexer = lex::init(tee, path);
	let imports = parse::imports(&lexer)?;
	for (let i = 0z; i < len(imports); i += 1) {
		let ident = match (imports[i]) {
			m: ast::import_module => m: ast::ident,
			a: ast::import_alias => a.ident,
			o: ast::import_objects => o.ident,
		};
		if (!have_ident(deps, ident)) {
			append(*deps, ident);
		};
	};

	io::copy(io::empty, tee)?; // Finish spooling out the file for the SHA
	return hash::finish(sha);
};

fn have_ident(sl: *[]ast::ident, id: ast::ident) bool = {
	// XXX: We shouldn't have to deref sl here
	for (let i = 0z; i < len(*sl); i += 1) {
		if (ast::ident_eq(sl[i], id)) {
			return true;
		};
	};
	return false;
};

// Parses a set of build tags, returning void if the string is an invalid tag
// set. The caller must free the return value with [tags_free].
export fn parsetags(in: str) ([]tag | void) = {
	let tags: []tag = [];
	// defer! tags_free(tags);
	let iter = strings::iter(in);
	for (true) {
		let t = tag { ... };
		let m = match (strings::next(&iter)) {
			void => break,
			r: rune => r,
		};
		t.mode = switch (m) {
			*   => return,
			'+' => tag_mode::INCLUSIVE,
			'-' => tag_mode::EXCLUSIVE,
		};
		let buf = strio::dynamic();
		for (true) match (strings::next(&iter)) {
			void => break,
			r: rune => {
				if (ascii::isalnum(r) || r == '_') {
					strio::appendrune(buf, r);
				} else {
					strings::push(&iter, r);
					break;
				};
			},
		};
		t.name = strio::finish(buf);
		append(tags, t);
	};
	return tags;
};

// Frees a set of tags.
export fn tags_free(tags: []tag) void = {
	for (let i = 0z; i < len(tags); i += 1) {
		free(tags[i].name);
	};
	free(tags);
};

// Compares two tag sets and tells you if they are compatible.
export fn tagcompat(have: []tag, want: []tag) bool = {
	// XXX: O(n²), lame
	for (let i = 0z; i < len(want); i += 1) {
		let present = false;
		for (let j = 0z; j < len(have); j += 1) {
			if (have[j].name == want[i].name) {
				present = have[j].mode == tag_mode::INCLUSIVE;
				break;
			};
		};
		switch (want[i].mode) {
			tag_mode::INCLUSIVE => if (!present) return false,
			tag_mode::EXCLUSIVE => if (present) return false,
		};
	};
	return true;
};
