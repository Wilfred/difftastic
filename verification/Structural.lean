import Lean
open Lean

structure Event where
  id : Nat
  kind : String
  content : Nat
  depth : Nat
  «open» : String
  close : String
  mate : Int
deriving FromJson, Inhabited

abbrev Forest := Array Event
abbrev Sides := Forest × Forest

structure Section where
  input : Sides
  route : List (Array Json)
  cap : Nat
deriving FromJson

structure Hunk where
  rows : List (Option Nat × Option Nat)
  novel : List Nat × List Nat
deriving FromJson

structure Sample where
  a : String
  b : String
  split : Bool
  pre : Sides
  paths : List Section
  before : Sides
  after : Sides
  hunks : List Hunk
deriving FromJson

private def occurrences (f : Forest) := f.toList.filter (·.kind != "close")

def validMap (f g : Forest) : Bool :=
  (occurrences f).all fun n =>
    n.mate ≥ 0 && (n.mate == 0 || (occurrences g).any fun m =>
      n.mate == m.id && m.mate == n.id && n.kind == m.kind &&
      (if n.kind == "atom" then n.content == m.content
       else n.open == m.open && n.close == m.close))

def partition (f : Forest) (sections : List Forest) : Bool :=
  let unclassified := ((occurrences f).filter (·.mate == -1)).map (·.id)
  let delegated := (sections.flatMap occurrences).map (·.id)
  unclassified.mergeSort == delegated.mergeSort

def hunkSide (rows : List (Option Nat)) (novel : List Nat) (source : String) : Bool :=
  let visible := rows.filterMap id
  visible.Pairwise (· < ·) && visible.all (· < (source.splitOn "\n").length) &&
    novel.all visible.contains

-- A paired opening creates a barrier at its two closing tokens. One-sided
-- openings require no barrier: their closings may be passed independently.
structure Cursor where
  i : Nat := 0
  j : Nat := 0
  barriers : List (Nat × Nat) := []
deriving Inhabited, BEq, Hashable

def isClose (f : Forest) (i : Nat) := (f[i]?.map (·.kind)) == some "close"

partial def normalize (l r : Forest) (s : Cursor) : Cursor := Id.run do
  let barrier := s.barriers.head?
  if isClose l s.i && barrier.map Prod.fst != some s.i then
    return normalize l r {s with i := s.i+1}
  if isClose r s.j && barrier.map Prod.snd != some s.j then
    return normalize l r {s with j := s.j+1}
  if barrier == some (s.i,s.j) then
    return normalize l r ⟨s.i+1,s.j+1,s.barriers.drop 1⟩
  return s

def active (f : Forest) (i : Nat) : Option Event :=
  f[i]?.filter (·.kind != "close")

def lastToken (f : Forest) (i : Nat) (n : Event) :=
  if n.kind == "atom" then i else
    f.findIdx (fun x => x.kind == "close" && x.id == n.id)

structure Move where
  kind : String
  cost : Nat
  dest : Cursor

def moves (l r : Forest) (s : Cursor) : List Move := Id.run do
  let mut ms := []
  let a := active l s.i
  let b := active r s.j
  if a.isSome then ms := ⟨"left",300,{s with i := s.i+1}⟩ :: ms
  if b.isSome then ms := ⟨"right",300,{s with j := s.j+1}⟩ :: ms
  if let (some x,some y) := (a,b) then
    let depth := min 40 (max x.depth y.depth - min x.depth y.depth)
    let p := lastToken l s.i x
    let q := lastToken r s.j y
    if x.content == y.content then
      let punct := x.kind == "atom" && [",",";","."].contains x.open
      ms := ⟨"equal",1+depth+(if punct then 200 else 0),⟨p+1,q+1,s.barriers⟩⟩ :: ms
    if x.kind == "open" && y.kind == "open" && x.open == y.open && x.close == y.close then
      ms := ⟨"pair",10+depth,⟨s.i+1,s.j+1,(p,q)::s.barriers⟩⟩ :: ms
  return ms

def finished (l r : Forest) (s : Cursor) :=
  s.i == l.size && s.j == r.size && s.barriers.isEmpty

partial def minimum (l r : Forest) (raw : Cursor) :
    StateM (Std.HashMap Cursor Nat) Nat := do
  let s := normalize l r raw
  if finished l r s then return 0
  if let some n := (← get)[s]? then return n
  let mut costs := []
  for m in moves l r s do
    costs := (m.cost + (← minimum l r m.dest)) :: costs
  let best := costs.min?.get!
  modify (·.insert s best)
  return best

def replay (p : Section) : Except String Nat := do
  let (l,r) := p.input
  let mut s : Cursor := {}
  let mut cost := 0
  for row in p.route do
    s := normalize l r s
    let kind : String ← fromJson? row[0]!
    let left : Nat ← fromJson? row[1]!
    let right : Nat ← fromJson? row[2]!
    let weight : Nat ← fromJson? row[3]!
    unless left == ((active l s.i).map (·.id)).getD 0 &&
      right == ((active r s.j).map (·.id)).getD 0 do throw "cursor mismatch"
    let some m := (moves l r s).find? (fun m => m.kind == kind && m.cost == weight)
      | throw s!"illegal {kind} with cost {weight}"
    cost := cost + weight
    s := m.dest
  unless finished l r (normalize l r s) do throw "incomplete route"
  return cost

def main (args : List String) : IO Unit := do
  let doc ← IO.ofExcept (Json.parse (← IO.FS.readFile args[0]!))
  let samples : List Sample ← IO.ofExcept (fromJson? doc)
  let mut failures : Std.HashMap String Nat := {}
  let mut total := 0
  let mut capped := 0
  for t in samples do
    let mut issues := []
    for (phase,(l,r)) in [("before",t.before),("after",t.after)] do
      unless validMap l r && validMap r l do issues := phase :: issues
    unless partition t.pre.1 (t.paths.map (·.input.1)) &&
      partition t.pre.2 (t.paths.map (·.input.2)) do issues := "partition" :: issues
    for h in t.hunks do
      unless hunkSide (h.rows.map Prod.fst) h.novel.1 t.a &&
        hunkSide (h.rows.map Prod.snd) h.novel.2 t.b do issues := "hunk" :: issues
    for p in t.paths do
      total := total+1
      if p.cap > 0 then capped := capped+1
      match replay p with
      | .error e => issues := e :: issues
      | .ok cost =>
        let best := (minimum p.input.1 p.input.2 {}).run' {}
        if cost != best then issues := "cost gap" :: issues
    for issue in issues.eraseDups do
      unless failures.contains issue do IO.println s!"First {issue}: {repr t.a} vs {repr t.b}, split={t.split}"
      failures := failures.insert issue (failures.getD issue 0 + 1)
  IO.println s!"{samples.length} samples; {total} sections; {capped} sections reached cap; findings {repr failures.toList}"
