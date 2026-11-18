import Lean
open Lean

-- Compare independent public observations of the same diff.
def invoke (binary : String) (args : List String) : IO (Nat × Json) := do
  let p ← IO.Process.output {
    cmd := binary
    args := (["--display","json","--exit-code"] ++ args).toArray
    env := #[("DFT_UNSTABLE", some "yes")]}
  unless p.exitCode ≤ 1 do throw <| IO.userError p.stderr
  return (p.exitCode.toNat, ← IO.ofExcept (Json.parse p.stdout))

def checkStatus (binary dir : String) : IO Unit := do
  let mut failures := 0
  let corpus := [
    ("el","a","b","changed"), ("el","a","a","unchanged"),
    ("el","(a)","( a )","unchanged"), ("el","","(a)","created"),
    ("el","(a)","","deleted"), ("txt","red","blue","changed"),
    ("txt","same","same","unchanged"), ("txt","","word","created"),
    ("txt","word","","deleted")]
  for (ext,a,b,expected) in corpus do
    let l := dir ++ "/status-left." ++ ext
    let r := dir ++ "/status-right." ++ ext
    IO.FS.writeFile l a
    IO.FS.writeFile r b
    let (code,full) ← invoke binary [l,r]
    let (quickCode,quick) ← invoke binary ["--check-only",l,r]
    let normal : String ← IO.ofExcept (full.getObjValAs? _ "status")
    let fast : String ← IO.ofExcept (quick.getObjValAs? _ "status")
    unless normal == expected && code == (if expected == "unchanged" then 0 else 1) &&
        quickCode == code do throw <| IO.userError s!"unexpected control {ext} {a} / {b}"
    if fast != normal then
      unless fast == "unchanged" && code == 1 do throw <| IO.userError s!"unexpected status {fast}"
      failures := failures + 1
  IO.println s!"Check-only JSON disagrees with the full status on {failures}/{corpus.length} inputs."

  let l := dir ++ "/old"
  let r := dir ++ "/new"
  for (folder,word) in [(l,"a"),(r,"b")] do
    IO.FS.createDirAll folder
    IO.FS.writeFile (folder ++ "/edit.el") word
  for fast in [false,true] do
    let (code,doc) ← invoke binary ((if fast then ["--check-only"] else []) ++ ["--skip-unchanged",l,r])
    let files ← IO.ofExcept doc.getArr?
    unless code == 1 do throw <| IO.userError "directory edit missed"
    let paths ← files.toList.mapM fun f => IO.ofExcept (f.getObjValAs? String "path")
    unless paths == ["edit.el"] do
      if fast && paths.isEmpty then IO.println "Check-only directory omitted edit.el."
      else throw <| IO.userError s!"unexpected directory result {paths}"

structure Side where
  line_number : Nat
  changes : Array Json
deriving FromJson
structure Row where
  lhs : Option Side
  rhs : Option Side
deriving FromJson

-- A missing side has no line that could be novel. The predicate remains
-- valid if every present line and its novelty predicate are shifted together.
def sideNovel (novel : Nat → Bool) (line : Option Nat) : Bool :=
  line.any novel

theorem sideNovel_shift (p q : Nat → Bool) (n : Nat) (h : ∀ i, q (i+n) = p i)
    (line : Option Nat) : sideNovel q (line.map (·+n)) = sideNovel p line := by
  cases line <;> simp [sideNovel, h]

def checkRows (binary dir : String) : IO Unit := do
  let mut emptyRows := 0
  for swap in [false,true] do
    let mut reference : Option (List (Option Nat × Option Nat)) := none
    for pad in [0,1,2] do
      let header := String.join (List.replicate pad "same\n")
      let a := "(a a)\n"
      let b := "(\n (a)\n)\n"
      let l := dir ++ "/rows-left.el"
      let r := dir ++ "/rows-right.el"
      IO.FS.writeFile l (header ++ (if swap then b else a))
      IO.FS.writeFile r (header ++ (if swap then a else b))
      let (code,doc) ← invoke binary [l,r]
      unless code == 1 do throw <| IO.userError "missing structural change"
      let chunks : List (List Row) ← IO.ofExcept (doc.getObjValAs? _ "chunks")
      let mut changed := []
      for row in chunks.flatten do
        let sides := [row.lhs,row.rhs].filterMap id
        unless !sides.isEmpty && sides.all (·.line_number ≥ pad) do
          throw <| IO.userError "unexpected row outside edited region"
        if sides.all (·.changes.isEmpty) then
          IO.println s!"Empty change row: swapped={swap}, prefix lines={pad}, present lines={sides.map (·.line_number)}"
          emptyRows := emptyRows + 1
        else
          changed := (row.lhs.map (fun x => x.line_number-pad),
                      row.rhs.map (fun x => x.line_number-pad)) :: changed
      if let some prev := reference then
        unless prev == changed do throw <| IO.userError "prefix changed the rows carrying highlights"
      reference := some changed
  IO.println s!"Empty rows across six prefix/direction variants: {emptyRows}"

-- Git constructs the conflicted document. Only one source line differs, so
-- the original files are independent, exact oracles for both projections.
def checkGitConflicts (probe dir : String) : IO Unit := do
  let mut failures := 0
  for style in ["merge","diff3"] do
    for heading in ["======","=======","========","======= heading"] do
      let shared := "Title\n" ++ heading ++ "\ncommon paragraph\n\n"
      let names := ["LEFT","BASE","RIGHT"]
      let paths := names.map (fun n => dir ++ "/" ++ n)
      for (path,name) in paths.zip names do
        IO.FS.writeFile path (shared ++ name ++ "\n")
      let git ← IO.Process.output {cmd := "git", args :=
        (["-c","merge.conflictStyle=" ++ style,"merge-file","-p",
          "-L","left","-L","base","-L","right"] ++ paths).toArray}
      unless git.exitCode == 1 do throw <| IO.userError s!"expected one Git conflict: {git.stderr}"
      let rust ← IO.Process.output {cmd := probe, args := #["conflict",git.stdout]}
      unless rust.exitCode == 0 do throw <| IO.userError rust.stderr
      let expected := "1|" ++ shared ++ "LEFT\n|" ++ shared ++ "RIGHT\n"
      if rust.stdout != expected then
        let observed := "1|Title\nLEFT\n|Title\ncommon paragraph\n\nRIGHT\n"
        unless heading != "======" && rust.stdout == observed do
          throw <| IO.userError s!"unexpected Git projection {style} {heading}: {repr rust.stdout}"
        failures := failures+1
  IO.println s!"Git-generated conflict documents losing shared text: {failures}/8."

def main (args : List String) : IO Unit := do
  let [binary,dir,probe] := args | throw <| IO.userError "expected difft binary, temporary directory and probe"
  checkStatus binary dir
  checkRows binary dir
  checkGitConflicts probe dir
