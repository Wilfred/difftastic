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
def zipRows : List Nat → List Nat → List String
  | [], rs => rs.map (fun r => s!",{r}")
  | ls, [] => ls.map (fun l => s!"{l},")
  | l::ls, r::rs => s!"{l},{r}" :: zipRows ls rs

def expectedRows (input : List Char) (i : Nat := 0)
    (ls rs : List Nat := []) : List String :=
  match input with
  | [] => zipRows ls rs
  | 'L' :: more => expectedRows more (i+1) (ls ++ [i]) rs
  | 'R' :: more => expectedRows more (i+1) ls (rs ++ [i])
  | _ :: more => zipRows ls rs ++ [s!"{i},{i}"] ++ expectedRows more (i+1) [] []

def gaps (probe : String) : IO Unit := do
  for s in cases ["L","R","B"] 5 do
    let expected := ";".intercalate (expectedRows s.toList)
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

def main (args : List String) : IO Unit := do
  let probe := args[0]!
  gaps probe
  words probe
  IO.println "Gap and word checks passed."
