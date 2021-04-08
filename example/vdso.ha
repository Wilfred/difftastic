use strings;
use format::elf;
use linux;

let ehdr: nullable *elf::header64 = null;

fn sys_infoehdr() nullable *elf::header64 = {
	static let ehdr_checked = false;
	if (ehdr_checked) {
		return ehdr;
	};
	ehdr_checked = true;

	for (let i = 0; linux::auxv[i].a_type != 0; i += 1) {
		if (linux::auxv[i].a_type != elf::at::SYSINFO_EHDR: u64)
			continue;
		ehdr = linux::auxv[i].a_val: uintptr: *elf::header64;
		return ehdr;
	};
	return null;
};

type vdso_ctx = struct {
	segbase: uintptr,
	stringtab: *char,
	symtab: *[*]elf::sym64,
	hashhdr: *elf::hashhdr,
	versym: nullable *[*]u16,
	verdef: nullable *elf::verdef64,
};

let ctx: nullable *vdso_ctx = null;

fn get_vdso_ctx() nullable *vdso_ctx = {
	static let vdso_checked = false;
	if (vdso_checked) {
		return ctx;
	};
	vdso_checked = true;

	const eh = match (sys_infoehdr()) {
		null => return null,
		x: *elf::header64 => x,
	};

	const ehui = eh: uintptr;
	let phui = ehui + eh.e_phoff: uintptr;
	let dynvec: nullable *[*]elf::dyn64 = null;
	let baseseg: nullable *void = null;

	for (let i: u16 = 0; i < eh.e_phnum; i += 1) {
		const ph = phui: *elf::phdr64;
		switch (ph.p_type) {
			elf::pt::LOAD =>
				baseseg = ehui +
					ph.p_offset: uintptr -
					ph.p_vaddr: uintptr,
			elf::pt::DYNAMIC =>
				dynvec = ehui + ph.p_offset: uintptr,
		};
		phui += eh.e_phentsize: uintptr;
	};

	if (dynvec == null || baseseg == null) {
		return null;
	};
	const dynv = dynvec: *[*]elf::dyn64;

	let segbase = baseseg: uintptr;
	let stringtab: nullable *char = null;
	let symtab: nullable *[*]elf::sym64 = null;
	let hashhdr: nullable *elf::hashhdr = null;
	let versym: nullable *[*]u16 = null;
	let verdef: nullable *elf::verdef64 = null;

	for (let i = 0; dynv[i].d_tag != elf::dt::NULL; i += 1) {
		const tabptr = (segbase + dynv[i].d_val: uintptr): *void;
		switch (dynv[i].d_tag) {
			elf::dt::STRTAB => stringtab = tabptr: *char,
			elf::dt::SYMTAB => symtab = tabptr: *[*]elf::sym64,
			elf::dt::HASH => hashhdr = tabptr: *elf::hashhdr,
			elf::dt::VERSYM => versym = tabptr: *[*]u16,
			elf::dt::VERDEF => verdef = tabptr: *elf::verdef64,
			* => continue,
		};
	};

	if (stringtab == null || symtab == null || hashhdr == null) {
		return null;
	};

	if (verdef == null) {
		versym = null;
	};

	// TODO: use a static variable here somehow(?)
	const vctx = alloc(vdso_ctx {
		segbase = segbase,
		stringtab = stringtab: *char,
		symtab = symtab: *[*]elf::sym64,
		hashhdr = hashhdr: *elf::hashhdr,
		verdef = verdef,
		versym = versym,
	});
	ctx = vctx;

	return ctx;
};

fn vdso_checkver(ctx: *vdso_ctx, version: str, num: u32) bool = {
	let prev = null: *elf::verdef64;
	let cur = match (ctx.verdef) {
		null => return true,
		vd: *elf::verdef64 => vd,
	};
	const versym = match (ctx.versym) {
		null => return true,
		vs: *[*]u16 => vs[num] & 0x7fff
	};
	for (cur != prev) {
		if (cur.vd_flags & elf::ver_flg::BASE: u16 == 0 &&
			cur.vd_ndx & 0x7fff == versym) {
			const aux = (cur: uintptr +
				cur.vd_aux: uintptr): *elf::verdaux64;
			const name = ctx.stringtab +
				aux.vda_name: uintptr: *char;
			return version == strings::fromc(name);
		};
		prev = cur;
		cur += cur.vd_next: uintptr;
	};
	return false;
};

export fn getsym(symname: str, symver: str) nullable *void = {
	const ctx = match (get_vdso_ctx()) {
		null => return null,
		x: *vdso_ctx => x,
	};

	const sym_types = (1 << elf::stt::NOTYPE |
			1 << elf::stt::OBJECT |
			1 << elf::stt::FUNC |
			1 << elf::stt::COMMON): size;

	const sym_binds = (1 << elf::stb::GLOBAL |
			1 << elf::stb::WEAK): size;

	for (let i = 0u32; i < ctx.hashhdr.nchain; i += 1) {
		const sym = ctx.symtab[i];
		const symtype = 1 << (sym.st_info & 0xf): size;
		const symbind = 1 << (sym.st_info >> 4): size;
		if (symtype & sym_types == 0 || symbind & sym_binds == 0 ||
			sym.st_shndx == 0) {
			continue;
		};
		const name = ctx.stringtab + sym.st_name: uintptr: *char;
		const s: str = strings::fromc(name);
		if (s != symname)
			continue;
		if (!vdso_checkver(ctx, symver, i))
			continue;
		return (ctx.segbase + sym.st_value: uintptr): *void;
	};
	return null;
};
