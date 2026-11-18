import Lean
open Lean

structure Event where
  id : Nat
  kind : String
  content : Nat
  depth : Nat
  «open» : String
  close : String
  ignored : Bool
  mate : Int
deriving FromJson, Inhabited

abbrev Forest := Array Event
abbrev Sides := Forest × Forest

structure Section where
  input : Sides
  route : List (Array Json)
  revisit : Nat
  cap : Nat
deriving FromJson

structure Hunk where
  window : List (Option Nat × Option Nat)
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

def partner (f : Forest) (id : Nat) : Option Nat := do
  let n ← (occurrences f).find? (·.id == id)
  if n.mate > 0 then some n.mate.toNat else none

-- For reciprocal maps, an opposite occurrence cannot be claimed twice.
theorem reciprocal_injective (lhs rhs : Nat → Option Nat)
    (back : ∀ i j, lhs i = some j → rhs j = some i)
    (ha : lhs a = some j) (hb : lhs b = some j) : a = b :=
  Option.some.inj ((back a j ha).symm.trans (back b j hb))

def reciprocal (f g : Forest) := (occurrences f).all fun n =>
  n.mate ≤ 0 || partner g n.mate.toNat == some n.id

def compatible (f g : Forest) := (occurrences f).all fun n =>
  n.mate ≤ 0 || (occurrences g).any fun m =>
    n.mate == m.id && n.kind == m.kind &&
    (if n.kind == "atom" then n.content == m.content
     else n.open == m.open && n.close == m.close)

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

-- On an equal-subtree edge every non-ignored occurrence, in preorder,
-- must agree with the classifications actually produced before sliding.
def deepPartners (f snapshot : Forest) (i : Nat) (n : Event) : List Event :=
  let subtree := occurrences (f.extract i (lastToken f i n + 1))
  subtree.filterMap fun e => (occurrences snapshot).find? (fun z => z.id == e.id && !z.ignored)

-- A witness accounts for every charged move from the same starting history.
inductive Legal (l r : Forest) : Cursor → Nat → Prop where
  | done (h : finished l r (normalize l r raw) = true) : Legal l r raw 0
  | step (h : m ∈ moves l r (normalize l r raw)) (tail : Legal l r m.dest cost) :
      Legal l r raw (m.cost + cost)

def replayFrom (l r : Forest) (before : Sides) (raw : Cursor) :
    List (Array Json) → Except String { cost : Nat // Legal l r raw cost }
  | [] => do
    if h : finished l r (normalize l r raw) then return ⟨0, .done h⟩
    else throw "incomplete route"
  | row :: rows => do
    let s := normalize l r raw
    let kind : String ← fromJson? row[0]!
    let left : Nat ← fromJson? row[1]!
    let right : Nat ← fromJson? row[2]!
    let weight : Nat ← fromJson? row[3]!
    unless left == ((active l s.i).map (·.id)).getD 0 &&
      right == ((active r s.j).map (·.id)).getD 0 do throw "cursor mismatch"
    let some m := (moves l r s).attach.find? (fun m => m.val.kind == kind && m.val.cost == weight)
      | throw s!"illegal {kind} with cost {weight}"
    if kind == "equal" then
      let xs := deepPartners l before.1 s.i l[s.i]!
      let ys := deepPartners r before.2 s.j r[s.j]!
      unless xs.length == ys.length && (xs.zip ys).all (fun (x,y) =>
        x.mate == y.id && y.mate == x.id) do throw "deep subtree mismatch"
    let tail ← replayFrom l r before m.val.dest rows
    return ⟨m.val.cost + tail.val, .step m.property tail.property⟩

def main (args : List String) : IO Unit := do
  let doc ← IO.ofExcept (Json.parse (← IO.FS.readFile args[0]!))
  let samples : List Sample ← IO.ofExcept (fromJson? doc)
  let mut failures : Std.HashMap String Nat := {}
  let mut total := 0
  let mut capped := 0
  let mut revisits := 0
  for t in samples do
    let mut issues := []
    for (phase,(l,r)) in [("before",t.before),("after",t.after)] do
      unless (occurrences l ++ occurrences r).all (·.mate ≥ 0) do issues := (phase ++ " coverage") :: issues
      unless reciprocal l r && reciprocal r l do issues := (phase ++ " reciprocity") :: issues
      unless compatible l r && compatible r l do issues := (phase ++ " compatibility") :: issues
    unless partition t.pre.1 (t.paths.map (·.input.1)) &&
      partition t.pre.2 (t.paths.map (·.input.2)) do issues := "partition" :: issues
    for h in t.hunks do
      unless hunkSide (h.rows.map Prod.fst) h.novel.1 t.a &&
        hunkSide (h.rows.map Prod.snd) h.novel.2 t.b do issues := "hunk" :: issues
      unless hunkSide (h.window.map Prod.fst) h.novel.1 t.a &&
        hunkSide (h.window.map Prod.snd) h.novel.2 t.b do issues := "alignment window" :: issues
    for p in t.paths do
      total := total+1
      if p.cap > 0 then capped := capped+1
      if p.revisit > 0 then revisits := revisits+1
      match replayFrom p.input.1 p.input.2 t.before {} p.route with
      | .error e => issues := e :: issues
      | .ok cost =>
        let best := (minimum p.input.1 p.input.2 {}).run' {}
        if cost.val != best then issues := "cost gap" :: issues
    for issue in issues.eraseDups do
      unless failures.contains issue do IO.println s!"First {issue}: {repr t.a} vs {repr t.b}, split={t.split}"
      failures := failures.insert issue (failures.getD issue 0 + 1)
  IO.println s!"{samples.length} samples; {total} sections; {capped} sections reached cap; {revisits} sections revisited first history at cap; findings {repr failures.toList}"
  unless samples.length > 0 && total > 0 && revisits > 0 do
    throw <| IO.userError "corpus did not exercise the allocator revisit"
  if failures.toList.any (fun (name,_) => name != "after reciprocity") then
    throw <| IO.userError "unexpected structural invariant failure"
