use bufio;
use bytes;
use encoding::hex;
use encoding::utf8;
use errors;
use fmt;
use fs;
use hare::ast;
use hare::unparse;
use io;
use os;
use path;
use strconv;
use strings;
use time;

// The manifest file format is a series of line-oriented records. Lines starting
// with # are ignored.
//
// - "version" indicates the manifest format version, currently 1.
// - "input" is an input file, and its fields are the file hash, path, inode,
//   and mtime as a Unix timestamp.
// - "module" is a version of a module, and includes the module hash and the set
//   of input hashes which produce it.

def VERSION: int = 1;

fn getinput(in: []input, hash: []u8) nullable *input = {
	for (let i = 0z; i < len(in); i += 1) {
		if (bytes::equal(in[i].hash, hash)) {
			return &in[i];
		};
	};
	return null;
};

// Loads the module manifest from the build cache for the given ident. The
// return value borrows the ident parameter. If the module is not found, an
// empty manifest is returned.
export fn manifest_load(ctx: *context, ident: ast::ident) (manifest | error) = {
	let manifest = manifest {
		ident = ident,
		inputs = [],
		versions = [],
	};
	let ipath = identpath(manifest.ident);
	defer free(ipath);
	let cachedir = path::join(ctx.cache, ipath);
	defer free(cachedir);

	let mpath = path::join(cachedir, "manifest");
	defer free(mpath);

	// TODO: We can probably eliminate these locks by using atomic writes
	// instead
	let l = lock(ctx.fs, cachedir)?;
	defer unlock(ctx.fs, cachedir, l);

	let file = match (fs::open(ctx.fs, mpath, fs::flags::RDONLY)) {
		errors::noentry => return manifest,
		err: fs::error => return err,
		file: *io::stream => file,
	};
	defer io::close(file);

	let inputs: []input = [], versions: []version = [];

	let buf: [4096]u8 = [0...];
	let file = bufio::buffered(file, buf, []);
	for (true) {
		let line = match (bufio::scanline(file)?) {
			io::EOF => break,
			line: []u8 => match (strings::try_fromutf8(line)) {
				// Treat an invalid manifest as empty
				utf8::invalid => return manifest,
				s: str => s,
			},
		};
		defer free(line);

		if (strings::has_prefix(line, "#")) {
			continue;
		};

		let tok = strings::tokenize(line, " ");
		let kind = match (strings::next_token(&tok)) {
			void => continue,
			s: str => s,
		};

		if (kind == "version") {
			let ver = match (strings::next_token(&tok)) {
				void => return manifest,
				s: str => s,
			};
			match (strconv::stoi(ver)) {
				v: int => if (v != VERSION) {
					return manifest;
				},
				* => return manifest,
			};
		} else if (kind == "input") {
			let hash = match (strings::next_token(&tok)) {
				void => return manifest, s: str => s,
			}, path = match (strings::next_token(&tok)) {
				void => return manifest, s: str => s,
			}, inode = match (strings::next_token(&tok)) {
				void => return manifest, s: str => s,
			}, mtime = match (strings::next_token(&tok)) {
				void => return manifest, s: str => s,
			};

			let hash = match (hex::decode(hash)) {
				* => return manifest,
				b: []u8 => b,
			};
			let inode = match (strconv::stoz(inode)) {
				* => return manifest,
				z: size => z,
			};
			let mtime = match (strconv::stoi64(mtime)) {
				* => return manifest,
				i: i64 => time::from_unix(i),
			};

			let parsed = parse_name(path);
			let ftype = match (type_for_ext(path)) {
				void => return manifest,
				ft: filetype => ft,
			};

			append(inputs, input {
				hash = hash,
				path = strings::dup(path),
				ft = ftype,
				stat = fs::filestat {
					mask = fs::stat_mask::MTIME | fs::stat_mask::INODE,
					mtime = mtime,
					inode = inode,
				},
				basename = strings::dup(parsed.0),
				tags = parsed.2,
			});
		} else if (kind == "module") {
			let modhash = match (strings::next_token(&tok)) {
				void => return manifest, s: str => s,
			};
			let modhash = match (hex::decode(modhash)) {
				* => return manifest,
				b: []u8 => b,
			};

			let minputs: []input = [];
			for (true) {
				let hash = match (strings::next_token(&tok)) {
					void => break,
					s: str => s,
				};
				let hash = match (hex::decode(hash)) {
					* => return manifest,
					b: []u8 => b,
				};
				defer free(hash);

				let input = match (getinput(inputs, hash)) {
					null => return manifest,
					i: *input => i,
				};
				append(minputs, *input);
			};

			append(versions, version {
				hash = modhash,
				inputs = minputs,
			});
		} else {
			return manifest;
		};

		// Check for extra tokens
		match (strings::next_token(&tok)) {
			void => void,
			s: str => return manifest,
		};
	};

	manifest.inputs = inputs;
	manifest.versions = versions;
	return manifest;
};

// Returns true if the desired module version is present and current in this
// manifest.
export fn current(manifest: *manifest, version: *version) bool = {
	// TODO: This is kind of dumb. What we really need to do is:
	// 1. Update scan to avoid hashing the file if a manifest is present,
	//    and indicate that the hash is cached somewhere in the type. Get an
	//    up-to-date stat.
	// 2. In [current], test if the inode and mtime are equal to the
	//    manifest version. If so, presume the file is up-to-date. If not,
	//    check the hash and update the manifest to the new inode/mtime if
	//    the hash matches. If not, the module is not current; rebuild.
	let cached: nullable *version = null;
	for (let i = 0z; i < len(manifest.versions); i += 1) {
		if (bytes::equal(manifest.versions[i].hash, version.hash)) {
			cached = &manifest.versions[i];
			break;
		};
	};
	let cached = match (cached) {
		null => return false,
		v: *version => v,
	};

	assert(len(cached.inputs) == len(version.inputs));
	for (let i = 0z; i < len(cached.inputs); i += 1) {
		let a = cached.inputs[i], b = cached.inputs[i];
		assert(a.path == b.path);
		let ast = a.stat, bst = b.stat;
		if (ast.inode != bst.inode
				|| time::compare(ast.mtime, bst.mtime) != 0) {
			return false;
		};
	};
	return true;
};

// Writes a module manifest to the build cache.
export fn manifest_write(ctx: *context, manifest: *manifest) (void | error) = {
	let ipath = identpath(manifest.ident);
	defer free(ipath);
	let cachedir = path::join(ctx.cache, ipath);
	defer free(cachedir);

	let mpath = path::join(cachedir, "manifest");
	defer free(mpath);

	let l = lock(ctx.fs, cachedir)?;
	defer unlock(ctx.fs, cachedir, l);

	let fd = fs::create(ctx.fs, mpath, 0o644)?;
	defer io::close(fd);

	let ident = unparse::identstr(manifest.ident);
	defer free(ident);
	fmt::fprintfln(fd, "# {}", ident)?;
	fmt::fprintln(fd, "# This file is an internal Hare implementation detail.")?;
	fmt::fprintln(fd, "# The format is not stable.")?;
	fmt::fprintfln(fd, "version {}", VERSION)?;
	for (let i = 0z; i < len(manifest.inputs); i += 1) {
		const input = manifest.inputs[i];
		let hash = hex::encodestr(input.hash);
		defer free(hash);

		const want = fs::stat_mask::INODE | fs::stat_mask::MTIME;
		assert(input.stat.mask & want == want);
		fmt::fprintfln(fd, "input {} {} {} {}",
			hash, input.path, input.stat.inode,
			time::unix(input.stat.mtime));
	};

	for (let i = 0z; i < len(manifest.versions); i += 1) {
		const ver = manifest.versions[i];
		let hash = hex::encodestr(ver.hash);
		defer free(hash);

		fmt::fprintf(fd, "module {}", hash);

		for (let j = 0z; j < len(ver.inputs); j += 1) {
			let hash = hex::encodestr(ver.inputs[i].hash);
			defer free(hash);

			fmt::fprintf(fd, " {}", hash);
		};

		fmt::fprintln(fd);
	};
};

fn lock(fs: *fs::fs, cachedir: str) (*io::stream | error) = {
	// XXX: I wonder if this should be some generic function in fs or
	// something
	match (os::mkdirs(cachedir)) {
		errors::exists => void,
		void => void,
		e: fs::error => return e,
	};
	let lockpath = path::join(cachedir, "manifest.lock");
	defer free(lockpath);

	let logged = false;
	for (true) {
		match (fs::create(fs, lockpath, 0o644, fs::flags::EXCL)) {
			fd: *io::stream => return fd,
			(errors::busy | errors::exists) => void,
			err: fs::error => return err,
		};
		if (!logged) {
			fmt::errorfln("Waiting for lock on {}...", lockpath);
			logged = true;
		};
		time::sleep(1 * time::SECOND);
	};

	abort("Unreachable");
};

fn unlock(fs: *fs::fs, cachedir: str, s: *io::stream) void = {
	let lockpath = path::join(cachedir, "manifest.lock");
	defer free(lockpath);
	match (fs::remove(fs, lockpath)) {
		void => void,
		err: fs::error => abort("Error removing module lock"),
	};
};

fn input_finish(in: *input) void = {
	free(in.hash);
	free(in.path);
	free(in.basename);
	tags_free(in.tags);
};

// Frees resources associated with this manifest.
export fn manifest_finish(m: *manifest) void = {
	for (let i = 0z; i < len(m.inputs); i += 1) {
		input_finish(&m.inputs[i]);
	};

	for (let i = 0z; i < len(m.versions); i += 1) {
		free(m.versions[i].inputs);
	};
};
