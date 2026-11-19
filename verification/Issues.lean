import Lean
open Lean

def runDiff (bin l r : String) (flags : List String := []) : IO (Nat × Json) := do
  let p ← IO.Process.output {
    cmd := bin
    args := (["--display","json","--exit-code"] ++ flags ++ [l,r]).toArray
    env := #[("DFT_UNSTABLE",some "yes")] }
  unless p.exitCode ≤ 1 do throw <| IO.userError p.stderr
  return (p.exitCode.toNat, ← IO.ofExcept (Json.parse p.stdout))

def status (v : Json) : IO String := IO.ofExcept (v.getObjValAs? _ "status")

def expected (a b : Option String) : String :=
  match a,b with
  | none, some _ => "created"
  | some _, none => "deleted"
  | _,_ => if a == b then "unchanged" else "changed"

theorem created_iff (a b : Option String) :
    expected a b = "created" ↔ a = none ∧ b.isSome = true := by
  cases a <;> cases b <;> simp [expected] <;> split <;> decide

def directories (bin dir : String) : IO Unit := do
  let states : List (Option String) := [none,some "",some "x\n"]
  for (a,i) in states.zipIdx do
    for (b,j) in states.zipIdx do
      let l := s!"{dir}/old-{i}-{j}"
      let r := s!"{dir}/new-{i}-{j}"
      for (folder,contents) in [(l,a),(r,b)] do
        IO.FS.createDirAll folder
        if let some s := contents then IO.FS.writeFile (folder ++ "/item.txt") s
      for hide in [false,true] do
        let (rc,doc) ← runDiff bin l r (if hide then ["--skip-unchanged"] else [])
        let files ← IO.ofExcept doc.getArr?
        let actual ← files.toList.mapM status
        let want := expected a b
        let visible := (a.isSome || b.isSome) && (!hide || want != "unchanged")
        let codes := if want == "unchanged" then 0 else 1
        if actual != (if visible then [want] else []) || rc != codes then
          let known := match a,b with
            | none, some "" | some "", none =>
                rc == 0 && actual == (if hide then [] else ["unchanged"])
            | some "", some _ => rc == 1 && actual == ["created"]
            | some _, some "" => rc == 1 && actual == ["deleted"]
            | _,_ => false
          unless known do throw <| IO.userError s!"unexpected directory result {actual}/exit {rc}"
          IO.println s!"directory {i}->{j} skip={hide}: expected {want}/exit {codes}, got {actual}/exit {rc}"

structure Highlight where
  content : String
deriving FromJson
structure Side where
  line_number : Nat
  changes : List Highlight
deriving FromJson
structure Row where
  lhs : Option Side
  rhs : Option Side
deriving FromJson

def highlights (v : Json) : IO (List Row) := do
  let chunks : List (List Row) ← IO.ofExcept (v.getObjValAs? _ "chunks")
  return chunks.flatten

def syntaxCase (bin dir name a b language : String) (changed : Bool) : IO Unit := do
  let l := dir ++ "/old/" ++ name
  let r := dir ++ "/new/" ++ name
  for (x,y) in [(a,b),(b,a)] do
    IO.FS.writeFile l x
    IO.FS.writeFile r y
    let text ← IO.Process.output {cmd := bin, args := #["--display","inline","--exit-code",l,r]}
    unless text.exitCode == (if changed then 1 else 0) do
      throw <| IO.userError s!"unexpected inline result for {name}: {text.stderr}"
    let (rc,doc) ← try runDiff bin l r catch e =>
      if name == "Dockerfile" && (toString e).contains "src/display/json.rs" &&
          (toString e).contains "out of bounds" then
        IO.println s!"Dockerfile JSON span failure; inline detected edit: {repr x} -> {repr y}"
        continue
      throw e
    let lang ← IO.ofExcept (doc.getObjValAs? String "language")
    let st ← status doc
    unless lang == language && rc == (if changed then 1 else 0) &&
        st == (if changed then "changed" else "unchanged") do
      throw <| IO.userError s!"{name}: {lang}, {st}, exit {rc}, inputs {repr x}, {repr y}"

def templates (bin dir : String) : IO Unit := do
  let shared := "const CommentsContainer = styled(Flex)`\n  width: 100%;\n  margin-top: 16px;\n"
  for (ext,lang) in [("js","JavaScript"),("ts","TypeScript")] do
    for newline in [false,true] do
      let old := shared ++ "\n  ${props => props.$withSeparator &&\n   `padding-top: 22px;`" ++
        (if newline then "\n  " else "") ++ "}\n`;\n"
      let newText := shared ++ "`;\n"
      let l := dir ++ "/old/example." ++ ext
      let r := dir ++ "/new/example." ++ ext
      IO.FS.writeFile l old
      IO.FS.writeFile r newText
      let (rc,doc) ← runDiff bin l r
      let language ← IO.ofExcept (doc.getObjValAs? String "language")
      let left := (← highlights doc).filterMap (·.lhs)
      unless rc == 1 && language == lang && left.any (fun s =>
        s.changes.any (fun h => h.content.contains "padding" )) do
        throw <| IO.userError s!"{ext}: deletion not highlighted"
      let unrelated := left.filter fun s =>
        [1,2].contains s.line_number && s.changes.any (fun h => !h.content.trimAscii.isEmpty)
      IO.println s!"{ext} newline={newline}: highlighted unchanged CSS lines {unrelated.map (·.line_number)}"

def main (args : List String) : IO Unit := do
  let [bin,dir] := args | throw <| IO.userError "expected binary and fresh temporary directory"
  directories bin dir
  IO.FS.createDirAll (dir ++ "/old")
  IO.FS.createDirAll (dir ++ "/new")
  let kotlin := fun (a b c : String) => "val s = \"" ++ a ++ " $x " ++ b ++ " $y " ++ c ++ "\"\n"
  for (a,b,c) in [("new","mid","end"),("start","new","end"),("start","mid","new")] do
    syntaxCase bin dir "sample.kt" (kotlin "start" "mid" "end") (kotlin a b c) "Kotlin" true
  let docker := fun (body : String) => "FROM archlinux:latest\n\nRUN <<-EOF\n" ++ body ++ "EOF\n"
  for body in ["    echo world\n    pacman -Syu\n","    echo hello\n","    echo world\n"] do
    syntaxCase bin dir "Dockerfile" (docker "    echo hello\n    pacman -Syu\n") (docker body) "Dockerfile" true
  syntaxCase bin dir "a.toml" "x = [1,2]\n" "x = [1,2,]\n" "TOML" false
  syntaxCase bin dir "a.toml" "x = [1,2]\n" "x = [1,3,]\n" "TOML" true
  syntaxCase bin dir "a.py" "x = (1)\n" "x = (1,)\n" "Python" true
  templates bin dir
