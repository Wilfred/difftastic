#!/usr/bin/env python3
"""Realistic mutation fuzzer for difftastic.

Takes real source files, applies edits of the kind that occur in real
editing/version-control circumstances (truncation, line edits, whitespace
changes, unicode injection, mixed line endings, minification), then runs
difft(original, mutant) in a real display mode. Records distinct crashes.
"""
import os, sys, random, subprocess, hashlib, glob, re, time, shutil

DIFFT = "/home/user/difftastic/target/release/difft"
BASE = "/tmp/claude-0/-home-user-difftastic/1e10d51a-1c4e-5c16-a5ab-3367f464188c/scratchpad"
CORPUS = os.path.join(BASE, "corpus")
CRASHES = os.path.join(BASE, "fuzz_crashes")
os.makedirs(CRASHES, exist_ok=True)

SEED = int(sys.argv[1]) if len(sys.argv) > 1 else 0
DURATION = int(sys.argv[2]) if len(sys.argv) > 2 else 300
rng = random.Random(SEED * 7919 + 13)

files = sorted(glob.glob(os.path.join(CORPUS, "*")))

UNICODE_NASTY = [chr(c) for c in [0x301,0x200b,0x200d,0x202e,0xfeff,0x00,0x3000,0x1f600,0x07,0x09,0x06dd,0x1ab0,0xe0100,0x0d,0x85,0x2028,0x2029,0x0308,0x0f]]

def to_lines(b):
    return b.split(b"\n")

def mut_truncate(b):
    if len(b) < 2: return b
    return b[:rng.randint(0, len(b)-1)]

def mut_line_delete(b):
    lines = to_lines(b)
    if len(lines) < 2: return b
    n = rng.randint(1, max(1, len(lines)//3))
    for _ in range(n):
        if len(lines) < 2: break
        del lines[rng.randrange(len(lines))]
    return b"\n".join(lines)

def mut_line_dup(b):
    lines = to_lines(b)
    if not lines: return b
    for _ in range(rng.randint(1, 5)):
        i = rng.randrange(len(lines))
        lines.insert(i, lines[i])
    return b"\n".join(lines)

def mut_line_swap(b):
    lines = to_lines(b)
    if len(lines) < 2: return b
    for _ in range(rng.randint(1, 8)):
        i, j = rng.randrange(len(lines)), rng.randrange(len(lines))
        lines[i], lines[j] = lines[j], lines[i]
    return b"\n".join(lines)

def mut_whitespace(b):
    lines = to_lines(b)
    out = []
    for ln in lines:
        r = rng.random()
        if r < 0.3: out.append(ln.rstrip())
        elif r < 0.5: out.append(ln + b" " * rng.randint(1, 8))
        elif r < 0.65: out.append(ln.replace(b"    ", b"\t"))
        elif r < 0.8: out.append(ln.replace(b"\t", b"    "))
        else: out.append(ln)
    return b"\n".join(out)

def mut_final_newline(b):
    if b.endswith(b"\n"): return b.rstrip(b"\n")
    return b + b"\n"

def mut_unicode_inject(b):
    s = b.decode("utf-8", "replace")
    lines = s.split("\n")
    if not lines: return b
    for _ in range(rng.randint(1, 12)):
        i = rng.randrange(len(lines))
        ln = lines[i]
        pos = rng.randrange(len(ln)+1)
        ch = rng.choice(UNICODE_NASTY) * rng.randint(1, 4)
        lines[i] = ln[:pos] + ch + ln[pos:]
    return "\n".join(lines).encode("utf-8", "replace")

def mut_crlf(b):
    lines = to_lines(b)
    out = []
    for ln in lines:
        r = rng.random()
        if r < 0.3: out.append(ln + b"\r")
        else: out.append(ln)
    return b"\n".join(out)

def mut_minify(b):
    lines = to_lines(b)
    if not lines: return b
    i = rng.randrange(len(lines))
    j = min(len(lines), i + rng.randint(5, 200))
    joined = b" ".join(lines[i:j])
    return b"\n".join(lines[:i] + [joined] + lines[j:])

def mut_repeat_line(b):
    lines = to_lines(b)
    if not lines: return b
    i = rng.randrange(len(lines))
    lines[i] = lines[i] * rng.randint(50, 2000)
    return b"\n".join(lines)

def mut_bytenoise(b):
    b = bytearray(b)
    if not b: return bytes(b)
    for _ in range(rng.randint(1, 20)):
        b[rng.randrange(len(b))] = rng.randrange(256)
    return bytes(b)

def mut_insert_block(b, other):
    lines = to_lines(b); ol = to_lines(other)
    if not ol: return b
    i = rng.randrange(len(lines)+1) if lines else 0
    k = rng.randrange(len(ol)); m = min(len(ol), k + rng.randint(1, 30))
    return b"\n".join(lines[:i] + ol[k:m] + lines[i:])

MUTS = [mut_truncate, mut_line_delete, mut_line_dup, mut_line_swap,
        mut_whitespace, mut_final_newline, mut_unicode_inject, mut_crlf,
        mut_minify, mut_repeat_line, mut_bytenoise]

MODES = [
    ["--color", "never"],
    ["--color", "never", "--display", "inline"],
    ["--color", "never", "--display", "json"],
    ["--color", "never", "--width", "40"],
    ["--color", "never", "--width", "200"],
    ["--color", "always"],
    ["--color", "never", "--context", "0"],
    ["--color", "never", "--ignore-comments"],
    ["--color", "never", "--tab-width", "1"],
]

def run(a_bytes, b_bytes, ext, mode):
    a = f"/tmp/fz_a_{SEED}.{ext}"; c = f"/tmp/fz_b_{SEED}.{ext}"
    with open(a, "wb") as fh: fh.write(a_bytes)
    with open(c, "wb") as fh: fh.write(b_bytes)
    env = dict(os.environ, DFT_GRAPH_LIMIT="1000000")
    try:
        p = subprocess.run([DIFFT] + mode + [a, c], capture_output=True,
                           timeout=40, env=env)
    except subprocess.TimeoutExpired:
        return None, None
    code = p.returncode
    if code is not None and (code < 0 or code >= 101):
        return code, p.stderr.decode("utf-8", "replace")
    return None, None

def sig_of(stderr, code):
    m = re.search(r"panicked at ([^\n]+)", stderr)
    if m:
        loc = m.group(1).split(":")
        # keep file:line:col
        return ":".join(loc[:3]).strip()
    return f"signal_or_code_{code}"

seen = set()
start = time.time(); count = 0; crashes = 0
while time.time() - start < DURATION:
    count += 1
    f = rng.choice(files)
    with open(f, "rb") as fh: b = fh.read()
    mut = b
    for _ in range(rng.randint(1, 3)):
        m = rng.choice(MUTS)
        mut = m(mut)
    if rng.random() < 0.15:
        mut = mut_insert_block(mut, open(rng.choice(files),"rb").read())
    ext = f.split(".")[-1]
    mode = rng.choice(MODES)
    a_bytes, b_bytes = (b, mut) if rng.random() < 0.5 else (mut, b)
    code, err = run(a_bytes, b_bytes, ext, mode)
    if code is not None:
        sig = sig_of(err or "", code)
        crashes += 1
        if sig not in seen:
            seen.add(sig)
            h = hashlib.sha1(sig.encode()).hexdigest()[:12]
            cd = os.path.join(CRASHES, h)
            os.makedirs(cd, exist_ok=True)
            with open(os.path.join(cd, "a." + ext), "wb") as fh: fh.write(a_bytes)
            with open(os.path.join(cd, "b." + ext), "wb") as fh: fh.write(b_bytes)
            with open(os.path.join(cd, "info.txt"), "w") as fh:
                fh.write(f"code={code}\nmode={' '.join(mode)}\nsig={sig}\nseed={SEED}\next={ext}\n\n")
                fh.write((err or "")[:3000])
            print(f"[seed {SEED}] NEW CRASH sig={sig} code={code} mode={' '.join(mode)} ext={ext}", flush=True)
print(f"[seed {SEED}] done: {count} iters, {crashes} hits, {len(seen)} distinct", flush=True)
