namespace test

type A = {
  [<IfFalse; CoolProperty(A = 1, Enabled = false); IsTrue>]
  A : int
}
