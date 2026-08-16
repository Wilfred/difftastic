#!/usr/bin/env python3
"""Minimize a crashing difft input pair while preserving the panic signature."""
import sys, subprocess, os, re

DIFFT = "/home/user/difftastic/target/release/difft"

def sig(stderr, code):
    m = re.search(r"panicked at ([^\n]+)", stderr)
    if m: return ":".join(m.group(1).split(":")[:3]).strip()
    return f"code_{code}"

def crashes(a, b, mode, ext, target_sig):
    fa = f"/tmp/min_a.{ext}"; fb = f"/tmp/min_b.{ext}"
    open(fa,"wb").write(a); open(fb,"wb").write(b)
    env = dict(os.environ, DFT_GRAPH_LIMIT="1000000")
    try:
        p = subprocess.run([DIFFT]+mode+[fa,fb], capture_output=True, timeout=30, env=env)
    except subprocess.TimeoutExpired:
        return False
    c = p.returncode
    if c is None or (c < 101 and c >= 0): return False
    return sig(p.stderr.decode("utf-8","replace"), c) == target_sig

def reduce_lines(data, other, is_a, mode, ext, tsig):
    """Try removing chunks of lines from `data` (a if is_a else b)."""
    lines = data.split(b"\n")
    step = max(1, len(lines)//2)
    while step >= 1:
        i = 0
        while i < len(lines):
            trial = lines[:i] + lines[i+step:]
            td = b"\n".join(trial)
            a, b = (td, other) if is_a else (other, td)
            if crashes(a, b, mode, ext, tsig):
                lines = trial
            else:
                i += step
        step //= 2
    return b"\n".join(lines)

def reduce_bytes(data, other, is_a, mode, ext, tsig):
    step = max(1, len(data)//2)
    while step >= 1:
        i = 0
        while i < len(data):
            trial = data[:i] + data[i+step:]
            a, b = (trial, other) if is_a else (other, trial)
            if crashes(a, b, mode, ext, tsig):
                data = trial
            else:
                i += step
        step //= 2
    return data

def main():
    d = sys.argv[1]; ext = sys.argv[2]
    mode = sys.argv[3].split() if len(sys.argv)>3 else ["--color","never"]
    a = open(os.path.join(d,f"a.{ext}"),"rb").read()
    b = open(os.path.join(d,f"b.{ext}"),"rb").read()
    info = open(os.path.join(d,"info.txt")).read()
    tsig = re.search(r"sig=(\S+)", info).group(1)
    assert crashes(a,b,mode,ext,tsig), "does not reproduce"
    for _ in range(3):
        a = reduce_lines(a, b, True, mode, ext, tsig)
        b = reduce_lines(b, a, False, mode, ext, tsig)
        a = reduce_bytes(a, b, True, mode, ext, tsig)
        b = reduce_bytes(b, a, False, mode, ext, tsig)
    open(os.path.join(d,f"min_a.{ext}"),"wb").write(a)
    open(os.path.join(d,f"min_b.{ext}"),"wb").write(b)
    print(f"MINIMIZED {d}: a={len(a)}b b={len(b)}b sig={tsig}")
    print("=== min_a ==="); sys.stdout.buffer.write(a); print()
    print("=== min_b ==="); sys.stdout.buffer.write(b); print()

main()
