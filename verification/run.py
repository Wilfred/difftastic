"""Run from any directory with Cargo, rustc and elan's lean wrapper installed."""
import argparse
import json
import os
from pathlib import Path
import subprocess
import tempfile

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("--published-only", action="store_true",
                    help="run the public-output and Git conflict experiments only")
args = parser.parse_args()

here = Path(__file__).resolve().parent
repo = here.parent
with tempfile.TemporaryDirectory() as tmp:
    work = Path(tmp)
    # Compile the private helper verbatim with integer line labels. It only
    # copies these labels. The other functions come directly from their modules.
    context = (repo / "src/display/context.rs").read_text()
    start = context.index("fn compact_gaps(")
    gap = work / "gap.rs"
    gap.write_text(context[start:context.index("\n}", start) + 2])
    conflict = work / "conflicts.rs"
    conflict.write_text((repo / "src/conflicts.rs").read_text().replace("//!", "//"))
    probe = work / "probe"
    subprocess.run(["rustc", "--edition=2021", here / "probe.rs", "-o", probe],
                   env=dict(os.environ, GAP_SOURCE=str(gap), CONFLICT_BODY=str(conflict),
                            WORD_SOURCE=str(repo / "src/words.rs")), check=True)
    subprocess.run(["cargo", "build", "--release", "--locked", "-j2"], cwd=repo, check=True)
    metadata = subprocess.check_output(["cargo", "metadata", "--no-deps", "--format-version=1"], cwd=repo)
    binary = Path(json.loads(metadata)["target_directory"]) / "release/difft"
    if not args.published_only:
        subprocess.run(["lean", "+leanprover/lean4:v4.35.0", "--run", here / "Check.lean",
                        probe, binary, work], env=dict(os.environ, DFT_UNSTABLE="yes"), check=True)
        trace = work / "structural.json"
        subprocess.run(["cargo", "test", "--release", "--locked", "-j2", "--bin", "difft",
                        "export_structural_cases", "--", "--ignored"], cwd=repo,
                       env=dict(os.environ, DFT_STRUCTURAL_TRACE=str(trace)), check=True)
        subprocess.run(["lean", "+leanprover/lean4:v4.35.0", "--run",
                        here / "Structural.lean", trace, binary, work], check=True)
    subprocess.run(["lean", "+leanprover/lean4:v4.35.0", "--run",
                    here / "Published.lean", binary, work, probe], check=True)
