import Lean

private def run (cmd : String) (args : List String) : IO String := do
  let r ← IO.Process.output {cmd, args := args.toArray}
  unless r.exitCode == 0 do throw <| IO.userError s!"{cmd} {args}: {r.stderr}"
  return r.stdout

private def check (label : String) (ok : Bool) : IO Unit :=
  unless ok do throw <| IO.userError label

def cases (alphabet : List String) : Nat → List String
  | 0 => [""]
  | n+1 => "" :: (cases alphabet n).flatMap (fun s => alphabet.map (s ++ ·))

-- Pair one-sided runs in order, stopping at every original two-sided row.
abbrev GapRow := Option Nat × Option Nat

def zipRows : List Nat → List Nat → List GapRow
  | [], rs => rs.map (fun r => (none, some r))
  | ls, [] => ls.map (fun l => (some l, none))
  | l::ls, r::rs => (some l, some r) :: zipRows ls rs

theorem zipRows_projections (ls rs : List Nat) :
    (zipRows ls rs).filterMap Prod.fst = ls ∧ (zipRows ls rs).filterMap Prod.snd = rs := by
  induction ls generalizing rs with
  | nil => simp [zipRows, List.filterMap_map, Function.comp_def]
  | cons l ls ih =>
    cases rs with
    | nil => simp [zipRows, List.filterMap_map, Function.comp_def]
    | cons r rs => simp [zipRows, (ih rs).1, (ih rs).2]

def expectedRows (input : List Char) (i : Nat := 0)
    (ls rs : List Nat := []) : List GapRow :=
  match input with
  | [] => zipRows ls rs
  | 'L' :: more => expectedRows more (i+1) (ls ++ [i]) rs
  | 'R' :: more => expectedRows more (i+1) ls (rs ++ [i])
  | _ :: more => zipRows ls rs ++ [(some i,some i)] ++ expectedRows more (i+1) [] []

-- Row labels are positions in the input shape sequence.
def column (absent : Char) (i : Nat) : List Char → List Nat
  | [] => []
  | c :: cs => (if c == absent then [] else [i]) ++ column absent (i+1) cs

theorem expectedRows_projections (input : List Char) (i : Nat) (ls rs : List Nat) :
    (expectedRows input i ls rs).filterMap Prod.fst = ls ++ column 'R' i input ∧
    (expectedRows input i ls rs).filterMap Prod.snd = rs ++ column 'L' i input := by
  induction input generalizing i ls rs with
  | nil => simpa [expectedRows, column] using zipRows_projections ls rs
  | cons c cs ih =>
    by_cases hl : c = 'L'
    · subst c
      simpa [expectedRows, column, List.append_assoc] using ih (i+1) (ls ++ [i]) rs
    by_cases hr : c = 'R'
    · subst c
      simpa [expectedRows, column, List.append_assoc] using ih (i+1) ls (rs ++ [i])
    simp [expectedRows, hl, hr, column, (zipRows_projections ls rs).1,
      (zipRows_projections ls rs).2, (ih (i+1) [] []).1, (ih (i+1) [] []).2]

def rowText (row : GapRow) : String :=
  let field := fun (n : Option Nat) => (n.map toString).getD ""
  field row.1 ++ "," ++ field row.2

def gaps (probe : String) : IO Unit := do
  for s in cases ["L","R","B"] 5 do
    let expected := ";".intercalate ((expectedRows s.toList).map rowText)
    check s!"gap {s}" ((← run probe ["gap",s]) == expected ++ "|" ++ expected)

-- The alphabet exercises each Rust character class, including non-ASCII digits.
def tokenClass (fine : Bool) (c : Char) : Option Nat :=
  if c == '1' && fine then some 1
  else if ['a','_','1','٢'].contains c then some 0 else none

private theorem dropBound (p : Char → Bool) (s : List Char) : (s.dropWhile p).length ≤ s.length := by
  induction s with
  | nil => simp
  | cons a s ih => by_cases h : p a <;> simp_all [List.dropWhile] <;> omega

def tokens (fine : Bool) : List Char → List String
  | [] => []
  | c :: cs =>
    let same := fun d => (tokenClass fine c).isSome && tokenClass fine d == tokenClass fine c
    String.ofList (c :: cs.takeWhile same) :: tokens fine (cs.dropWhile same)
termination_by xs => xs.length
decreasing_by exact Nat.lt_succ_of_le (dropBound same cs)

theorem tokens_reconstruct (fine : Bool) (s : List Char) :
    (tokens fine s).flatMap String.toList = s := by
  fun_induction tokens <;> simp_all

theorem tokens_nonempty (fine : Bool) (s : List Char) :
    "" ∉ tokens fine s := by
  fun_induction tokens <;> simp_all

def words (probe : String) : IO Unit := do
  for s in cases ["a","_","1","٢","́","."] 3 do
    let coarse := tokens false s.toList
    let fine := coarse.flatMap (fun w => tokens true w.toList)
    for ts in [coarse, fine] do
      check s!"partition {s}" (String.join ts == s && !ts.contains "")
    for k in List.range (s.length + 2) do
      let expected := (if coarse.length ≤ k then "~".intercalate coarse else "!")
        ++ "|" ++ "~".intercalate fine
      check s!"words {s} limit {k}" ((← run probe ["words",s,toString k]) == expected)

inductive Phase where | shared | left | base | right
deriving BEq

def strictStep : Phase → Char → Option Phase
  | .shared, 'O' => some .left
  | .left, 'B' => some .base
  | .left, 'S' | .base, 'S' => some .right
  | .right, 'C' => some .shared
  | p, 'T' => some p
  | _, _ => none

def marker : Char → String
  | 'O' => "<<<<<<< L\n"
  | 'B' => "||||||| base\n"
  | 'S' => "=======\n"
  | 'C' => ">>>>>>> R\n"
  | _ => "text\n"

def conflicts (probe : String) : IO Unit := do
  let mut extra := 0
  for s in cases ["O","B","S","C","T"] 4 do
    let valid := s.toList.foldlM strictStep Phase.shared == some .shared
    let accepted := (← run probe ["conflict",String.join (s.toList.map marker)]) != "error"
    check s!"rejected valid markers {s}" (!valid || accepted)
    if accepted && !valid then extra := extra + 1
  IO.println s!"Marker streams accepted outside strict grammar: {extra} / 781 examined"
  -- Generate independently projected documents with adjacent conflicts.
  let mut blocks := []
  for l in ["","left\n"] do
    for r in ["","right\n"] do
      for b in ["",marker 'B',marker 'B' ++ "ancestor\n"] do
        blocks := (marker 'O' ++ l ++ b ++ marker 'S' ++ r ++ marker 'C',l,r) :: blocks
  for (a,l,r) in blocks do
    for (b,x,y) in blocks do
      let doc := "first\r\n" ++ a ++ b ++ "tail"
      check s!"projection {repr doc}" ((← run probe ["conflict",doc]) ==
        "2|first\r\n" ++ l ++ x ++ "tail|first\r\n" ++ r ++ y ++ "tail")
  check "missing separator witness" ((← run probe ["conflict",marker 'O' ++ "left\n" ++ marker 'C']) ==
    "1|left\n|")

open Lean in
structure Highlight where
  start : Nat
  «end» : Nat
  content : String
deriving FromJson

open Lean in
structure Side where
  line_number : Nat
  changes : List Highlight
deriving FromJson

open Lean in
structure Row where
  lhs : Side
  rhs : Side
deriving FromJson

open Lean in
def jsonSpans (binary dir : String) : IO Unit := do
  for p in ["a","é","界","\t","é","🦀"] do
    let before := p ++ " "
    let line := fun word => before ++ word ++ " end"
    let paths := [dir ++ "/left.txt",dir ++ "/right.txt"]
    for (path,word) in paths.zip ["old","new"] do
      IO.FS.writeFile path ("shared\n" ++ line word ++ "\n")
    let output ← run binary (["--display","json"] ++ paths)
    let obj ← IO.ofExcept (Json.parse output)
    let chunks : List (List Row) ← IO.ofExcept (obj.getObjValAs? _ "chunks")
    let [row] := chunks.flatten | throw <| IO.userError s!"unexpected rows: {output}"
    for (side,word) in [(row.lhs,"old"),(row.rhs,"new")] do
      check "line number" (side.line_number == 1)
      let bytes := (line word).toUTF8
      for h in side.changes do
        check s!"span in {output}" (h.start ≤ h.end && h.end ≤ bytes.size &&
          (String.fromUTF8? (bytes.extract 0 h.start)).isSome &&
          (String.fromUTF8? (bytes.extract h.start h.end)) == some h.content)
      check s!"changed word in {output}" (side.changes.any fun h =>
        h.start == before.utf8ByteSize && h.end == before.utf8ByteSize + word.utf8ByteSize &&
        h.content == word)

def main (args : List String) : IO Unit := do
  let [probe,binary,dir] := args | throw <| IO.userError "expected probe, difft and temporary directory"
  jsonSpans binary dir
  conflicts probe
  gaps probe
  words probe
  IO.println "All bounded checks passed."
